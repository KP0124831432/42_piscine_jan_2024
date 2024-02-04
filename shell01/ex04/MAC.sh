ifconfig | grep -oP 'ether \K\S+'

# Nesse acessamos o comando ifconfig
# Usamos grep faz busca dentro do comando procurando por linhas..
# Buscamos a expressao 'ether \K\S+' 
# \K Significa a partir daqui
# \S+ Significa um ou mais carecteries, nao incluindo o espaco.
