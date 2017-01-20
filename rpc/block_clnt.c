/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "block.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

blockResponse *
block_create_cli_1(blockCreateCli *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_CREATE_CLI,
		(xdrproc_t) xdr_blockCreateCli, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_create_1(blockCreate *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_CREATE,
		(xdrproc_t) xdr_blockCreate, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
