package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        Veena var1 = new Veena();
        var1.play();

        Saxophone var2 = new Saxophone();
        var2.play();

        Playable var3 = new Veena();
        var3.play();

        var3 = new Saxophone();
        var3.play();
    }
}