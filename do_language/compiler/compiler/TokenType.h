#pragma once

enum class TokenType
{
	IDENTIFIER,
	FUNCTION,
	VAR,
	CONST,
	ARRAY,
	IF,
	ELSE,
	FOR,
	WHILE,
	PRINT,
	DOT,
	COMMA,
	ARROW_RIGHT,
	NUMBER,
	FLOAT_NUMBER,
	STRING_LITERAL,
	BOOLEAN_VALUE,
	INT_TYPE,
	FLOAT_TYPE,
	STRING_TYPE,
	BOOLEAN_TYPE,
	MULTIPLICATION,
	DIVISION,
	ADDITION,
	SUBTRACTION,
	EXCLAMATION_MARK,
	AMPERSAND,
	VERTICAL_LINE,
	EQUAL,
	GREATER_THAN,
	LESS_THAN,
	LBRACE,
	RBRACE,
	LPAREN,
	RPAREN,
	LBRACKET,
	RBRACKET,

	END_OF_FILE
};

const std::map<TokenType, std::string> TOKEN_TYPE_TO_NAME_MAP = {
		{TokenType::IDENTIFIER, "identifier"},
		{TokenType::FUNCTION, "func"},
		{TokenType::VAR, "var"},
		{TokenType::CONST, "const"},
		{TokenType::ARRAY, "array"},
		{TokenType::PRINT, "print"},
		{TokenType::IF, "if"},
		{TokenType::ELSE, "else"},
		{TokenType::FOR, "for"},
		{TokenType::WHILE, "while"},
		{TokenType::DOT, "."},
		{TokenType::COMMA, ","},
		{TokenType::ARROW_RIGHT, "=>"},
		{TokenType::NUMBER, "number"},
		{TokenType::STRING_LITERAL, "\"string\""},
		{TokenType::BOOLEAN_VALUE, "boolean"},
		{TokenType::INT_TYPE, "int"},
		{TokenType::FLOAT_TYPE, "float"},
		{TokenType::STRING_TYPE, "string"},
		{TokenType::BOOLEAN_TYPE, "boolean"},
		{TokenType::MULTIPLICATION, "*"},
		{TokenType::DIVISION, "/"},
		{TokenType::ADDITION, "+"},
		{TokenType::SUBTRACTION, "-"},
		{TokenType::EXCLAMATION_MARK, "!"},
		{TokenType::AMPERSAND, "&"},
		{TokenType::VERTICAL_LINE, "|"},
		{TokenType::EQUAL, "="},
		{TokenType::GREATER_THAN, ">"},
		{TokenType::LESS_THAN, "<"},
		{TokenType::LBRACE, "{"},
		{TokenType::RBRACE, "}"},
		{TokenType::LPAREN, "("},
		{TokenType::RPAREN, ")"},
		{TokenType::LBRACKET, "["},
		{TokenType::RBRACKET, "]"},
		{TokenType::END_OF_FILE, "EOF"},
};