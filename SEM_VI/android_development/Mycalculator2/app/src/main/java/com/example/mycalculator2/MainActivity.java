package com.example.mycalculator2;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    Button button1,button2,button3,button4,button5;
    EditText edt1;
    boolean add,sub,div,mul;
    float result1,result2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        button1=(Button) findViewById(R.id.add1);
        button2=(Button) findViewById(R.id.sub);
        button3=(Button) findViewById(R.id.mul);
        button4=(Button) findViewById(R.id.div);
        button5=(Button) findViewById(R.id.equal);
        edt1=(EditText) findViewById(R.id.edt1);

        button1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                if (edt1 == null) {
                    edt1.setText("");
                } else {
                    result1 = Float.parseFloat(edt1.getText() + "");
                    add = true;
                    edt1.setText(null);
                }
            }
        });

        button2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                result1 = Float.parseFloat(edt1.getText() + "");
                sub = true;
                edt1.setText(null);
            }
        });

        button3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                result1 = Float.parseFloat(edt1.getText() + "");
                mul = true;
                edt1.setText(null);
            }
        });

        button4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                result1 = Float.parseFloat(edt1.getText() + "");
                div = true;
                edt1.setText(null);
            }
        });

        button5.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                result2 = Float.parseFloat(edt1.getText() + "");

                if (add == true) {
                    edt1.setText(result1 + result2 + "");
                    add = false;
                }

                if (sub == true) {
                    edt1.setText(result1 - result2 + "");
                    sub = false;
                }

                if (mul == true) {
                    edt1.setText(result1 * result2 + "");
                    mul = false;
                }

                if (div == true) {
                    edt1.setText(result1 / result2 + "");
                    div = false;
                }
            }
        });
    }
}