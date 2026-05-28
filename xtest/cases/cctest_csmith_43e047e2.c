// SPDX-License-Identifier: MIT
// cctest_csmith_43e047e2.c --- cctest case csmith_43e047e2 (csmith seed 1138771938)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3e9b89b8 */
/* @exp_ticks 0x5017 */

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

// Options:   -s 1138771938 -o /tmp/csmith_gen_1jaf3acg/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint8_t g_10 = 0UL;
static int8_t g_30 = 2L;
static uint8_t g_99 = 0x41L;
static uint32_t g_110[3] = {2UL,2UL,2UL};
static uint32_t g_132 = 18446744073709551607UL;
static int8_t g_140[3][1] = {{(-2L)},{(-2L)},{(-2L)}};
static int32_t g_141 = 0xEF0612D7L;
static int32_t g_157[4][4] = {{0xAA346826L,0xAA346826L,0xAA346826L,0xAA346826L},{0xAA346826L,0xAA346826L,0xAA346826L,0xAA346826L},{0xAA346826L,0xAA346826L,0xAA346826L,0xAA346826L},{0xAA346826L,0xAA346826L,0xAA346826L,0xAA346826L}};
static uint16_t g_166 = 0x12ACL;
static uint16_t g_167 = 65535UL;
static uint32_t g_170 = 0xB982E971L;
static int64_t g_183 = (-1L);
static int64_t g_211 = 0x1D999481441D5091LL;
static int8_t g_231 = 1L;
static int16_t g_233 = 0xB1C0L;



static int32_t  func_1(void);
static uint64_t  func_2(int32_t  p_3, uint64_t  p_4, int16_t  p_5, int16_t  p_6);
static int16_t  func_15(int64_t  p_16, uint64_t  p_17, const uint64_t  p_18);




static int32_t  func_1(void)
{ 
    uint64_t l_7[2];
    int32_t l_19 = 0xDF628589L;
    int i;
    for (i = 0; i < 2; i++)
        l_7[i] = 0x0A77C8748AFA2FAFLL;
    g_233 |= (l_19 = ((func_2(((--l_7[1]) > g_10), (safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((((func_15(g_10, l_19, l_19) && g_30) | 0x6ABCL) >= g_10), l_19)) | 0xBC1FB248L) , g_99), 5)), g_10, g_10) & g_10) ^ g_10));
    return g_140[2][0];
}



