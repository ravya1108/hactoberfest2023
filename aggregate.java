import java.util.Scanner;
 class add{
    String a,b,c;
   add(String a,String b,String c)
    {   
      this.a=a;
        this.b=b;
       this.c=c;

    }
}
class emp{
    int id,f;

    add a1;
    emp(int id,int f,add a1)
{    
       this.id=id;
       this.f=f;
          this.a1=a1;
       

    }
    void display()
    {
        System.out.println(a1.a+" "+ id+"  "+f);
    }
}
class aggre2{
    public static void main(String args[])
    {   
        add a1=new add("a","bdc","cty");
        add a2=new add("x","yty","zyu");
        emp e1=new emp(1,2,a1);
        emp e2=new emp(9,9,a2);
        e1.display();    
        e2.display();    
    }
}
