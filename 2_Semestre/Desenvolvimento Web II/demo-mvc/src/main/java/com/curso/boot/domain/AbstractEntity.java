package com.curso.boot.domain;

import jakarta.persistence.Id;
import jakarta.persistence.GenerationType;
import jakarta.persistence.GeneratedValue;
import java.io.Serializable;
import java.util.Objects;


@SuppressWarnings("serial")
public class AbstractEntity <ID extends Serializable> implements Serializable {
	
	@Override
	public int hashCode() {
		return Objects.hash(id);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		AbstractEntity <?> other = (AbstractEntity <?>) obj;
		return Objects.equals(id, other.id);
	}
	
	@Override
	public String toString() {
		return "id =" + id;
	}

	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private ID id;

	public ID getId() {
		return id;
	}

	public void setId(ID id) {
		this.id = id;
	}
	

}
