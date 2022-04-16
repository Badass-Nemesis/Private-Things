import java.io.*;
import java.util.*;

public class Print_Subsequence {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);;
        String str = scn.next();
        printSS(str,"");
    }

    public static void printSS(String str, String ans) {
        if(str.length() ==0){
            System.out.println(ans);
            return;
        }

        char ch = str.charAt(0);
        //roq = rest of the question -> rest of the string basically
        String roq = str.substring(1);

        printSS(roq, ans+ch);
        printSS(roq, ans+"");
    }

}