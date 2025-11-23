public class Source{
    static void methodforarray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
public static void main(String []args){
            methodforarray(new int[]{10,12,13,14,15,16});
        
    }
}

//Returning an array
public class Main{
    static int[] getMethod(){
        return new int[]{10,12,1,31,4,15,16};
    }
    public static void main(String args[]){
        int arr[]=getMethod();
    
    for(int i:arr){
        System.out.println(i);
    }
}
}
