/*
Definir um TAD para manter (inserir, remover) e consultar uma biblioteca de resumos de filmes e séries (pense nos diferentes tipos de consulta). A biblioteca tem um conjunto de resumos e links,  e cada filme/série tem um título, uma categoria (drama, comédia, ficção, terror, infantil, etc), língua original, duração e ano de lançamento.

É possível fazer um TAD único ou dois (biblioteca, e filme/série), caso sejam considerados cada filme/série em particular e a biblioteca como um todo (conjunto de filmes/séries).

=============================

TAD biblioteca {
Dados: 
	listafilmes: filme
	listaseries: serie
Operações:
	consultarfilmes(S: listafilmes)
	consultarseries(S: listaseries)
}

TAD filme {
Dados: 
	id_filme: int
	nome: string
	descricao: string
	resumo: string
	link: string
	id_categoria: categoria
	faixaetaria: int
	duracao: Date
Operações:
	incluirfilme(E: nome; S: id_filme)
	excluirfilme(E: id_filme)
	assistirfilme(E: link; S: transmissao)
}

TAD serie {
Dados: 
	id_serie: int
	nome: string
	descricao: string
	resumo: string
	link: string
	id_categoria: categoria 
	faixaetaria: int
	temporadas: int
Operações:
	incluirserie(E: nome; S: id_serie)
	excluirserie(E: id_serie)
	assistirserie(E: link; S: transmissao)
}

TAD categoria {
Dados: 
	id_categoria: int
	nome: string
Operações:
	adicionarcategoria(E: nome; S: id_categoria)
	excluircategoria(E: id_categoria)
}




*/