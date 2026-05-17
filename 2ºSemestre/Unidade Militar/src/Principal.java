public class Principal {

    public static void main(String[] args) {
        
        // 1. Criamos um array (gaveta) que aceita qualquer tipo de Soldado [1]
        // Note que o tipo da lista é a classe PAI
        Soldado[] pelotao = new Soldado[3];
        
        // 2. Adicionamos tipos diferentes na mesma lista (Polimorfismo) [1, 3]
        pelotao[0] = new Soldado("Rogerio", "Cabo");
        pelotao[1] = new Medico("Pedro", "Tenente");
        pelotao[2] = new Atirador("Marcos", "Sargento");
        
        System.out.println("=== ORDEM DO GENERAL: TODOS ATUAR! ===\n");
        
        // 3. Usamos um loop (for-each) para percorrer o pelotão [6]
        // Para cada 's' (Soldado) dentro do 'pelotao'...
        for (Soldado s : pelotao) {
            // O comando é o mesmo (Atuar), mas o resultado depende de QUEM é o objeto [3]
            System.out.println(s.nome + " (" + s.patente + ") -> " + s.Atuar());
        }
    }
}