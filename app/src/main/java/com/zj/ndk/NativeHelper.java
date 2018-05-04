package com.zj.ndk;

import java.util.List;

/**
 * Created by dell on 2018/5/3.
 */

public class NativeHelper {
    static {
        // 加载C代码库, 库的名称, 必须是CMakeLists.txt中指定的名称
        System.loadLibrary("native-lib");
    }


    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public static native String stringFromJNI();

    public static native String stringFromZJ();

    public static native int getAppKey();

    //在C中打印log
    public static native void printLog(String tag,String str);

    public static native int[] getArea(int width, int height);



}
