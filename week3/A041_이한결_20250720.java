class Solution {
    public String solution(String s) {
        String[] arr = s.split(" ", -1);
        StringBuilder answer = new StringBuilder();

        for (int i = 0; i < arr.length; ++i) {
            if (arr[i].length() > 0) {
                answer.append(Character.toUpperCase(arr[i].charAt(0)));
                if (arr[i].length() > 1)
                    answer.append(arr[i].substring(1).toLowerCase());
            }
            if (i < arr.length - 1) answer.append(" ");
        }

        return answer.toString();
    }
}