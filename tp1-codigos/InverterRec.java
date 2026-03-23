import java.util.Scanner;

class InverterRec{

//funçao recursiva que acessa a penultima posiçao da string onde contem o ultimo caracter e controla o caracter da string a partir do i, a chamada acessa o caracter anterior junto com o caracter ja visto
    public static String inverter(String p, int i) {
        if (i < 0) {
            return "";
        }
        return p.charAt(i) + inverter(p, i - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String p = sc.nextLine();

        while (!(p.length() == 3 &&
                 p.charAt(0) == 'F' &&
                 p.charAt(1) == 'I' &&
                 p.charAt(2) == 'M')) {

            String invertida = inverter(p, p.length() - 1);
            System.out.println(invertida);

            p = sc.nextLine();
        }

        sc.close();
    }
}
