#ifndef AUDITGRAPH_H
#define AUDITGRAPH_H
#include<vector>
#include<iostream>

struct ClassNode;

struct options
{
	bool complete;
	std::vector<ClassNode *> vec;
};

struct ClassNode
{
	std::string title;
	std::string prefix;
	int number;
	int hours;
	std::vector<options> prereq;
	std::vector<options> coreq;
};

class AuditGraph
{
	public:
		AuditGraph();
		~AuditGraph();
		void listAll();
		void listComplete();
		void showReq(std::string prefix, int number);
		void addElective(ClassNode * node);
		void addMinor(std::vector<ClassNode *> vec);
		void addComplete(ClassNode * node);
		ClassNode * addAll(std::string prefix, int number, std::string title, int hours, bool pre, bool co);
		void getPRE(std::string file, ClassNode * node);
		void getCO(std::string file, ClassNode * node);
		void addPRE(std::vector<ClassNode *> vec);
		void addCO(std::vector<ClassNode *> vec);
	protected:
	private:
		std::vector<options> minor;
		std::vector<ClassNode *> electives;
		std::vector<ClassNode *> complete;
		std::vector<ClassNode> all;
		int totalHours;
		ClassNode * findNode(std::string prefix, int number);
};

#endif // AUDITGRAPH_H
