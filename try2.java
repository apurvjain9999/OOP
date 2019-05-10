import java.util.Scanner;
public class try2{
public static void main(String[] args)
{
    Scanner in=new Scanner(System.in);
    int a[][]= new int[4][];
    a[0]=new int[2];
    a[1]=new int[3];
    a[2]=new int[4];
    a[3]=new int[6];
    int b[][]= new int[4][];
    b[0]=new int[2];
    b[1]=new int[3];
    b[2]=new int[4];
    b[3]=new int[6];
    for(int i=0;i<a.length;i++)
    {
        System.out.println("Enter data for "+(i+1)+" row :-");
        for(int j=0;j<a[i].length;j++)
            a[i][j]=in.nextInt();
    }
        for(int i=0;i<a.length;i++)
         {
            for(int j=0;j<a[i].length;j++)
                {
                    System.out.print(a[i][j]+" ");
                }
            System.out.println();
         }
    for(int i=0;i<a.length;i++)
    {
        int s=0;
        for(int p: a[i])
            s+=p;
        for(int j=0;j<a[i].length;j++)
        {
            if(j==0)
                b[i][j]=s;
            else
            {
                b[i][j]=s-a[i][j-1];
                s=b[i][j];
            }
        }
    }
        for(int i=0;i<b.length;i++)
         {
            for(int j=0;j<b[i].length;j++)
                {
                    System.out.print(b[i][j]+" ");
                }
            System.out.println();
         }

}
}
