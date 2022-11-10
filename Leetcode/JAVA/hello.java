package Leetcode.JAVA;

import java.util.Stack;

public class hello{

    public static String Duplicate(String s){
        Stack<Character> stack = new Stack<Character>();
        
        for(int i=0;i< s.length();i++){
            if(!stack.empty() || stack.pop() != s[i]){
                stack.push(s[i]);
            }else{
                stack.pop();
            }

            
    }

    public static void main(String[] args){
        String s;
        s = "hello";
        System.out.println(Duplicate(s));
    }
}