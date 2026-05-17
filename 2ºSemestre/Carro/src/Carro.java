

public class Carro {
    
    public static class carro{
    String cor, modelo;
    double velocatual, velocmax = 150;
    boolean ligado;
    int marcha = 0;
        
    public carro(String cor, String modelo, double velocatual, double velocmax){
        this.cor = "prata"; 
        this.modelo = "C7";
        this.velocatual = 0;
        this.velocmax = 341;
        this.ligado = false;
        

    }
    
    public void ligar(){
        ligado = !ligado;
    }
    
    public void acelera(int veloc){
        if(velocatual >= velocmax){
            System.out.println("Esta na velocidade maxima");
        }else{
        this.velocatual += veloc;
        }
    }
    
        public int passarmarcha(){
            
            
            
            if(ligado){
            if(velocatual >= 0 && velocatual< 40){
                marcha++;
            }
            if(velocatual >= 60 && velocatual < 80){
                marcha++;
            }
            if(velocatual >= 80 && velocatual < 110){
                marcha++;
            }
            if(velocatual >= 110 && velocatual< 150){
                marcha++;
            }
            if(velocatual >= 150 && velocatual< 200){
                marcha++;
            }
            if(velocatual >= 200 && velocatual< 280){
                marcha++;
            }
            if(velocatual >= 280 && velocatual < 340){
                marcha++;
            }

            }else{
             marcha = 0;
            }
            
            return marcha;
           
        }
        
        public void velocimetro(){
            System.out.println("\n\nModelo do carro: "+ modelo + "\ncor: "+ cor + "\n=====Velocimetro====== \nSituação: " + ligado + "\nPonteiro " + velocatual + "\nMarcha " + marcha);
        }
    }
    
    public static void main(String[] args) {
        
        carro corvette = new carro( "preto", "C8", 0, 341);
        
        corvette.velocimetro();
        corvette.ligar();
        corvette.velocimetro();
        corvette.acelera(30);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();
        corvette.acelera(40);
        corvette.passarmarcha();
        corvette.velocimetro();

    }
}
