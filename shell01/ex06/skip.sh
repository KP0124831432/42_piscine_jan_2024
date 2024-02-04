ls -l | sed -n '1~2p'

#Usamos o ls -l para listar, em conjunto com o comando sed ( stream editor, para fazer alteracoes basicas de textos..
#com a flag -n para silenciar linhas especificas, utilizamos o padrao de linha '1~2p' como padrao de linha ( um print a cada 2 ocorrencias ) 
