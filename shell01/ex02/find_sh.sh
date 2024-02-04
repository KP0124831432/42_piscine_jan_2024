find . -type f -name '*.sh' -printf "%f\n" | sed 's/\.sh//' 


# Find no diretorio atual arquivos com  o final .sh e printamos o nome do ficheiro %f\n com uma quebra #de linha

#Usamos o comando sed  para substiturir o .sh por nada ( s/ significa uma substituicao, o \. significa #um ponto litereal e o sh... o // indica que nao queremos fazer mais nada depois disso


