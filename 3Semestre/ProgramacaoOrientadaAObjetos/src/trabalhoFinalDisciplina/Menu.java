package trabalhoFinalDisciplina;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Menu {
	private Loja loja;
	
	public Menu() {
		this.loja  = new Loja();
	}
	
	public static void main(String[] args) throws Exception {
		Menu m = new Menu();
		
		Scanner sc = new Scanner(System.in);
		boolean continuar = true;

		System.out.println("SEJA MUITO BEM-VINDO(A) AO SISTEMA DE COMPRAS DESENVOLVIDO PELOS ALUNOS MIGUEL VALENTINI, HENRY PECATTI TIBOLA E VINICIUS BAREA PARA A DISCIPLINA DE POO!");
		
		try {			
			m.loja.carregarProdutos("produtos.json");
			m.loja.corrigirCodigoProdutos();
			m.loja.carregarFornecedores("fornecedores.json");
			m.loja.corrigirCodigoFornecedores();
			m.loja.carregarClientes("clientes.json");
			m.loja.corrigirCodigoClientes();
			m.loja.carregarPedidos("pedidos.json");
			m.loja.corrigirCodigoPedidos();
			m.loja.carregarUsuariosAdmin("usuariosAdmin.json");
		} catch (IOException e) {
			System.out.println("\nErro: " + e.getMessage());
		}
		
		while (continuar) {
			System.out.println("\n" + m.linha() + "\n         Menu Principal\n" + m.linha());
			System.out.println(" 1 - Realizar Cadastro");
			System.out.println(" 2 - Realizar Login");
			System.out.println(" 0 - Sair");
			System.out.print("Opção: ");
			
			String resposta = sc.nextLine();
			
			switch (resposta) {
			case "1":
				try {
					Cliente c = m.criarCliente(sc);
					m.loja.cadastrarCliente(c);					
					System.out.println("\nCliente cadastrado com sucesso!");
				} catch (Exception e) {
					System.out.println("\nErro: " + e.getMessage());
				}
    			break;
			case "2":
				try {
					m.realizarLogin(sc);					
				} catch (Exception e) {
					System.out.println("\nErro: " + e.getMessage());
				}
				break;
			case "88":
				//Usuario u = new Usuario("cliente1", "senha", TipoUsuario.CLIENTE);
				//u.setCliente(new Cliente("Test Client", "111111111", "test@example.com", "1234-5678-9012-3456", new Endereco("Test St", "123", "", "Test B", "00000-000", "Test City", "TS"), null, new Usuario("cliente1", "senha", TipoUsuario.CLIENTE)));
				m.menuCliente(m.loja.clientes.get(0).getUsuario(), sc);
				break;
			case "99":
				m.menuAdministrador(sc);
				break;
			case "0":
				continuar = false;
				System.out.println("\nEncerrando sistema...");
				try {					
					m.loja.gravarListaJSON("produtos.json", m.loja.produtos);
					m.loja.gravarListaJSON("usuariosAdmin.json", m.loja.usuariosAdmin);
					m.loja.gravarListaJSON("fornecedores.json", m.loja.fornecedores);
					m.loja.gravarListaJSON("clientes.json", m.loja.clientes);
					m.loja.gravarListaJSON("pedidos.json", m.loja.pedidos);
				} catch (Exception e) {
					System.out.println("\nErro: " + e.getMessage());
				}
				break;
			default:
				System.out.println("\nOpção inválida!");
			}
		}
		
		sc.close();
	}
	
    public void menuAdministrador(Scanner sc) {
    	boolean continuar = true;
    	System.out.println("\nLogin como ADMINISTRADOR realizado com sucesso!");
    	
    	while (continuar) {
    		System.out.println("\n" + linha() + "\n     Menu de Administrador\n" + linha());
    		System.out.println("1 - Menu Fornecedores");
    		System.out.println("2 - Menu Produtos");
    		System.out.println("3 - Menu Clientes");
    		System.out.println("4 - Menu Pedidos");
    		System.out.println("5 - Menu Usuários Admin");
    		System.out.println("0 - Voltar ao menu principal");
    		System.out.print("Opção: ");
    		
    		String resposta = sc.nextLine();
    		
    		switch (resposta) {
    		case "1":
    			menuAdministradorFornecedores(sc);
    			break;
    		case "2":
    			menuAdministradorProdutos(sc);
    			break;
    		case "3":
    			menuAdministradorClientes(sc);
    			break;
    		case "4":
    			menuAdministradorPedidos(sc);
    			break;
    		case "5":
    			menuAdministradorUsuarios(sc);
    			break;
    		case "0":
    			continuar = false;
    			System.out.println("\nSaindo do acesso de administrador...");
    			break;
    		default:
    			System.out.println("\nOpção inválida.");
    		}
    	}
    }
    
    public void menuAdministradorFornecedores(Scanner sc) {
		System.out.println("\n" + linha() + "\n     Menu de Fornecedores\n" + linha());
		System.out.println("1 - Cadastrar fornecedor");
		System.out.println("2 - Editar fornecedor");
		System.out.println("3 - Excluir fornecedor");
		System.out.println("4 - Consultar fornecedores por código/nome");
		System.out.println("5 - Mostrar todos fornecedores");
		System.out.println("0 - Voltar ao menu principal");
		System.out.print("Opção: ");
		
		String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {
				Fornecedor f = this.criarFornecedor(sc);
				loja.cadastrarFornecedor(f);
				System.out.println("\nFornecedor Cadastrado com Sucesso!");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {
				System.out.print("Digite o código do fornecedor a ser editado: ");
				int codigo = sc.nextInt();
				sc.nextLine();
				
				loja.existeFornecedor(codigo);
				
				Fornecedor fornecedor = new Fornecedor();
				
				System.out.println("Digite o novo nome do fornecedor (ou deixe em branco para manter): ");
				String nome = sc.nextLine();
				if (!nome.isBlank()) fornecedor.setNome(nome);
				System.out.println("Digite a nova descrição do fornecedor (ou deixe em branco para manter): ");
				String descricao = sc.nextLine();
				if (!descricao.isBlank()) fornecedor.setDescricao(descricao);
				System.out.println("Digite o novo telefone do fornecedor (ou deixe em branco para manter): ");
				String telefone = sc.nextLine();
				if (!telefone.isBlank()) fornecedor.setTelefone(telefone);
				System.out.println("Digite o novo email do fornecedor (ou deixe em branco para manter): ");
				String email = sc.nextLine();
				if (!email.isBlank()) fornecedor.setEmail(email);
				System.out.print("\nDeseja alterar o endereço? (s/n): ");
				String alterarEndereco = sc.nextLine();
				if (alterarEndereco.equalsIgnoreCase("s")) {
					fornecedor.setEndereco(new Endereco());
					System.out.print("Digite a nova rua (ou deixe em branco para manter): ");
					String rua = sc.nextLine();
					if (!rua.isBlank()) fornecedor.getEndereco().setRua(rua);
					System.out.print("Digite o novo número (ou deixe em branco para manter): ");
					String numero = sc.nextLine();
					if (!numero.isBlank()) fornecedor.getEndereco().setNumero(numero);
					System.out.print("Digite o novo complemento (ou deixe em branco para manter): ");
					String complemento = sc.nextLine();
					if (!complemento.isBlank()) fornecedor.getEndereco().setComplemento(complemento);
					System.out.print("Digite o novo bairro (ou deixe em branco para manter): ");
					String bairro = sc.nextLine();
					if (!bairro.isBlank()) fornecedor.getEndereco().setBairro(bairro);
					System.out.print("Digite o novo CEP (ou deixe em branco para manter): ");
					String cep = sc.nextLine();
					if (!cep.isBlank()) fornecedor.getEndereco().setCep(cep);
					System.out.print("Digite a nova cidade (ou deixe em branco para manter): ");
					String cidade = sc.nextLine();
					if (!cidade.isBlank()) fornecedor.getEndereco().setCidade(cidade);
					System.out.print("Digite o novo estado (ou deixe em branco para manter): ");
					String estado = sc.nextLine();
					if (!estado.isBlank()) fornecedor.getEndereco().setEstado(estado);
				}

				loja.editarFornecedor(codigo, fornecedor);
				System.out.println("\nFornecedor editado com sucesso!");            	
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "3":
			try {				
				mostrarObjetos(loja.fornecedores);
				System.out.print("Digite o código do fornecedor a ser excluído: ");
				int codigo = sc.nextInt();
				sc.nextLine();

				loja.excluirFornecedor(codigo);
				System.out.println("\nFornecedor excluído com sucesso!");
				
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "4":
			try {								
				System.out.println("Digite o código/nome do fornecedor a ser pesquisado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				ArrayList<Fornecedor> fo = loja.consultarFornecedores(termoBusca);
				mostrarObjetos(fo);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "5":
			try {								
				mostrarObjetos(loja.fornecedores);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
    }
    
    public void menuAdministradorProdutos(Scanner sc) {
		System.out.println("\n" + linha() + "\n     Menu de Produtos\n" + linha());
		System.out.println("1 - Cadastrar produto");
		System.out.println("2 - Editar produto");
		System.out.println("3 - Excluir produto");
		System.out.println("4 - Consultar produtos por código/nome");
		System.out.println("5 - Mostrar todos produtos");
		System.out.println("6 - Editar estoque de produto");
		System.out.println("7 - Alterar fornecedor do produto");
		System.out.println("0 - Voltar ao menu principal");
		System.out.print("Opção: ");
		
		String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {
				Produto p = this.criarProduto(null, sc);
				if (p == null) {
					System.out.println("\nErro ao Cadastrar Produto!");
					break;
				}
				Estoque e = this.criarEstoque(sc);
				if (e == null) {
					System.out.println("\nErro ao Cadastrar Estoque!");
					break;
				}
				p.setEstoque(e);
				
				mostrarObjetos(loja.fornecedores);
				
				System.out.print("Digite o código do fornecedor: ");
		        int codigoFornecedor = sc.nextInt();
		        sc.nextLine();
				
		        loja.vincularProdutoAFornecedor(p, codigoFornecedor);
				
				this.loja.cadastrarProduto(p);
				System.out.println("\nProduto Cadastrado com Sucesso!");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
				
				System.out.println("Digite o código/nome do produto a ser pesquisado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				
				loja.existeProduto(termoBusca);
				
				Produto produto = new Produto();
				
				System.out.println("Digite o novo nome do produto (ou deixe em branco para manter): ");
				String nome = sc.nextLine();
				if (!nome.isEmpty()) produto.setNome(nome);
				System.out.println("Digite a nova descrição do produto (ou deixe em branco para manter): ");
				String descricao = sc.nextLine();
				if (!descricao.isEmpty()) produto.setDescricao(descricao);
				
				System.out.print("\nDeseja alterar o estoque? (s/n): ");
				produto.setEstoque(new Estoque());
				String alterarEstoque = sc.nextLine();
				if (alterarEstoque.equalsIgnoreCase("s")) {
					System.out.print("Digite a nova quantidade (ou deixe -1 para manter): ");
					int quantidade = sc.nextInt();
					if (quantidade != -1) produto.getEstoque().setQuantidade(quantidade);
					sc.nextLine();
					System.out.print("Digite o novo preço (ou deixe -1 para manter): ");
					double preco = sc.nextDouble();
					if (preco != -1) produto.getEstoque().setPreco(preco);
					sc.nextLine();
				}

				loja.editarProduto(termoBusca, produto);				
				System.out.println("\nProduto editado com sucesso!");
			} catch (InputMismatchException e) {
				sc.nextLine();
				System.out.println("\nErro: Quantidade ou Preço Inválidos");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "3":
			try {
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
				System.out.print("Digite o código do produto a ser excluído: ");
				int codigo = sc.nextInt();
				sc.nextLine();
				loja.excluirProduto(codigo);
				System.out.println("\nProduto excluído com sucesso!");			
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "4":
			try {				
				System.out.println("Digite o código/nome do produto a ser pesquisado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				ArrayList<Produto> listaProdutos = loja.consultarProdutos(termoBusca);
				if(listaProdutos == null) {
					System.out.println("\nFalha ao consultar produtos");
				} else {
					mostrarObjetos(listaProdutos);
				}
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "5":
			try {	
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "6":
			try {
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
				
				System.out.println("Digite o código/nome do produto a ser pesquisado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				
				Estoque estoque = new Estoque();
				
				System.out.print("Digite a quantidade: ");
				int quantidade = sc.nextInt();
				estoque.setQuantidade(quantidade);
				System.out.print("Digite o preço: ");
				double preco = sc.nextDouble();
				estoque.setPreco(preco);
				sc.nextLine();
				
				loja.editarEstoqueProduto(termoBusca, estoque);
				System.out.println("\nEstoque editado com sucesso");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "7":
			try {				
				System.out.println("\nProdutos disponíveis:");
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
				
				System.out.println("\nDigite o código/nome do produto a ser alterado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				System.out.print("Digite o código do novo fornecedor: ");
				int codigoNovoFornecedor = sc.nextInt();
				sc.nextLine();
				loja.editarFornecedorProduto(termoBusca, codigoNovoFornecedor);
				System.out.println("\nFornecedor do produto editado com sucesso");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
    }
    
    public void menuAdministradorClientes(Scanner sc) {
    	System.out.println("\n" + linha() + "\n     Menu de Clientes\n" + linha());
		System.out.println("1 - Mostrar todos clientes");
		System.out.println("2 - Excluir um cliente");
		System.out.println("0 - Voltar ao menu principal");
		System.out.print("Opção: ");
		
		String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {
				mostrarObjetos(loja.clientes);				
			} catch(Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {				
				mostrarObjetos(loja.clientes);
				
				System.out.print("Digite o usuário a ser excluído: ");
				String user = sc.nextLine();
				loja.excluirCliente(user);
				System.out.println("\nUsuário excluído com sucesso!");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
    	
    }
    
    public void menuAdministradorPedidos(Scanner sc) {
    	System.out.println("\n" + linha() + "\n     Menu de Pedidos\n" + linha());
		System.out.println("1 - Consultar pedidos");
		System.out.println("2 - Consultar pedidos de um cliente");
		System.out.println("3 - Consultar pedidos por data");
		System.out.println("4 - Enviar pedidos");
		System.out.println("5 - Cancelar pedidos");
		System.out.println("0 - Voltar ao menu principal");
		System.out.print("Opção: ");
		
		String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {				
				mostrarObjetos(loja.pedidos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {
				System.out.println("\nDigite o código do cliente");
				int codigoCliente = sc.nextInt();
				sc.nextLine();
				ArrayList <Pedido> listaPedidosCliente = loja.consultarPedidos(codigoCliente);
				mostrarObjetos(listaPedidosCliente);
			} catch(InputMismatchException e) {
				System.out.println("\nCódigo inválido");
			} catch(Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "3":
			try {				
				System.out.print("Digite a data inicial (dd/mm/aaaa): ");
				String dataInicial = sc.nextLine();
				System.out.print("Digite a data final (dd/mm/aaaa): ");
				String dataFinal = sc.nextLine();
				
				ArrayList<Pedido> listaPedidos = loja.consultarPedidos(dataInicial, dataFinal);
				mostrarObjetos(listaPedidos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
            break;
		case "4":
			try {
				ArrayList <Pedido> listaPedidosNovos = loja.consultarPedidosNovos();
				mostrarObjetos(listaPedidosNovos);
				
				System.out.println("\nDigite o código do pedido: ");
				int codigoPedido = sc.nextInt();
				sc.nextLine();

				loja.enviarPedido(codigoPedido);
				System.out.println("\nPedido Enviado com Sucesso!");
				break;
			} catch(Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "5":
			try {
				ArrayList <Pedido> listaPedidosNaoCancelados = loja.consultarPedidos(TipoPedido.CANCELADO);
				mostrarObjetos(listaPedidosNaoCancelados);
				
				System.out.println("\nDigite o código do pedido: ");
				int codigoPedido = sc.nextInt();
				sc.nextLine();

				loja.cancelarPedido(codigoPedido);
				loja.retomarEstoque(codigoPedido);
				System.out.println("\nPedido Cancelado com Sucesso!");
				break;
			} catch(Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
    	
    }
    
    public void menuAdministradorUsuarios(Scanner sc) {
    	System.out.println("\n" + linha() + "\n     Menu de Usuários\n" + linha());
		System.out.println("1 - Cadastrar usuário");
		System.out.println("2 - Mostrar todos usuários");
		System.out.println("3 - Excluir usuário");
		System.out.println("0 - Voltar ao menu principal");
		System.out.print("Opção: ");
		
		String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {				
				System.out.println("\n--- Cadastro de Novo Usuário Administrador ---");
				System.out.print("Escolha um login: ");
				String login = sc.nextLine();
				System.out.print("Escolha uma senha: ");
				String senha = sc.nextLine();
				loja.cadastrarUsuarioAdmin(login, senha);
				System.out.println("\nUsuário admin Cadastrado com Sucesso!");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {				
				mostrarObjetos(loja.usuariosAdmin);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "3":
			try {				
				mostrarObjetos(loja.usuariosAdmin);
				
				System.out.print("Digite o usuário a ser excluído: ");
				String user = sc.nextLine();
				loja.excluirUsuarioAdmin(user);
				System.out.println("\nUsuário excluído com sucesso!");
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
    	
    }

    public void menuCliente(Usuario usuario, Scanner sc) {
    	boolean continuar = true;
    	System.out.println("\nLogin como CLIENTE realizado com sucesso!");
    	
    	while (continuar) {
	    	System.out.println("\n" + linha() + "\n     Menu de Cliente\n" + linha());
			System.out.println("1 - Menu de Produtos");
			System.out.println("2 - Menu de Pedidos");
	    	System.out.println("0 - Voltar ao menu principal");
	    	System.out.print("Opção: ");
	    	
	    	String resposta = sc.nextLine();
			
			switch (resposta) {
			case "1":
				menuClienteProdutos(usuario, sc);
				break;
			case "2":
				menuClientePedidos(usuario, sc);
				break;
			case "0":
				continuar = false;
				System.out.println("\nSaindo do acesso de cliente...");
				break;
			default:
				System.out.println("\nOpção inválida.");
			}
    	}
    }
    
    public void menuClienteProdutos(Usuario usuario, Scanner sc) {
    	System.out.println("\n" + linha() + "\n     Menu de Produtos\n" + linha());
		System.out.println(" 1 - Consultar todos produtos");
		System.out.println(" 2 - Consultar produtos por código/nome");
    	System.out.println(" 0 - Voltar ao menu principal");
    	System.out.print("Opção: ");
    	
    	String resposta = sc.nextLine();
		
		switch (resposta) {
		case "1":
			try {			
				Collections.sort(loja.produtos);
				mostrarObjetos(loja.produtos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {				
				System.out.println("Digite o código/nome do produto a ser pesquisado: ");
				String termoBusca = sc.nextLine().trim().toLowerCase();
				ArrayList<Produto> listaProdutos = loja.consultarProdutos(termoBusca);
				mostrarObjetos(listaProdutos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}
	}
    
    public void menuClientePedidos(Usuario usuario, Scanner sc) {
    	System.out.println("\n" + linha() + "\n     Menu de Pedidos\n" + linha());
		System.out.println("1 - Criar pedido");
		System.out.println("2 - Consultar pedidos por código");
		System.out.println("3 - Consultar pedidos por data");
		System.out.println("4 - Consultar todos os meus pedidos");
		System.out.println("5 - Receber pedidos");
    	System.out.println("0 - Voltar ao menu principal");
    	System.out.print("Opção: ");
    	
    	String resposta = sc.nextLine();
    	
    	int idCliente = usuario.getCliente().getCodigo(); 
		
		switch (resposta) {
		case "1":
			try {
				String continuar = "n";
				int flag = 1;
				int codigoPedido = 0;
				do {
					Collections.sort(loja.produtos);
					mostrarObjetos(loja.produtos);
					System.out.println("\nSelecione um produto para adicionar ao carrinho: ");
					String termoBusca = sc.nextLine().trim().toLowerCase();
					ArrayList<Produto> produtos = loja.consultarProdutos(termoBusca);
					if (produtos.size() == 0) {
						System.out.println("\nProduto Não Encontrado!");
					}
					else {						
						Produto produto = produtos.get(0);
						System.out.println("Digite a quantidade que deseja comprar: ");
						int quantidade = sc.nextInt();
						sc.nextLine();
						
						if (produto.getEstoque().getQuantidade() == 0) {
							System.out.println("\nProduto em falta no estoque");
						} else {
							if (quantidade > produto.getEstoque().getQuantidade()) {
								quantidade = produto.getEstoque().getQuantidade();
							}
							System.out.println("Confirma a adição do item? A quantidade será " + quantidade + ", R$" + loja.calcularTotalItem(new ItemPedido(produto, quantidade, produto.getEstoque().getPreco())) + " (s/n)");
							String confirma = sc.nextLine();
							
							if ("s".equals(confirma)) {				
								if(flag == 1) {
									codigoPedido = loja.cadastrarPedido(idCliente, new ItemPedido(produto, quantidade, produto.getEstoque().getPreco() * quantidade));
									flag = 0;
								} else {
									loja.addProdutoPedido(codigoPedido, new ItemPedido(produto, quantidade, produto.getEstoque().getPreco() * quantidade));
									System.out.println("\nItem adicionado com sucesso!");
								}
								System.out.println("\nTotal Pedido: R$" + loja.mostrarTotalPedido(codigoPedido));							
							}
							loja.atualizarEstoque(produto, quantidade);
						}
					}
					System.out.println("\nDeseja adicionar mais itens? (s/n)");
					continuar = sc.nextLine();
					if (!"s".equals(continuar)) {
						loja.calcularICMSPedido(codigoPedido);
					}
				} while("s".equals(continuar));
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "2":
			try {				
				System.out.println("Digite o código do pedido a ser pesquisado: ");
				int codigo = sc.nextInt();
				sc.nextLine();
				
				ArrayList<Pedido> listaPedidos = loja.consultarPedidos(idCliente, codigo);
				mostrarObjetos(listaPedidos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
            break;
		case "3":
			try {				
				System.out.print("Digite a data inicial (dd/mm/aaaa): ");
				String dataInicial = sc.nextLine();
				System.out.print("Digite a data final (dd/mm/aaaa): ");
				String dataFinal = sc.nextLine();
				
				ArrayList<Pedido> listaPedidos = loja.consultarPedidos(idCliente, dataInicial, dataFinal);
				mostrarObjetos(listaPedidos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
            break;
		case "4":
			try {				
				ArrayList<Pedido> listaPedidos = loja.consultarPedidos(idCliente);
				mostrarObjetos(listaPedidos);
			} catch (Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "5":
			try {
				ArrayList <Pedido> listaPedidosEnviados = loja.consultarPedidos(idCliente, TipoPedido.ENVIADO);
				mostrarObjetos(listaPedidosEnviados);
				
				System.out.println("\nDigite o código do pedido: ");
				int codigoPedido = sc.nextInt();
				sc.nextLine();

				try {					
					loja.receberPedido(idCliente, codigoPedido);
					System.out.println("\nPedido Recebido com Sucesso!");
				} catch (Exception e) {
					System.out.println("\nErro: " + e.getMessage());
				}
				break;
			} catch(Exception e) {
				System.out.println("\nErro: " + e.getMessage());
			}
			break;
		case "0":
			break;
		default:
			System.out.println("\nOpção inválida.");
		}	
	}
    
    public void realizarLogin(Scanner sc) throws Exception {
        try {
        	System.out.print("Login: ");
        	String login = sc.nextLine();
        	System.out.print("Senha: ");
        	String senha = sc.nextLine();
        	
        	Usuario usuario = loja.buscarUsuario(login, senha);			
        	
        	if (usuario != null) {
        		if (usuario.getTipo().equals(TipoUsuario.ADMIN)) {
        			menuAdministrador(sc);
        		} else if (usuario.getTipo().equals(TipoUsuario.CLIENTE)) {
        			menuCliente(usuario, sc);
        		}
        	} else {
        		throw new Exception("Login ou senha incorretos ou não encontrados");
        	}
		} catch (Exception e) {
			throw new Exception(e.getMessage());
		}
    }
    
    public Fornecedor criarFornecedor(Scanner sc) throws Exception {
    	System.out.println("\n--- Cadastro de Fornecedor ---");
		try {
			System.out.println("Nome do fornecedor:");
			String nome = sc.nextLine();
			System.out.println("Descrição:");
			String descricao = sc.nextLine();
			System.out.println("Telefone:");
			String telefone = sc.nextLine();
			System.out.println("Email:");
			String email = sc.nextLine();
			Endereco endereco = criarEndereco(sc);
			
			return new Fornecedor(nome, descricao, telefone, email, endereco, null);
		} catch(Exception ex) {
			throw new Exception(ex.getMessage());
		}
    }
    
    public Produto criarProduto(Estoque estoque, Scanner sc) throws Exception {
    	System.out.println("\n--- Cadastro de Produto ---");
		try {			
			System.out.println("Nome do produto:");
			String nome = sc.nextLine();
			System.out.println("Descrição:");
			String descricao = sc.nextLine();
			
			Produto p = new Produto(nome, descricao, estoque);
			
            return p;
		} catch(Exception ex) {
			throw new Exception(ex.getMessage());
		}
    }
    
    public Estoque criarEstoque(Scanner sc) throws Exception {
    	System.out.println("\n--- Cadastro de Estoque ---");
		try {
			System.out.println("Quantidade:");
			int quantidade = sc.nextInt();
			System.out.println("Preço:");
			double preco = sc.nextDouble();
			sc.nextLine();

			return new Estoque(quantidade, preco);
		} catch (InputMismatchException ime) {
			sc.nextLine();
			throw new InputMismatchException("Dados inválidos para quantidade ou preço");
		} catch (Exception ex) {
			System.out.println(ex.getMessage());
			throw new Exception(ex.getMessage());
		}
    }
    
    public Cliente criarCliente(Scanner sc) throws Exception {
    	System.out.println("\n--- Cadastro de Cliente ---");
		try {
 			System.out.println("Nome do cliente:");
			String nome = sc.nextLine();
			System.out.println("Telefone:");
			String telefone = sc.nextLine();
			System.out.println("Email:");
			String email = sc.nextLine();
			System.out.println("Cartão de Crédito:");
			String cartaoCredito = sc.nextLine();
			Endereco endereco = criarEndereco(sc);
			Usuario usuario = criarUsuario(sc, TipoUsuario.CLIENTE);
			
			loja.isClienteJaCadastrado(usuario);
			
			Cliente cliente = new Cliente(nome, telefone, email, cartaoCredito, endereco, null, usuario);
			usuario.setCliente(cliente);
			
			return cliente;
		} catch(Exception ex) {
			throw new Exception(ex.getMessage());
		}
    }
    
    public Endereco criarEndereco(Scanner sc) throws Exception {
    	System.out.println("\n--- Cadastro de Endereço ---");
		try {			
			System.out.println("Rua:");
			String rua = sc.nextLine();
			System.out.println("Número:");
			String numero = sc.nextLine();
			System.out.println("Complemento:");
			String complemento = sc.nextLine();
			System.out.println("Bairro:");
			String bairro = sc.nextLine();
			System.out.println("CEP:");
			String cep = sc.nextLine();
			System.out.println("Cidade:");
			String cidade = sc.nextLine();
			System.out.println("Estado:");
			String estado = sc.nextLine();
			
			return new Endereco(rua, numero, complemento, bairro, cep, cidade, estado);
		} catch(Exception ex) {
			throw new Exception(ex.getMessage());
		}
    }
    
    public Usuario criarUsuario(Scanner sc, TipoUsuario tipo) throws Exception {
    	System.out.println("\n--- Cadastro de Usuário ---");
		try {			
			System.out.println("Usuário:");
			String usuario = sc.nextLine();
			System.out.println("Senha:");
			String senha = sc.nextLine();
			
			if(usuario.isBlank() || senha.isBlank()) {
				throw new Exception("Usuário ou Senha Inválidos. Insira ao menos 1 caracter.");
			}
			
			return new Usuario(usuario, senha, tipo);
		} catch(Exception ex) {
			throw new Exception(ex.getMessage());
		}
    }
    
    public <T> void mostrarObjetos(ArrayList<T> lista) throws Exception {
    	try {			
    		if (lista.isEmpty()) {
    			System.out.println("\nNão há nenhum registro cadastrado.");
    			return;
    		}
    		
    		System.out.println("\n-- Lista de " + pluralizarClasse(lista.get(0).getClass().getSimpleName()) + " Cadastrados --");
    		for (T item : lista) {
    			if (item != null) {
    				System.out.println(item.toString());
    			}
    		}
		} catch (Exception e) {
			throw new Exception(e.getMessage());
		}
    }
    
    public String pluralizarClasse(String nomeClasse) {
        if (nomeClasse.endsWith("r") || nomeClasse.endsWith("z")) {
            return nomeClasse + "es"; // Fornecedor → Fornecedores
        } else if (nomeClasse.endsWith("m")) {
            return nomeClasse.substring(0, nomeClasse.length() - 1) + "ns"; // Ex: Item → Itens
        } else {
            return nomeClasse + "s"; // Produto → Produtos
        }
    }

    public String linha() {
    	return "--------------------------------";
    }
}
