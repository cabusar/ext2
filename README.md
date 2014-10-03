ext2
====

Some exercises about ext2 manipulation (C)

FR : 

Quelques exemples de manipulation de partition EXT2 en C.

Pour la création de l'image : 

dd if=/dev/urandom of=/home/user/image.img bs=2048 count=3000 && mkfs -t ext2 /home/user/image.img

Pour la compilation du code : 

make nom_du_fichier

Pour l'éxécution : 

./nom_du_fichier chemine_de_l'image
