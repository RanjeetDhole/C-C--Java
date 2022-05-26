//Window create and 

import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class Calculator
{
    public static void  main(String arg[])
    {


        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class Demo
{
    public String DataDe()
    {
        return "Jay Ganesh";
    }
}

class MarvellousFrame extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button bobj1;
    public Button bobj2;
    public Button bobj3;
    public TextField tobj;

    public MarvellousFrame(String name)
    {
        fobj = new Frame(name);
        bobj1 =new Button("+");
        bobj2 =new Button("-");
        bobj3 =new Button("=");
        tobj = new TextField();

        tobj.setBounds(60,60,170,20);
        bobj1.setBounds(110,130,90,20);
        bobj2.setBounds(110,130,90,20);
        bobj3.setBounds(110,130,90,20);

        fobj.add(bobj1);
        fobj.add(bobj2);
        fobj.add(bobj3);
        fobj.add(tobj);


        fobj.setSize(600,600);
        fobj.setVisible(true);
        fobj.setLayout(null);

        bobj1.addActionListener(this);
        bobj2.addActionListener(this);
        bobj3.addActionListener(this);
        fobj.addWindowListener(this);
    }

    public void  windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent obj)
    {
        Demo dobj = new Demo();

        String str = dobj.DataDe();
        tobj.setText(str);

    }
}





