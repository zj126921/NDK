package com.zj.ndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private static final String TAG = "MainActivity1";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(NativeHelper.stringFromZJ());

//        tv.setText(String.valueOf(NativeHelper.getAppKey()));
//        NativeHelper.printLog("哈哈哈："+String.valueOf(NativeHelper.getArea(10,20)));


        int[] datas = NativeHelper.getArea(10, 20);
        for (int data:datas){
            NativeHelper.printLog("哈哈哈",String.valueOf(data));
        }
    }

}
