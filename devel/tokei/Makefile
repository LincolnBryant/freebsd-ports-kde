# $FreeBSD$

PORTNAME=	tokei
DISTVERSIONPREFIX=	v
DISTVERSION=	7.0.0
CATEGORIES=	devel

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Display statistics about your code

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENCE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENCE-MIT

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	Aaronepower

CARGO_CRATES=	aho-corasick-0.6.4 \
		ansi_term-0.10.2 \
		atty-0.2.6 \
		bitflags-1.0.1 \
		byteorder-1.2.1 \
		cfg-if-0.1.2 \
		chrono-0.4.0 \
		clap-2.29.1 \
		coco-0.1.1 \
		crossbeam-0.2.12 \
		dtoa-0.4.2 \
		either-1.4.0 \
		encoding-0.2.33 \
		encoding-index-japanese-1.20141219.5 \
		encoding-index-korean-1.20141219.5 \
		encoding-index-simpchinese-1.20141219.5 \
		encoding-index-singlebyte-1.20141219.5 \
		encoding-index-tradchinese-1.20141219.5 \
		encoding_index_tests-0.1.4 \
		env_logger-0.5.0-rc.2 \
		fnv-1.0.6 \
		fuchsia-zircon-0.3.3 \
		fuchsia-zircon-sys-0.3.3 \
		globset-0.2.1 \
		handlebars-0.29.1 \
		hex-0.3.1 \
		ignore-0.3.1 \
		itoa-0.3.4 \
		kernel32-sys-0.2.2 \
		lazy_static-0.2.11 \
		lazy_static-1.0.0 \
		libc-0.2.36 \
		linked-hash-map-0.5.0 \
		log-0.3.9 \
		log-0.4.1 \
		memchr-2.0.1 \
		num-0.1.41 \
		num-integer-0.1.35 \
		num-iter-0.1.34 \
		num-traits-0.1.41 \
		num_cpus-1.8.0 \
		pest-0.3.3 \
		quick-error-1.2.1 \
		quote-0.3.15 \
		rand-0.3.20 \
		rayon-0.9.0 \
		rayon-core-1.3.0 \
		redox_syscall-0.1.37 \
		redox_termios-0.1.1 \
		regex-0.2.5 \
		regex-syntax-0.4.2 \
		same-file-1.0.2 \
		scopeguard-0.3.3 \
		serde-1.0.27 \
		serde_cbor-0.8.1 \
		serde_derive-1.0.27 \
		serde_derive_internals-0.19.0 \
		serde_json-1.0.9 \
		serde_yaml-0.7.3 \
		strsim-0.6.0 \
		syn-0.11.11 \
		synom-0.11.3 \
		tempdir-0.3.5 \
		termcolor-0.3.3 \
		termion-1.5.1 \
		textwrap-0.9.0 \
		thread_local-0.3.5 \
		time-0.1.39 \
		toml-0.4.5 \
		unicode-width-0.1.4 \
		unicode-xid-0.0.4 \
		unreachable-1.0.0 \
		utf8-ranges-1.0.0 \
		vec_map-0.8.0 \
		void-1.0.2 \
		walkdir-2.0.1 \
		winapi-0.2.8 \
		winapi-0.3.3 \
		winapi-build-0.1.1 \
		winapi-i686-pc-windows-gnu-0.3.2 \
		winapi-x86_64-pc-windows-gnu-0.3.2 \
		wincolor-0.1.4 \
		yaml-rust-0.4.0

PLIST_FILES=	bin/tokei

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/tokei

.include <bsd.port.mk>
