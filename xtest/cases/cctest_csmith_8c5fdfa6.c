// SPDX-License-Identifier: MIT
// cctest_csmith_8c5fdfa6.c --- cctest case csmith_8c5fdfa6 (csmith seed 2355093414)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb266a4d0 */
/* @exp_ticks 0x3eeb */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2355093414 -o /tmp/csmith_gen_3wrv6lnm/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int16_t g_11[3][1] = {{0x744DL},{0x744DL},{0x744DL}};
static uint64_t g_26 = 0x9B467BB1A88AF16DLL;
static int16_t g_46 = (-1L);
static int16_t g_50 = 1L;
static uint16_t g_71 = 9UL;
static uint8_t g_73 = 0x84L;
static uint32_t g_78 = 4294967293UL;
static int8_t g_86 = 0L;
static int64_t g_123 = (-10L);
static uint16_t g_162 = 0xFDF2L;
static int8_t g_163 = 0x96L;
static uint32_t g_167 = 1UL;
static uint32_t g_189 = 18446744073709551608UL;
static uint16_t g_190 = 8UL;
static int16_t g_195 = 1L;
static int64_t g_196 = 0x68AF11E84FFDC46FLL;
static int16_t g_197 = 0x303BL;
static int16_t g_198[3][1] = {{(-1L)},{(-1L)},{(-1L)}};
static uint32_t g_202 = 0UL;
static int32_t g_211[4][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
static int32_t g_275 = 0x45068F4AL;
static int32_t g_286 = 0x4B161C8CL;
static int32_t g_308 = (-4L);



static int32_t  func_1(void);
static uint8_t  func_2(const int32_t  p_3, int8_t  p_4, uint32_t  p_5, uint16_t  p_6, uint64_t  p_7);
static uint16_t  func_17(int8_t  p_18);




static int32_t  func_1(void)
{ 
    int8_t l_12 = 2L;
    int32_t l_235[3];
    int32_t l_281 = (-1L);
    int32_t l_307 = 7L;
    int32_t l_309 = (-1L);
    uint32_t l_310 = 0x495D608EL;
    int i;
    for (i = 0; i < 3; i++)
        l_235[i] = (-1L);
    if ((((func_2((safe_unary_minus_func_int64_t_s((safe_sub_func_int16_t_s_s(((65529UL != 0L) != g_11[2][0]), l_12)))), l_12, g_11[0][0], l_12, g_11[2][0]) || 255UL) , l_12) || 0x7A19L))
    { 
        int32_t l_251 = 0x3C14CB03L;
        int32_t l_252[2][3] = {{0xB0785E97L,0xB0785E97L,0x391C9919L},{0xB0785E97L,0xB0785E97L,0x391C9919L}};
        uint16_t l_253 = 1UL;
        int i, j;
        l_235[0] ^= g_11[2][0];
        g_211[1][3] = (l_252[0][0] = (l_12 < (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((~((safe_rshift_func_int16_t_s_s(((l_251 = (safe_rshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s((0UL >= (safe_div_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(g_189, l_235[0])) < g_78), 0xD0L))), 18446744073709551615UL)) || l_251), l_12))) <= l_235[0]), l_252[0][1])) ^ l_253)) == 0L), g_198[2][0])), (-4L)))));
        for (g_189 = 0; (g_189 <= 18); g_189 = safe_add_func_int8_t_s_s(g_189, 1))
        { 
            l_235[0] = (((safe_lshift_func_int16_t_s_s(0x8DDBL, 3)) == (safe_rshift_func_int16_t_s_u((g_198[0][0] , (safe_mod_func_uint32_t_u_u((g_197 < l_235[0]), g_190))), 7))) , (-1L));
        }
    }
    else
    { 
        int8_t l_273 = 6L;
        int32_t l_274 = (-5L);
        int32_t l_292 = 1L;
        uint16_t l_293 = 0x0F78L;
        uint64_t l_300 = 18446744073709551607UL;
lbl_306:
        g_275 = (!(l_274 &= ((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(0xA0L, (safe_sub_func_uint64_t_u_u(l_235[0], ((safe_sub_func_uint8_t_u_u(((g_211[1][3] = l_273) && g_162), g_163)) == l_235[0]))))) , l_235[0]), g_163)), 0L)) | 0x82L)));
        if ((g_86 , (safe_unary_minus_func_int8_t_s(((-2L) || ((safe_sub_func_uint32_t_u_u(((l_235[1] = (l_12 ^ g_50)) != 251UL), (-2L))) < (-1L)))))))
        { 
            uint64_t l_280 = 0x77A122F168FF3D68LL;
            int32_t l_287 = 5L;
            int32_t l_288 = 0x656D3FD8L;
            int32_t l_289 = (-4L);
            int32_t l_291 = 4L;
            l_281 ^= (l_235[0] = (l_280 = (!g_198[2][0])));
            if (g_162)
            { 
                int32_t l_290 = (-9L);
                g_286 = (g_211[1][3] = ((safe_sub_func_int32_t_s_s(g_211[1][3], ((safe_lshift_func_int8_t_s_u((18446744073709551615UL & 0x730140DCD4049CAELL), 5)) > 0x2C023DFF76065F32LL))) <= 0x10L));
                l_293--;
                l_274 = (l_235[0] , ((++g_167) , (((((g_198[2][0] &= (g_195 = (g_26 == ((safe_sub_func_int32_t_s_s(0x7A9950C4L, g_162)) && 0xF0286FB3L)))) ^ g_162) , g_195) & l_290) || g_46)));
            }
            else
            { 
                return g_275;
            }
            return l_300;
        }
        else
        { 
            int8_t l_301[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_301[i][j] = 0xF1L;
            }
            for (g_73 = 0; (g_73 <= 0); g_73 += 1)
            { 
                uint16_t l_302[3][4] = {{0x3794L,0x3794L,65535UL,0x3794L},{0x3794L,0x3559L,0x3559L,0x3794L},{0x3559L,0x3794L,0x3559L,0x3559L}};
                int32_t l_305 = 0x303632AAL;
                int i, j;
                --l_302[1][3];
                l_305 = g_197;
                if (g_189)
                    goto lbl_306;
            }
        }
    }
    l_310--;
    return l_309;
}



