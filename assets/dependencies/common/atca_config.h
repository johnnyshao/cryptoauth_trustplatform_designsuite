/* Auto-generated config file atca_config.h */
#ifndef ATCA_CONFIG_H
#define ATCA_CONFIG_H

/* Include HALS */

/* Included device support */
#define ATCA_ATSHA204A_SUPPORT
#define ATCA_ATSHA206A_SUPPORT
#define ATCA_ATECC108A_SUPPORT
#define ATCA_ATECC508A_SUPPORT
#define ATCA_ATECC608A_SUPPORT

/** Define if cryptoauthlib is to use the maximum execution time method */

/** Define if the library is not to use malloc/free */

/* \brief How long to wait after an initial wake failure for the POST to
 *         complete.
 * If Power-on self test (POST) is enabled, the self test will run on waking
 * from sleep or during power-on, which delays the wake reply.
 */
#ifndef ATCA_POST_DELAY_MSEC
#define ATCA_POST_DELAY_MSEC 25
#endif

#endif // ATCA_CONFIG_H
