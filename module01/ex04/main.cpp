/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:51:51 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/28 16:00:52 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


bool	archivo_existe(const std::string &name)
{
	bool i;

	std::ifstream file((name + ".reverse").c_str());
	i = file.good();
	file.close ();
	return i;
}
/*std::ofstream	create_file(const std::string &name)
{
	std::ofstream file((name + ".reverse").c_str());

	if (!file) {
		std::cerr << "No se pudo crear el archivo '" << (name + ".reverse") << "'" << std::endl;
		return (NULL);
	}
	return (file);
}*/
void	my_set(const std::string &linea, const std::string &s1, const std::string &s2, std::ofstream &output)
{
	std::size_t	found;
	std::size_t	i = 0;
	std::size_t	j = 0;

	while (linea[i] != '\0')
	{
		found = linea.find(s1 , i);
		if (found !=std::string::npos)
		{
			j = 0;
			while (i < found)
				output << linea[i++];
			while (s2[j] != '\0')
				output << s2[j++];
			i += s1.size();
		}
		else
			output << linea[i++];
	}
	output << std::endl;
}

void	writte_file(std::ifstream &input, std::ofstream &output, const std::string &s1, const std::string &s2)
{
	std::string linea;
	std::size_t found;

	while (std::getline(input, linea)) {  // Lee el archivo línea por línea
		found = linea.find(s1 ,0);
		if (found !=std::string::npos)
			my_set(linea, s1, s2, output);
		else
			output << linea << std::endl;
	}
}



int main(int argc, char **argv)
{
	std::string linea;
	std::ifstream archivo(argv[1]);  // Abre el archivo en modo lectura
	std::string file_mod;
	std::string file_org;

	if (argc != 4) {
		std::cerr << "error de parametros" << std::endl;
		return (0);
	}
	file_org = argv[1];
	file_mod = file_org + ".reverse";
	std::ofstream out_file(file_mod.c_str());
	if (!out_file) {
		std::cerr << "No se pudo crear el archivo '" << file_mod << "'" << std::endl;
		return (1);
	}
	std::ifstream in_file(file_org.c_str());
	if (!in_file) {
		std::cerr << "No se pudo leer el archivo '" << file_org << "'" << std::endl;
		return (1);
	}
	writte_file(in_file, out_file, argv[2], argv[3]);

	in_file.close();  // Cierra el archivo
	out_file.close();
	return 0;
	return (0);
}
