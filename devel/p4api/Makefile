# $FreeBSD$

PORTNAME=	p4api
PORTVERSION=	2016.1.1492381
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.perforce.com/perforce/${P4VERSION}/bin.${PLATFORM}/:tar \
		ftp://ftp.perforce.com/perforce/${P4VERSION}/doc/manuals/p4api/:pdf
EXTRACT_SUFX=
DISTFILES=	${TAR_FILES}:tar p4api.pdf:pdf
EXTRACT_ONLY=	${TAR_FILES}

MAINTAINER=	gordon@FreeBSD.org
COMMENT=	Perforce API (static libraries and header files)

# The LICENSE file is not included in the distfile, but Catherine Louie of
# Perforce Support assures me that the LICENSE file on swarm also applies to
# the binary distribution.
# https://swarm.workshop.perforce.com/projects/perforce_software-p4/files/2016-1/LICENSE
LICENSE=	BSD2CLAUSE

NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.pre.mk>

.include "${.CURDIR}/../p4/Makefile.inc"

TAR_FILES=	p4api.tgz

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/perforce
	cd ${WRKSRC}/include/p4 && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/include/perforce
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/perforce
	cd ${WRKSRC}/lib && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/lib/perforce
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/p4api.pdf ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/sample && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.post.mk>
