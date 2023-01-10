# proiectMAP
# 11. Se dă un număr natural N. Să se afișeze acest număr cu cifre romane (I, V, X, L, C, D, M).
![Captură](https://user-images.githubusercontent.com/122386300/211624845-5aa946e2-cd84-480a-8c27-2a66489eb09b.PNG)

Functia numar_cifre_romane primeste ca parametru o variabila n care reprezinta numarul care va fi transformat in cifre romane.
Am declarat o variabila i pe care am initializat-o cu 0 si o vom folosi ca index pentru parcurgerea tuturor valorilor.
Am declarat un vector de valori, apoi un alt string cu toate simbolurile posibile pentru cifrele romane si un string rezultat care va memora rezultatul final.
Atat timp cat numarul este mai mare decat 0 parcurgem in ordine inversa string-ul de valori si adunam la rezultat simbolul corespunzator, dupa care scadem valoarea respectiva din numar. Mai apoi incrementam indexul, iar la final functia va returna rezultatul.

![Capturăgh](https://user-images.githubusercontent.com/122386300/211626398-d28904ee-20a8-4940-bb1f-f81cbb05b095.PNG)

In main am declarat un numar pe care utilizatorul il va introduce de la tastatura, dupa care apelam functia numar_cifre_romane avand ca parametru numarul introdus si se afiseaza rezultatul.
Cateva exemple de solutii ar fi:
- pentru un numar format dintr-o singura cifra:

![Captură1nr](https://user-images.githubusercontent.com/122386300/211627488-778f6cb8-2187-447b-abb7-3e92f016aac1.PNG)

- pentru un numar format din doua cifre:

![Captură2c](https://user-images.githubusercontent.com/122386300/211627504-987a10a4-b6da-41e7-a9a4-e3c337ea033f.PNG)

- pentru un numar format din trei cifre:

![3jjkhjg](https://user-images.githubusercontent.com/122386300/211627515-a78daa84-f62c-488d-be99-9f5b9b7ae561.PNG)

- pentru un numar format din patru cifre:

![4tgfh](https://user-images.githubusercontent.com/122386300/211627537-e4d0cf7a-ae6f-44d9-aad2-be89882db646.PNG)
