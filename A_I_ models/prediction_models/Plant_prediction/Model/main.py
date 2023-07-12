import streamlit as st
from PIL import Image
from tensorflow.keras.utils import load_img, img_to_array
import numpy as np
from keras.models import load_model

model = load_model('plants.h5',compile=False)
lab = {0: 'Aloevera (Ghritakumari)', 1: 'Dhaniya_patti (Coriander Leaves)', 2: 'Money Plant (Pothos)', 3: 'Neem (Margosa) ', 4: 'Pudina (Mint Leaves)'}

def processed_img(img_path):
    img=load_img(img_path,target_size=(256,256,3))
    img=img_to_array(img)
    img=img/255
    img=np.expand_dims(img,[0])
    answer=model.predict(img)
    y_class = answer.argmax(axis=-1)
    print(y_class)
    y = " ".join(str(x) for x in y_class)
    y = int(y)
    res = lab[y]
    print(res)
    return res

def main():
    img1 = Image.open('../Meta/plant_logo_.png')
    img1 = img1.resize((100,100))

    st.image(img1,use_column_width=False)
    st.title("Plants Classification")
    st.markdown('''<h4 style='text-align: left; color: #d73b5c;'>You can identify any of the following 5 plants which we normally grow in Indian households  - </h4>''',
                unsafe_allow_html=True)
    st.markdown('''<h8 style ='text-align: left;color: #8db004;'> Aloevera (Ghritakumari)</h8>''', unsafe_allow_html=True)
    st.markdown('''<h6 style ='text-align: left;color: #2b9434;'> Neem (Margosa) </h6>''', unsafe_allow_html=True)
    st.markdown('''<h6 style ='text-align: left;color: #3ac745;'> Money Plant (Pothos)</h6>''', unsafe_allow_html=True)
    st.markdown('''<h6 style ='text-align: left;color: #3bd16d;'> Pudina (Mint Leaves)</h6>''', unsafe_allow_html=True)
    st.markdown('''<h6 style ='text-align: left;color: #97fa46;'> Dhaniya Patti (Coriander Leaves) </h6>''', unsafe_allow_html=True)

    img_file = st.file_uploader("Choose an Image plant ", type=["jpg", "png","jpeg"])
    if img_file is not None:
        st.image(img_file,use_column_width=False)
        save_image_path = '../upload_images/'+img_file.name
        with open(save_image_path, "wb") as f:
            f.write(img_file.getbuffer())

        if st.button("Predict"):
            result = processed_img(save_image_path)
            st.success("Predicted Plant is: "+result)
if __name__ == '__main__':
    main() 
