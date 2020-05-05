package com.deeshant.ndkapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        sample_text.text = "Addition: "+add(4,3).toString()

        sample_text2.text = "Subtraction: "+sub(4,3).toString()

        sample_tex3.text = "Multiplication: "+mult(4,3).toString()

        sample_tex4.text = "Division: "+div(4,3).toString()
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    external fun add(x: Int, y :Int):Int

    external fun sub(x: Int, y :Int):Int

    external fun mult(x: Int, y :Int):Int

    external fun div(x: Int, y :Int):Int

    companion object {
        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("native-lib")
        }
    }
}