static uint8_t  func_2(const int32_t  p_3, int8_t  p_4, uint32_t  p_5, uint16_t  p_6, uint64_t  p_7)
{ 
    uint8_t l_28[1][2];
    int8_t l_47 = 5L;
    int32_t l_53 = (-1L);
    uint64_t l_66[3][1];
    int32_t l_201 = 0xDD9DDBCAL;
    int64_t l_217 = 0L;
    uint64_t l_233 = 0xC889B63E07D318FBLL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_28[i][j] = 253UL;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_66[i][j] = 0UL;
    }
    if ((safe_mod_func_uint8_t_u_u(((p_6 |= func_17(g_11[1][0])) && ((p_3 , p_3) > 0L)), l_28[0][0])))
    { 
        return g_11[0][0];
    }
    else
    { 
        uint8_t l_41[4][4] = {{255UL,0x75L,0x75L,255UL},{255UL,0x75L,0x75L,255UL},{255UL,0x75L,0x75L,255UL},{255UL,0x75L,0x75L,255UL}};
        uint32_t l_49 = 0UL;
        int32_t l_81 = (-9L);
        int i, j;
        if (((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((g_26 != (safe_rshift_func_int8_t_s_s(((g_11[2][0] != (safe_sub_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(g_11[1][0], l_28[0][0])) == 0x07758A8CE9B8A514LL), l_28[0][0]))) > l_28[0][0]), g_11[2][0]))) , 0xBFL), g_11[2][0])), g_11[2][0])) < g_11[2][0]))
        { 
            for (g_26 = 0; (g_26 < 33); g_26 = safe_add_func_int8_t_s_s(g_26, 5))
            { 
                return l_41[1][2];
            }
            for (p_6 = 0; (p_6 <= 60); ++p_6)
            { 
                uint8_t l_48 = 246UL;
                l_49 = (((((((safe_lshift_func_uint8_t_u_s((g_46 = (((p_7 & (p_3 ^ (-10L))) > l_41[3][0]) <= l_28[0][0])), 2)) > p_3) < l_47) && p_5) , p_6) | 0x23986B299B5F277FLL) != l_48);
            }
        }
        else
        { 
            uint32_t l_54 = 1UL;
            int32_t l_72 = 1L;
            g_50 |= g_11[1][0];
            for (g_46 = 26; (g_46 > 1); g_46 = safe_sub_func_int64_t_s_s(g_46, 3))
            { 
                l_53 = 0L;
                l_54++;
                if (l_28[0][0])
                    continue;
            }
            if ((safe_div_func_uint16_t_u_u(((((g_11[2][0] = (g_50 | (p_6 , ((safe_add_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((!p_6) >= l_54), 4294967295UL)) <= l_54), 8L)) , l_66[1][0]) != p_4), p_4)) , 0xD133L)))) ^ g_26) , 0xFD26L) > g_46), (-1L))))
            { 
                l_72 = ((safe_mul_func_uint8_t_u_u(255UL, 1UL)) == ((safe_div_func_uint8_t_u_u(g_46, 4L)) <= g_71));
            }
            else
            { 
                g_73--;
            }
        }
        if (l_53)
        { 
            l_81 = (safe_div_func_uint32_t_u_u(((((((g_78 &= p_7) <= (p_5 = (safe_lshift_func_uint8_t_u_s((g_73 = 250UL), 6)))) & p_3) | g_50) < 247UL) && 255UL), g_46));
            return g_26;
        }
        else
        { 
            int8_t l_91 = 0xCFL;
            for (g_73 = 0; (g_73 < 26); g_73 = safe_add_func_uint16_t_u_u(g_73, 3))
            { 
                if (g_50)
                    break;
            }
            for (p_7 = (-8); (p_7 > 24); p_7 = safe_add_func_uint32_t_u_u(p_7, 7))
            { 
                g_86 = 0x785F4F6EL;
                return g_73;
            }
            l_53 = (((l_66[0][0] <= (g_11[0][0] < ((l_91 &= (safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_11[0][0], g_46)), 1L))) && p_6))) , 0xE0L) > 0L);
        }
    }
    if ((safe_sub_func_int32_t_s_s(l_47, ((safe_rshift_func_int8_t_s_s(g_11[1][0], ((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(l_47, 2)) == p_3) || p_3), l_28[0][1])), 1)) , 0x21L))) < 18446744073709551615UL))))
    { 
        int16_t l_110[1];
        int32_t l_135 = 0x2E2DA10AL;
        int32_t l_159 = 0x67205C45L;
        int i;
        for (i = 0; i < 1; i++)
            l_110[i] = (-8L);
lbl_164:
        if ((safe_add_func_int8_t_s_s((g_73 & ((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(((0x06EC1612L > (((l_53 |= (safe_add_func_int8_t_s_s(0xACL, p_4))) & g_78) ^ p_5)) & 18446744073709551615UL), 14)) , l_110[0]) < 18446744073709551610UL), 7)) != 0x5796L)), p_6)))
        { 
            int32_t l_115 = (-7L);
            int32_t l_118 = 0x59E71000L;
            l_118 |= ((((l_53 |= (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_115 < p_4), 6)), (safe_add_func_uint64_t_u_u(18446744073709551615UL, l_115))))) && p_6) & 4UL) | g_71);
        }
        else
        { 
            int8_t l_121 = 0xC1L;
            uint8_t l_122 = 0UL;
            g_123 = (((((safe_rshift_func_uint16_t_u_s(((l_110[0] && (((l_121 |= g_86) | (g_73 | g_26)) != g_71)) <= 0x40414003L), l_28[0][1])) & l_66[1][0]) , 0x2ABCL) <= l_122) | (-1L));
            for (g_86 = 0; (g_86 > 0); g_86 = safe_add_func_uint16_t_u_u(g_86, 1))
            { 
                uint32_t l_134 = 1UL;
                if (p_5)
                    break;
                l_53 = (l_122 , g_71);
                l_135 = (((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((l_134 = (((safe_add_func_uint64_t_u_u(((g_78 , 1UL) || (g_123 | l_110[0])), l_121)) && l_121) , l_110[0])) || l_110[0]), p_6)) && l_134), l_110[0])) , p_6), g_86)) || l_110[0]) && 0x356471FAL);
            }
        }
        if (g_123)
        { 
            uint64_t l_158 = 18446744073709551615UL;
            int32_t l_174[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_174[i][j] = 0xAC302985L;
            }
            l_135 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_110[0] && ((safe_sub_func_int8_t_s_s(((g_78 = (safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((l_53 = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((g_26 = 5UL) != l_66[0][0]), l_158)), g_11[0][0]))) ^ l_159), l_158)) <= (-6L)) ^ l_110[0]), g_11[0][0]))) & g_123), 0xCDL)) | g_11[2][0])) < l_47), g_11[2][0])), g_86)) && p_3), 65535UL)), g_50)), 15)), g_11[2][0]));
            for (g_123 = 0; (g_123 != 16); g_123++)
            { 
                g_162 = 0xA719620DL;
                g_163 ^= p_5;
                if (g_123)
                    goto lbl_164;
            }
            for (l_47 = (-19); (l_47 != (-3)); ++l_47)
            { 
                ++g_167;
                l_174[0][0] = (((safe_mul_func_uint8_t_u_u((p_6 , ((safe_add_func_uint8_t_u_u(l_28[0][1], (l_47 ^ g_163))) >= p_4)), p_4)) , 4UL) & 65530UL);
            }
        }
        else
        { 
            uint32_t l_181 = 4294967295UL;
            int32_t l_182 = 0xD920E91CL;
            int32_t l_199 = (-6L);
            int32_t l_200[1];
            int i;
            for (i = 0; i < 1; i++)
                l_200[i] = (-1L);
            if (((((safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((l_182 = (((l_181 <= ((8L & (0xE9AEL != (-1L))) <= g_50)) != l_110[0]) , p_6)) ^ p_3), g_11[2][0])) == g_11[1][0]), p_5)) & 0x5D45L) > g_11[2][0]), g_50)) < g_73) & l_28[0][1]) != p_6))
            { 
                int8_t l_183 = 0xB2L;
                int32_t l_184 = 0x85158CC5L;
                g_189 |= (l_110[0] , ((--g_73) == (((safe_lshift_func_int8_t_s_s((g_86 = (p_6 ^ (p_7 < g_11[2][0]))), 0)) | (-7L)) < 1UL)));
            }
            else
            { 
                g_190--;
                l_182 = (((0x2D90L || ((safe_mod_func_uint64_t_u_u(g_123, (p_7 , g_50))) , g_167)) < 0L) , g_50);
            }
            g_202++;
        }
    }
    else
    { 
        uint64_t l_209 = 0xA3061BA63EE4706FLL;
        int32_t l_234[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_234[i][j] = 0xC80131C0L;
        }
        if (g_162)
        { 
            uint8_t l_207 = 248UL;
            int32_t l_210 = 0x3F753BD1L;
            for (g_73 = 0; (g_73 <= 0); g_73 += 1)
            { 
                uint64_t l_208 = 0x65D3118DE828DF10LL;
                l_201 = (safe_add_func_int8_t_s_s(((l_207 ^ l_208) || (0x65E2L != g_11[2][0])), g_46));
                l_210 = (g_211[1][3] = (p_3 <= (l_209 >= ((g_46 | 0UL) >= l_210))));
                g_211[1][3] |= ((((~((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(g_202, 8)) >= ((0xA306168AL <= (p_5 = ((p_4 = (l_209 || 1UL)) <= 0xDCL))) == p_7)) <= l_217), 65535UL)) >= g_162)) || 0xE0E3L) ^ g_11[0][0]) & 0x44L);
            }
        }
        else
        { 
            uint32_t l_232 = 18446744073709551615UL;
            l_234[1][0] = (safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u((p_3 , (((safe_mod_func_uint16_t_u_u(65530UL, 9UL)) , g_202) > g_197)), l_232)) & l_233) | 0L) ^ 7L), p_6)) | p_3) || g_211[1][0]), p_4)) != p_7) > g_211[0][1]) & 0L), g_211[1][3])), 3));
        }
    }
    return l_217;
}



static uint16_t  func_17(int8_t  p_18)
{ 
    uint16_t l_25[2][3] = {{1UL,1UL,1UL},{0x3BC1L,0x3BC1L,0x3BC1L}};
    int32_t l_27 = 0x3AE5D5ECL;
    int i, j;
    l_27 = (safe_mod_func_uint64_t_u_u(((g_11[2][0] >= (((safe_add_func_uint64_t_u_u(p_18, ((safe_mul_func_uint8_t_u_u(((((l_25[1][0] | 0xCFL) , 1L) , l_25[1][1]) <= p_18), l_25[0][0])) > (-4L)))) > p_18) ^ l_25[1][0])) >= l_25[1][0]), g_26));
    return g_11[1][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_198[i][j], "g_198[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_211[i][j], "g_211[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