static uint64_t  func_2(int32_t  p_3, uint64_t  p_4, int16_t  p_5, int16_t  p_6)
{ 
    uint32_t l_151 = 0x9CDE0C07L;
    int32_t l_171 = 0xADED1DAFL;
    uint64_t l_197 = 0xD404E85F7CE25D3ALL;
    int32_t l_199 = 9L;
    int32_t l_218 = (-2L);
    for (g_30 = (-18); (g_30 == (-17)); ++g_30)
    { 
        uint32_t l_152[2];
        int32_t l_161 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_152[i] = 1UL;
        g_141 = g_140[1][0];
        for (p_5 = 21; (p_5 <= (-21)); p_5 = safe_sub_func_int8_t_s_s(p_5, 1))
        { 
            uint16_t l_160 = 0xB42FL;
            l_152[1] &= (safe_mul_func_int16_t_s_s(0xA65FL, (safe_mod_func_uint32_t_u_u(((+p_3) != (l_151 && p_4)), 1UL))));
            for (l_151 = (-23); (l_151 > 25); l_151 = safe_add_func_int32_t_s_s(l_151, 9))
            { 
                l_161 = (safe_rshift_func_uint16_t_u_s((((g_157[2][0] ^= g_110[2]) ^ (((safe_sub_func_int16_t_s_s((0x3A28B5F6L && l_160), g_110[0])) == g_132) != 0x5B50DB93F61EF617LL)) == p_5), 14));
                l_161 &= (g_141 |= p_3);
            }
        }
        for (g_141 = 2; (g_141 >= 0); g_141 -= 1)
        { 
            int i, j;
            g_166 = (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(g_157[g_141][(g_141 + 1)], g_157[g_141][g_141])), g_157[g_141][(g_141 + 1)]));
        }
    }
    if (g_110[0])
    { 
lbl_232:
        --g_167;
    }
    else
    { 
        int32_t l_182[3][4];
        int32_t l_184 = 5L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_182[i][j] = 0x8CC87C93L;
        }
        l_171 = g_170;
        for (g_170 = 0; (g_170 >= 19); g_170 = safe_add_func_int8_t_s_s(g_170, 8))
        { 
            int8_t l_180 = 1L;
            int32_t l_181 = 6L;
            int32_t l_198 = 0x2BE3B962L;
            if ((((-1L) != 0xA2CA1CAAA0BFB30CLL) | (l_184 |= (safe_sub_func_uint64_t_u_u((g_183 = (safe_add_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((((((l_180 ^= (6UL && g_166)) ^ l_181) >= 0x1295L) ^ p_3) , g_30), p_4)) <= l_181), l_182[0][2]))), 0x612183A9A7DBD609LL)))))
            { 
                return g_157[3][3];
            }
            else
            { 
                uint32_t l_189 = 18446744073709551607UL;
                l_199 = ((g_110[0] = ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_198 = ((((l_189 || ((((l_171 = ((l_181 ^= (safe_rshift_func_uint8_t_u_s((g_99 = (+((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(0xEDL, 4)), 0)) > p_6))), 6))) == p_3)) != 0x5342L) || g_110[0]) & l_197)) , p_5) | 0x3E69D149D964FF40LL) , 0xEEB1L)), 2)) == l_182[0][1]) || 0xD3BFB3928AAD06F1LL), p_5)) | 0x7892L)) <= p_5);
            }
        }
    }
    for (l_151 = 24; (l_151 <= 35); ++l_151)
    { 
        uint32_t l_202 = 0UL;
        for (g_141 = 3; (g_141 >= 0); g_141 -= 1)
        { 
            int i, j;
            l_202--;
            g_211 |= (safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((((g_110[2] = 0x3291253BL) , (safe_add_func_uint8_t_u_u(g_157[g_141][g_141], (0UL ^ g_157[g_141][g_141])))) | 0xBF89L) != g_140[2][0]), p_5)), g_157[2][0]));
            if (((g_166 &= ((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((0L | 0xE9FFL) > (((((safe_add_func_int32_t_s_s(0x7D1255F1L, l_171)) , g_110[0]) <= 1L) , l_218) ^ 65535UL)), g_157[g_141][g_141])), g_140[2][0])) == p_3)) || p_3))
            { 
                l_199 = 4L;
            }
            else
            { 
                g_231 &= (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_157[g_141][g_141], (safe_add_func_int32_t_s_s(0x1F4452DAL, (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_5, g_10)), g_30)))))) != 0L), p_3)), p_6));
                if (p_6)
                    goto lbl_232;
            }
        }
    }
    return p_5;
}



