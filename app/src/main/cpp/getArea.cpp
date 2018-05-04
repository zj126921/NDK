//
// Created by dell on 2018/5/4.
//
#include <jni.h>

extern "C"
JNIEXPORT jintArray JNICALL
Java_com_zj_ndk_NativeHelper_getArea(JNIEnv *env,jobject thiz, jint width_, jint height_){

    class Shape{
        protected:
            int width,height;

        public:
            Shape(int a = 0,int b = 1){
                width = a;
                height = b;
            }
            int area(){
                return width * height;
            }
    };

    class Rectangle : public Shape{
        public:
            Rectangle(int a = 0,int b = 0):Shape(a,b){}
            int getPerimeter(){
                return (width + height)*2;
            }
    };

    class Triangular : public Shape{
        public:
        Triangular(int a = 0,int b = 0):Shape(a,b){}

        int area(){
            return width * height / 2;
        }
    };


    int width = width_;
    int height = height_;

    Shape shape(width,height);

    Rectangle rectangle(width,height);

    Triangular triangular(width,height);


    int size = 3;
    jintArray list = env->NewIntArray(size);

    jint datas[] = {shape.area(),rectangle.getPerimeter(),triangular.area()};

//    jint *data = new jint[size];
//    for (int i = 0; i < 3; ++i) {
//        if (i == 0){
//            data[i] = (jint) shape.area();
//        } else if (i == 1){
//            data[i] = (jint) rectangle.getPerimeter();
//        } else if (i == 2){
//            data[i] = (jint) triangular.area();
//        }
//    }

    env->SetIntArrayRegion(list, 0, size, datas);
    return list;
}



