public class merge {
    public static void main(String args[]){
        int[] arr={1,2,3,0,0,0};
        int count=0;
        for(int i:arr) 
        {
            if(arr[i]!=0){
            count++;
            }
            break;
        }
        System.out.println(count);
    }
}
