package ucs.aula0326.Ex1;

import java.util.Date;

public class Consulta {
	private Date data;
	private String observacoes;
	private String tratamento;
	private Animal animal;
	
	public Consulta(Date data, String observacoes, String tratamento, Animal animal) {
		this.data = data;
		this.observacoes = observacoes;
		this.tratamento = tratamento;
		this.animal = animal;
	}
	
	public Date getData() {
		return data;
	}
	public void setData(Date data) {
		this.data = data;
	}
	public String getObservacoes() {
		return observacoes;
	}
	public void setObservacoes(String observacoes) {
		this.observacoes = observacoes;
	}
	public String getTratamento() {
		return tratamento;
	}
	public void setTratamento(String tratamento) {
		this.tratamento = tratamento;
	}
	public Animal getAnimal() {
		return animal;
	}
	public void setAnimal(Animal animal) {
		this.animal = animal;
	}
	
	
}