static int16_t  func_15(int64_t  p_16, uint64_t  p_17, const uint64_t  p_18)
{ 
    int32_t l_25 = 0L;
    int32_t l_31 = 0L;
    int32_t l_44[2];
    int32_t l_67 = 0x26BEC160L;
    uint16_t l_100 = 8UL;
    int16_t l_105 = 0x0C38L;
    int8_t l_131[1];
    int i;
    for (i = 0; i < 2; i++)
        l_44[i] = 0x8A3D3555L;
    for (i = 0; i < 1; i++)
        l_131[i] = 2L;
    if ((safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((!l_25) , ((p_16 < (p_16 != 0x787DL)) > 0x4DL)), p_18)), 0xE1L)))
    { 
        l_31 = (g_30 = (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(p_18, (((4L > 0xF1L) & p_16) && g_10))) <= p_17), g_10)));
        for (p_17 = 17; (p_17 != 60); p_17 = safe_add_func_uint64_t_u_u(p_17, 1))
        { 
            uint8_t l_65 = 0x2EL;
            int32_t l_66 = 0xBD42F903L;
            for (l_31 = 27; (l_31 < 29); ++l_31)
            { 
                l_44[1] = (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_10, (safe_lshift_func_uint8_t_u_u(((g_30 = (((g_30 != (((safe_add_func_int32_t_s_s((((-6L) || p_17) < 0xCBF7762406C49A7ELL), 0x9ED5B606L)) != 0xA08552ADL) ^ p_18)) & g_30) , g_30)) & g_10), 2)))), g_10));
            }
            for (p_16 = (-26); (p_16 == 2); ++p_16)
            { 
                if (g_30)
                    break;
                return g_30;
            }
            l_67 = (((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((((l_44[1] = ((~((safe_sub_func_uint32_t_u_u((((l_65 = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((0UL & (l_31 = 0x2309L)) || 18446744073709551610UL))), 3L)), p_16)) , 0x0555L)) == l_66) >= g_10), 0x0040642FL)) != 0xBECDE871L)) & p_18)) >= l_25) | l_25) & p_18), 2UL)) >= g_30), p_16)), l_25)) , l_66), g_10)), 4UL)) , p_17) >= l_25);
        }
    }
    else
    { 
        uint8_t l_91 = 0xEEL;
        int32_t l_92 = 1L;
        int32_t l_111[4][4];
        int16_t l_123 = 0xC8C6L;
        uint32_t l_130 = 0UL;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_111[i][j] = (-1L);
        }
        for (g_30 = 20; (g_30 == (-25)); --g_30)
        { 
            int64_t l_89 = 0x68CABD04657E6FF2LL;
            int32_t l_90 = 0xB51EF177L;
            int16_t l_109 = 1L;
            int32_t l_127 = 0x86BC1F71L;
            l_92 ^= (((((l_67 ^= (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint64_t_u(((((safe_add_func_int64_t_s_s((((safe_mod_func_int32_t_s_s((p_18 ^ (l_89 = (0UL != (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((l_31 <= l_25), g_10)), g_30)) , p_16), g_30)) & 18446744073709551615UL), g_30))))), l_90)) || 0xA7L) >= 1UL), p_18)) || l_44[0]) > g_10) ^ l_91))) ^ 0UL) , p_17), p_17)), 1)), p_16))) > p_17) > l_90) == 0x4AL) >= 4294967294UL);
            l_92 ^= (safe_rshift_func_uint16_t_u_u(0x13CFL, ((safe_sub_func_int32_t_s_s((((safe_div_func_int8_t_s_s(g_10, (((g_99 ^= g_30) >= l_100) , (-4L)))) , 0x46L) || l_91), 9L)) == 0x4CB544DDB7621CC8LL)));
            if (g_30)
            { 
                uint32_t l_112 = 0x85B7F5D8L;
                l_105 = (l_31 = (safe_sub_func_int8_t_s_s(l_92, (((safe_mul_func_uint8_t_u_u(2UL, 6UL)) | l_90) , p_16))));
                l_111[2][1] &= (~((g_10 ^ ((g_110[0] = (safe_sub_func_int16_t_s_s(l_109, (((l_92 = (l_109 || 0UL)) ^ l_109) && p_17)))) & p_16)) | l_91));
                l_112 ^= l_109;
            }
            else
            { 
                uint64_t l_124 = 0x8548FAEAFAE61C72LL;
                l_124 = (l_123 = (l_111[1][0] > (safe_mul_func_uint8_t_u_u((((((safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_10, 1UL)), g_99)) == g_99), p_18)) != g_110[0]), l_111[2][1])) >= p_16) == 0x55E7CE46079F8D1BLL) || 6UL) & g_110[1]), p_18))));
                if (p_18)
                    break;
                l_127 ^= (0x9AF2D809A3AC23FCLL == ((-1L) & (safe_add_func_uint64_t_u_u(g_110[0], 0x2CC90326E311AEECLL))));
            }
        }
        l_131[0] = (p_17 || (safe_lshift_func_int16_t_s_u((l_130 == 0x1772BC2165313957LL), 14)));
        g_132 = (-10L);
    }
    l_44[0] |= ((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((p_17 == 6UL) || (safe_unary_minus_func_uint8_t_u((safe_mod_func_int8_t_s_s(((g_141 = (g_140[2][0] = (p_17 = g_99))) && g_30), l_105))))), g_99)), 0L)) >= l_25);
    for (l_105 = 0; (l_105 >= 0); l_105 -= 1)
    { 
        int i;
        g_141 &= g_110[(l_105 + 2)];
    }
    return p_17;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_140[i][j], "g_140[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_157[i][j], "g_157[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
