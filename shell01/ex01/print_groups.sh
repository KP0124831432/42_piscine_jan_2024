id -Gn $FT_USER | tr -s ' ' ',' | tr -d '\n'


# Usei o id -Gn para puchar o group name do grupo
# O  Tr -s para substituir o espaco por virgula
# O Tr -d \n para deletar a nova linha

