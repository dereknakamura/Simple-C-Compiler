# ifndef TOKEN_H
# define TOKEN_H

enum {
	ERROR = -1,
	DONE = 0,

	ID = 256,

	ASSIGN,
	LESSEQUAL,
	GREATEREQUAL,
	ADD,
	SUB,
	STAR,
	DIV,
	MOD,
	BINAND,
	NOT,
	PERIOD,
	LPARENTHESIS,
	RPARENTHESIS,
	LBRACKET,
	RBRACKET,
	LBRACE,
	RBRACE,
	SEMICOLON,
	COLON,
	COMMA,

	OR,
	AND,
	EQUAL,
	NOTEQUAL,
	LESSTHAN,
	GREATERTHAN,
	INCREMENT,
	DECREMENT,
	POINTER,

	INTEGER,
	REAL,
	STRING,

	AUTO,
	BREAK,
	CASE,
	CHAR,
	CONST,
	CONTINUE,
	DEFAULT,
	DO,
	DOUBLE,
	ELSE,
	ENUM,
	EXTERN,
	FLOAT,
	FOR,
	GOTO,
	IF,
	INT,
	LONG,
	REGISTER,
	RETURN,
	SHORT,
	SIGNED,
	SIZEOF,
	STATIC,
	STRUCT,
	SWITCH,
	TYPEDEF,
	UNION,
	UNSIGNED,
	VOID,
	VOLATILE,
	WHILE
};

# endif /* LEXER_H */
