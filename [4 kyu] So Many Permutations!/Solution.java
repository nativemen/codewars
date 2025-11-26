import java.util.ArrayList;
import java.util.List;

class Permutations {
    static void backtrace(char[] array, StringBuffer sb, int len, List<String> list) {
        if (sb.length() == len) {
            if (!list.contains(sb.toString())) {
                list.add(sb.toString());
            }

            return;
        }

        for (int i = 0; i < len; i++) {
            if (array[i] == '\0') {
                continue;
            }

            char old = array[i];
            sb.append(array[i]);
            array[i] = '\0';
            backtrace(array, sb, len, list);
            array[i] = old;
            sb.deleteCharAt(sb.length() - 1);
        }
    }

    public static List<String> singlePermutations(String s) {
        char[] array = s.toCharArray();
        StringBuffer sb = new StringBuffer("");
        List<String> list = new ArrayList<>();

        backtrace(array, sb, s.length(), list);

        return list;
    }
}

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

class Permutations {
    static void permute(String prefix, String remain, HashSet<String> sets) {
        if (remain.length() == 0) {
            sets.add(prefix);
            return;
        }

        for (int i = 0; i < remain.length(); i++) {
            permute(prefix + remain.charAt(i), remain.substring(0, i) + remain.substring(i + 1), sets);
        }
    }

    public static List<String> singlePermutations(String s) {
        HashSet<String> sets = new HashSet<>();

        permute("", s, sets);

        return new ArrayList<>(sets);
    }
}