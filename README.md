Gueda
=====

Pequeno aplicativo escrito em c para meu curso de calculo 1.
Um pequeno simulador de queda livre.
Para utiliza-lo é necessário ter instalado as libs de desenvolvimento do gtk. e também ter instalado o gnuplot.

![Principal](https://github.com/diegorubin/gueda/blob/master/screenshots/principal.png)

![Graficos](https://github.com/diegorubin/gueda/blob/master/screenshots/graficos.png)


## Para compilar e rodar

```
autoreconf -vi
./configure --prefix=/usr
make
sudo make install
gueda
```
