class Solution {
    public String reverseVowels(String s) {
        String vowels = "aeiouAEIOU";
        char[] a = s.toCharArray();
        int i = 0;
        int j = a.length - 1;
        while (i < j) {
            if (vowels.indexOf(a[i]) == -1)
                i++;
            else if (vowels.indexOf(a[j]) == -1)
                j--;
            else {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
        }
        return new String(a);
    }
}