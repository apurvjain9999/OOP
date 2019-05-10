import java.util.Scanner;
// Scanner in = new Scanner(System.in);
// int temp = in.nextInt();

class encode{

public static void main(String args[]){
    int temp=0;
    int j=0;
    String word = "abci";
    char arr[] = new char[word.length()];
    char brr[] = new char[word.length()+2];

    word = word.toUpperCase();
    arr =word.toCharArray();
    System.out.println(word);
    for(int i=0;i<word.length();i++)
    {
        if(arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O'|| arr[i]=='U')
        {
            temp = i;
            System.out.println(arr[i]);
            break;
        }
    }

    // System.out.println(arr[temp]);
    brr[0] = arr[temp];
    int k=1;
    for(j=temp+1;j<word.length();j++)
    {
        brr[k] = arr[j];
        k++;
    }
    for(j=0;j<temp;j++)
    {
        brr[k] = arr[j];
        k++;
    }

    brr[k]='A';
    brr[k+1] = 'Y';
    for(j=0;j<word.length()+2;j++)
    {
        System.out.print(brr[j]);
    }
    
}

}