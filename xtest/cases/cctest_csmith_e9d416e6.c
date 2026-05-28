// SPDX-License-Identifier: MIT
// cctest_csmith_e9d416e6.c --- cctest case csmith_e9d416e6 (csmith seed 3922990822)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe9a485f6 */
/* @exp_ticks 0x524b */

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

// Options:   -s 3922990822 -o /tmp/csmith_gen_utfxns_n/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   uint8_t  f1;
   int64_t  f2;
   int8_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
   int32_t  f1;
   int64_t  f2;
};
#pragma pack(pop)

struct S2 {
   struct S1  f0;
   uint32_t  f1;
   const uint32_t  f2;
};

union U3 {
   uint32_t  f0;
   int32_t  f1;
   const struct S1  f2;
   uint32_t  f3;
};


static int32_t g_2 = 0x6A162C9CL;
static int32_t g_13 = 5L;
static int64_t g_14[6][3] = {{(-1L),0x6C0E2632C5B641B4LL,0x064BAE0FC36FE5ABLL},{0xE12AA53F0D3ECF04LL,0x6C0E2632C5B641B4LL,0xE12AA53F0D3ECF04LL},{0L,(-1L),0x064BAE0FC36FE5ABLL},{0L,0L,(-1L)},{0xE12AA53F0D3ECF04LL,(-1L),(-1L)},{(-1L),0x6C0E2632C5B641B4LL,0x064BAE0FC36FE5ABLL}};
static uint32_t g_16 = 0UL;
static uint32_t g_22 = 4294967290UL;
static uint16_t g_33[4] = {0x9963L,0x9963L,0x9963L,0x9963L};
static int8_t g_48 = (-1L);
static int64_t g_50 = 1L;
static int8_t g_58 = 0xE1L;
static int32_t g_64 = 0x70DAEE1FL;
static uint16_t g_108 = 0x92CBL;
static uint64_t g_110[1][6][2] = {{{0x6E721E4501C69F0BLL,0x6E721E4501C69F0BLL},{0x196426D5D5E43F78LL,0x6E721E4501C69F0BLL},{0x6E721E4501C69F0BLL,0x196426D5D5E43F78LL},{0x6E721E4501C69F0BLL,0x6E721E4501C69F0BLL},{0x196426D5D5E43F78LL,0x6E721E4501C69F0BLL},{0x6E721E4501C69F0BLL,0x196426D5D5E43F78LL}}};
static union U3 g_111 = {6UL};
static uint32_t g_132 = 0xE2DA10ACL;
static struct S2 g_139[7] = {{{0x0D832770L,1L,1L},1UL,18446744073709551615UL},{{0x0D832770L,1L,1L},1UL,18446744073709551615UL},{{0x205C45CDL,9L,-1L},0x1001084BL,18446744073709551609UL},{{0x0D832770L,1L,1L},1UL,18446744073709551615UL},{{0x0D832770L,1L,1L},1UL,18446744073709551615UL},{{0x205C45CDL,9L,-1L},0x1001084BL,18446744073709551609UL},{{0x0D832770L,1L,1L},1UL,18446744073709551615UL}};
static uint64_t g_141 = 0x9620DE40056FDF27LL;
static uint8_t g_151 = 0xBBL;
static struct S0 g_159 = {0x221AL,0x1DL,0x7E9AE4E8F995CB7FLL,-8L};
static const int32_t g_185[7] = {1L,1L,1L,1L,1L,1L,1L};
static const int32_t *g_186 = (void*)0;
static uint8_t g_188 = 0UL;
static int32_t *g_225[3][4] = {{&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1},{&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1},{&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1,&g_139[3].f0.f1}};
static int32_t **g_224[3] = {&g_225[2][2],&g_225[2][2],&g_225[2][2]};
static uint64_t **g_247 = (void*)0;
static const struct S0 *g_402 = &g_159;
static const struct S0 **g_401 = &g_402;
static const struct S1 *g_461 = &g_139[3].f0;
static uint64_t g_496 = 4UL;
static uint32_t g_509 = 0xEDD278A8L;
static int32_t *g_596 = &g_111.f1;
static int32_t ***g_670[5][6] = {{&g_224[2],&g_224[0],&g_224[0],&g_224[2],&g_224[2],&g_224[2]},{&g_224[2],&g_224[2],(void*)0,&g_224[2],&g_224[2],(void*)0},{&g_224[2],&g_224[2],(void*)0,(void*)0,&g_224[2],&g_224[2]},{&g_224[0],&g_224[2],&g_224[2],&g_224[2],&g_224[2],&g_224[2]},{&g_224[2],&g_224[0],(void*)0,(void*)0,(void*)0,(void*)0}};
static struct S0 **g_711 = (void*)0;
static int32_t g_733 = 0x20D13929L;
static int32_t g_781 = 0x852649A9L;
static uint32_t *g_802 = &g_22;
static uint32_t **g_801 = &g_802;
static int16_t *g_859 = (void*)0;
static int32_t g_873 = 0x9CB06EA7L;
static union U3 *g_890 = (void*)0;
static union U3 **g_889 = &g_890;
static struct S1 g_923 = {18446744073709551610UL,-8L,1L};
static int16_t g_925 = 0x58BCL;
static uint32_t ** const **g_985 = (void*)0;
static uint64_t *g_1010[5][3][7] = {{{&g_110[0][2][0],(void*)0,&g_110[0][2][0],&g_110[0][5][1],&g_110[0][5][1],&g_110[0][2][0],(void*)0},{(void*)0,(void*)0,&g_110[0][2][0],&g_110[0][2][0],(void*)0,(void*)0,(void*)0},{&g_110[0][2][0],&g_110[0][5][1],&g_110[0][5][1],&g_110[0][2][0],(void*)0,&g_110[0][2][0],&g_110[0][5][1]}},{{&g_496,&g_496,(void*)0,&g_110[0][2][0],(void*)0,&g_496,&g_496},{&g_496,&g_110[0][5][1],&g_496,&g_110[0][5][1],&g_496,&g_496,&g_110[0][5][1]},{&g_110[0][5][1],(void*)0,&g_110[0][5][1],(void*)0,(void*)0,&g_110[0][5][1],(void*)0}},{{&g_110[0][5][1],(void*)0,&g_496,&g_496,(void*)0,&g_110[0][5][1],(void*)0},{&g_110[0][5][1],(void*)0,(void*)0,&g_110[0][5][1],(void*)0,&g_110[0][5][1],(void*)0},{&g_496,&g_496,&g_110[0][5][1],&g_496,&g_110[0][5][1],&g_496,&g_496}},{{&g_496,(void*)0,&g_110[0][2][0],(void*)0,&g_496,&g_496,(void*)0},{&g_110[0][2][0],(void*)0,&g_110[0][2][0],&g_110[0][5][1],&g_110[0][5][1],&g_110[0][2][0],(void*)0},{(void*)0,(void*)0,&g_110[0][2][0],&g_110[0][2][0],(void*)0,(void*)0,(void*)0}},{{&g_110[0][2][0],&g_110[0][5][1],&g_110[0][5][1],&g_110[0][2][0],(void*)0,&g_110[0][2][0],&g_110[0][5][1]},{&g_496,&g_496,(void*)0,&g_110[0][2][0],(void*)0,&g_496,&g_496},{&g_496,&g_110[0][5][1],&g_496,&g_110[0][5][1],&g_496,&g_496,&g_110[0][5][1]}}};
static uint32_t ***g_1040[2] = {&g_801,&g_801};
static uint32_t ****g_1039[1][1] = {{&g_1040[1]}};
static struct S2 g_1103 = {{0x2CD4AB77L,0x01C3A16CL,6L},0x3D59CEB8L,0x5C06B353L};
static struct S2 *g_1102 = &g_1103;
static uint64_t *** const g_1164 = &g_247;
static uint64_t *** const *g_1163 = &g_1164;
static int32_t g_1189 = 2L;
static int32_t ** const **g_1225 = (void*)0;
static int32_t ** const ***g_1224 = &g_1225;
static uint8_t g_1241 = 0x0DL;
static const struct S1 *g_1271 = &g_923;
static struct S1 *g_1319 = &g_923;
static int16_t g_1338 = 1L;
static union U3 * const *g_1388 = (void*)0;
static union U3 * const **g_1387 = &g_1388;
static union U3 * const ***g_1386 = &g_1387;
static int32_t ****g_1395[6] = {&g_670[1][4],&g_670[1][4],&g_670[1][4],&g_670[1][4],&g_670[1][4],&g_670[1][4]};
static uint32_t g_1438 = 5UL;
static int32_t g_1452 = 0x0FDABD26L;
static int16_t **g_1453[3] = {(void*)0,(void*)0,(void*)0};
static const uint32_t g_1552 = 0x67CBB526L;
static const uint32_t * const g_1554 = (void*)0;
static const uint32_t * const *g_1553[2][2] = {{&g_1554,&g_1554},{&g_1554,&g_1554}};



static union U3  func_1(void);
static int8_t  func_7(int32_t  p_8);
static int32_t * func_36(int16_t  p_37, int32_t * p_38);
static int32_t  func_41(int32_t  p_42);
static int16_t  func_65(uint32_t  p_66, int8_t * p_67, int8_t * p_68);
static uint16_t  func_71(struct S2  p_72, union U3  p_73, uint64_t * const  p_74, int64_t  p_75);
static struct S2  func_76(union U3  p_77, union U3  p_78, struct S0  p_79, uint64_t  p_80);
static union U3  func_82(uint64_t * p_83, int64_t * p_84, int16_t  p_85, uint8_t  p_86);




static union U3  func_1(void)
{ 
    uint64_t l_9 = 0x733E34B64B5C6F8BLL;
    int32_t *l_598 = &g_64;
    int32_t l_632[1][3][3] = {{{0x94B8953FL,0x94B8953FL,1L},{0x94B8953FL,0x94B8953FL,1L},{0x94B8953FL,0x94B8953FL,1L}}};
    int8_t l_664 = 0x63L;
    int32_t ***l_669 = &g_224[2];
    uint64_t *l_687 = &l_9;
    uint64_t **l_686 = &l_687;
    struct S0 *l_713 = &g_159;
    struct S0 **l_712 = &l_713;
    uint32_t l_714 = 0xE1EF8C03L;
    int8_t l_715[1][2][2];
    union U3 l_749 = {1UL};
    union U3 *l_753 = &l_749;
    union U3 **l_752 = &l_753;
    union U3 ***l_751 = &l_752;
    int16_t l_861 = 0xE8F2L;
    int32_t l_874[2][6] = {{0L,0x368407DCL,0L,0x368407DCL,0L,0x368407DCL},{0L,0x368407DCL,0L,0x368407DCL,0L,0x368407DCL}};
    int32_t l_926 = 0x0486A1F8L;
    int64_t l_966 = 0xAEF19126ABC2CD4ELL;
    uint32_t ** const **l_987 = (void*)0;
    const int32_t l_997 = 0xD25F0EC2L;
    struct S1 l_999[6] = {{0x119757DBL,1L,0L},{0x119757DBL,1L,0L},{0x119757DBL,1L,0L},{18446744073709551615UL,1L,8L},{18446744073709551615UL,1L,8L},{0x119757DBL,1L,0L}};
    int64_t l_1056 = 0x2E80ACE11DEFB281LL;
    struct S1 l_1104[6] = {{0x92205912L,0x4F2BD7D9L,-1L},{0x92205912L,0x4F2BD7D9L,-1L},{0x92205912L,0x4F2BD7D9L,-1L},{0x92205912L,0x4F2BD7D9L,-1L},{0x92205912L,0x4F2BD7D9L,-1L},{0x92205912L,0x4F2BD7D9L,-1L}};
    uint64_t l_1172 = 0UL;
    struct S2 l_1208 = {{1UL,1L,9L},5UL,18446744073709551615UL};
    int16_t l_1212 = 1L;
    int64_t l_1215 = (-1L);
    uint32_t l_1232 = 0x0DE8C1E9L;
    uint32_t l_1248 = 0UL;
    int32_t *l_1293 = &g_64;
    uint8_t l_1303 = 0xDAL;
    uint32_t ***l_1305[1];
    uint8_t *l_1312 = (void*)0;
    uint8_t *l_1313 = &g_188;
    int8_t *l_1314[3][3][2] = {{{&l_715[0][0][0],&l_715[0][0][0]},{(void*)0,&g_58},{(void*)0,&g_58}},{{(void*)0,&l_715[0][0][0]},{&l_715[0][0][0],(void*)0},{&g_58,(void*)0}},{{&g_58,(void*)0},{&l_715[0][0][0],&l_715[0][0][0]},{(void*)0,&g_58}}};
    int8_t l_1315 = 0xB3L;
    uint32_t l_1337 = 18446744073709551615UL;
    struct S1 **l_1340 = &g_1319;
    struct S0 l_1418 = {-9L,247UL,9L,0xF0L};
    struct S0 l_1450 = {0x8123L,255UL,0xC2361E3AE53AF0FALL,1L};
    uint32_t *****l_1514[7][5] = {{(void*)0,&g_1039[0][0],&g_1039[0][0],&g_1039[0][0],&g_1039[0][0]},{&g_1039[0][0],&g_1039[0][0],(void*)0,(void*)0,&g_1039[0][0]},{(void*)0,&g_1039[0][0],(void*)0,&g_1039[0][0],&g_1039[0][0]},{(void*)0,&g_1039[0][0],&g_1039[0][0],&g_1039[0][0],&g_1039[0][0]},{&g_1039[0][0],&g_1039[0][0],(void*)0,(void*)0,&g_1039[0][0]},{(void*)0,&g_1039[0][0],(void*)0,&g_1039[0][0],&g_1039[0][0]},{(void*)0,&g_1039[0][0],&g_1039[0][0],&g_1039[0][0],&g_1039[0][0]}};
    uint32_t l_1561[6][3] = {{0xB46B91E4L,18446744073709551608UL,7UL},{0x90011E8AL,18446744073709551608UL,0x90011E8AL},{1UL,0xB46B91E4L,7UL},{1UL,1UL,0xB46B91E4L},{0x90011E8AL,0xB46B91E4L,0xB46B91E4L},{0xB46B91E4L,18446744073709551608UL,7UL}};
    struct S0 ***l_1565 = &g_711;
    union U3 l_1567[2] = {{0x700AD231L},{0x700AD231L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_715[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 1; i++)
        l_1305[i] = &g_801;
    for (g_2 = 0; (g_2 > 19); g_2++)
    { 
        int64_t *l_20 = &g_14[0][1];
        int32_t l_21[7][5][5] = {{{0x146DF800L,0x7CF7A021L,0x420EA1BCL,(-4L),1L},{(-1L),(-1L),0xE630971CL,0xE9A9D012L,4L},{0x9A164E62L,0x26232C2AL,0x7312B948L,0x7CF7A021L,1L},{0x280BFE73L,0xE9A9D012L,0xE9A9D012L,0x280BFE73L,0xB1A88AF1L},{1L,(-10L),0x2FC5C3C3L,1L,0x420EA1BCL}},{{3L,0xB1A88AF1L,0x11904E20L,1L,0x3396D56AL},{0x2FC5C3C3L,0xEB4983CAL,0L,1L,1L},{(-1L),3L,(-1L),0x280BFE73L,(-1L)},{0xEB4983CAL,0x58A8CE9BL,3L,0x7CF7A021L,(-4L)},{1L,0x5D5EC7E0L,0xB1A88AF1L,0xE9A9D012L,0x50098926L}},{{0x7CF7A021L,1L,3L,(-4L),3L},{0x11904E20L,0x11904E20L,(-1L),0L,1L},{0x420EA1BCL,0L,0L,0x4489B467L,0x146DF800L},{4L,0x3396D56AL,0x11904E20L,(-1L),0xE630971CL},{0L,0L,0x2FC5C3C3L,0x2FC5C3C3L,0L}},{{0x50098926L,0x11904E20L,0xE9A9D012L,1L,0x1832D748L},{0x26232C2AL,1L,0x7312B948L,0L,0x4489B467L},{0L,0x5D5EC7E0L,0xE630971CL,0x3396D56AL,0x280BFE73L},{0x26232C2AL,0x58A8CE9BL,0x420EA1BCL,0x58A8CE9BL,0x26232C2AL},{0x50098926L,3L,0x280BFE73L,0xE630971CL,0x11904E20L}},{{0L,0xEB4983CAL,(-4L),(-10L),0x9A164E62L},{4L,0xB1A88AF1L,3L,0x5D5EC7E0L,4L},{0xEB4983CAL,1L,1L,0xEB4983CAL,0x58A8CE9BL},{4L,0x11904E20L,0x280BFE73L,1L,(-1L)},{0L,0x58A8CE9BL,0x9A164E62L,0x26232C2AL,0x7312B948L}},{{0x280BFE73L,0x50098926L,(-1L),1L,1L},{0x146DF800L,0L,0x146DF800L,0xEB4983CAL,0x4489B467L},{0x50098926L,0xE9A9D012L,0xB1A88AF1L,0x5D5EC7E0L,1L},{0x420EA1BCL,0L,0x58A8CE9BL,1L,1L},{0x5D5EC7E0L,1L,0xB1A88AF1L,1L,0xB1A88AF1L}},{{0x9A164E62L,0x9A164E62L,0x146DF800L,(-10L),0x26232C2AL},{(-1L),0x3396D56AL,(-1L),1L,0x1832D748L},{0x717C9257L,0x7312B948L,0x9A164E62L,(-4L),0x2FC5C3C3L},{0xE630971CL,0x3396D56AL,0x280BFE73L,0x280BFE73L,0x3396D56AL},{1L,0x9A164E62L,1L,0x420EA1BCL,3L}}};
        int32_t *l_23 = &l_21[0][3][4];
        int64_t l_31 = 0L;
        uint64_t *l_32[7][6] = {{(void*)0,&l_9,&l_9,&l_9,&l_9,(void*)0},{&l_9,&l_9,&l_9,&l_9,&l_9,(void*)0},{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9},{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9},{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9},{(void*)0,&l_9,&l_9,(void*)0,&l_9,&l_9},{&l_9,&l_9,&l_9,(void*)0,&l_9,&l_9}};
        int32_t **l_597 = &g_225[1][1];
        int32_t * const l_599 = &l_21[2][4][3];
        int16_t *l_600 = &g_159.f0;
        struct S0 l_611 = {0xE162L,0x37L,-8L,0L};
        struct S0 l_612 = {-1L,0UL,-10L,0x25L};
        uint8_t l_640 = 0x95L;
        int16_t l_648 = 0x4AB8L;
        uint8_t l_748 = 0x32L;
        int i, j, k;
        (*l_23) = (((safe_lshift_func_int8_t_s_u(func_7(l_9), 7)) < ((*l_20) = g_14[0][1])) || (g_22 = (l_21[5][0][2] , (-8L))));
        for (g_13 = 2; (g_13 < (-19)); g_13--)
        { 
            int32_t **l_26 = &l_23;
            int32_t *l_28 = &l_21[5][0][2];
            int32_t **l_27 = &l_28;
            (*l_27) = ((*l_26) = (void*)0);
        }
    }
    if ((*l_598))
    { 
        uint32_t l_762 = 4294967293UL;
        int32_t *l_765 = &g_2;
        int32_t *l_766[7][1][5] = {{{&l_632[0][0][0],&l_632[0][0][0],&l_632[0][0][0],&g_2,&l_632[0][0][0]}},{{&g_111.f1,&g_111.f1,&g_111.f1,(void*)0,(void*)0}},{{&l_749.f1,&g_2,(void*)0,&g_2,&l_749.f1}},{{(void*)0,(void*)0,&g_111.f1,&g_111.f1,&g_111.f1}},{{&l_632[0][0][0],&g_2,&l_632[0][0][0],&l_632[0][0][0],&l_632[0][0][0]}},{{(void*)0,&g_111.f1,(void*)0,(void*)0,&g_111.f1}},{{&l_749.f1,&l_632[0][0][0],(void*)0,&l_632[0][0][0],&l_749.f1}}};
        int8_t l_767 = 0L;
        uint32_t l_768 = 0xD75CD679L;
        uint8_t *l_782 = (void*)0;
        uint8_t *l_783 = &g_151;
        uint32_t l_834 = 0x7294ABF7L;
        int8_t l_882 = (-10L);
        int64_t l_903 = 0xCAEFBD8399B2006DLL;
        int32_t l_906[7][2][4] = {{{(-5L),1L,0x85316F0FL,0L},{6L,1L,6L,(-2L)}},{{1L,0L,(-8L),(-4L)},{(-4L),0L,(-5L),0L}},{{(-7L),(-5L),(-5L),(-7L)},{(-4L),(-2L),(-8L),6L}},{{1L,(-1L),6L,(-4L)},{6L,(-4L),0x85316F0FL,(-4L)}},{{(-5L),(-1L),0L,6L},{(-5L),(-2L),(-4L),(-7L)}},{{0L,(-5L),0L,0L},{0L,0L,1L,(-2L)}},{{6L,(-5L),(-4L),(-1L)},{(-7L),(-4L),(-5L),(-4L)}}};
        union U3 l_939 = {7UL};
        int i, j, k;
        (*g_596) &= ((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x2319BB266CF80DFFLL != (l_762 ^ g_139[3].f1)), (((safe_div_func_int32_t_s_s(((*l_598) || 0xF480FE4BEA779115LL), (*l_598))) <= g_139[3].f0.f2) || (*l_598)))), (***l_669))) == l_762);
        l_768++;
        if (((safe_mul_func_uint16_t_u_u(g_111.f0, (6L < ((safe_lshift_func_uint8_t_u_s(((-3L) <= g_159.f3), 5)) | ((safe_rshift_func_uint16_t_u_s((((*l_783) = (((*l_598) != 0xA4L) >= (safe_sub_func_int32_t_s_s((((safe_div_func_uint64_t_u_u(((((((((*l_753) , (*l_598)) , 0xD4ADL) != g_781) , (*l_598)) != 255UL) , g_58) && g_14[0][1]), g_132)) , 0x6B6F8A54BB7244A7LL) && (***l_669)), g_185[4])))) && 0xA5L), 8)) > g_14[0][1]))))) & g_159.f0))
        { 
            int64_t l_784 = 7L;
            int32_t l_785 = (-7L);
            uint64_t l_786 = 0UL;
            ++l_786;
        }
        else
        { 
            int32_t l_791 = 0x1C5AC25CL;
            const struct S1 l_841[1] = {{1UL,-1L,0x0A55C4CBB6F1E684LL}};
            int16_t *l_855 = (void*)0;
            int16_t l_888 = (-1L);
            int8_t l_891 = 0x1DL;
            const int16_t l_892 = 0x5DF8L;
            int8_t l_895 = 0xA0L;
            int32_t l_924[2][4][1] = {{{0xB429CC03L},{(-1L)},{0xB429CC03L},{(-1L)}},{{0xB429CC03L},{(-1L)},{0xB429CC03L},{(-1L)}}};
            int16_t l_957[5] = {0L,0L,0L,0L,0L};
            int16_t l_958 = (-1L);
            const int32_t l_962[6][5] = {{(-4L),7L,0x7828D165L,0x7828D165L,7L},{0xB8E43A86L,(-1L),0x7828D165L,(-10L),(-10L)},{(-1L),0xB8E43A86L,(-1L),0x7828D165L,(-10L)},{7L,(-4L),(-10L),(-4L),7L},{(-1L),(-4L),0xB8E43A86L,7L,0xB8E43A86L},{0xB8E43A86L,0xB8E43A86L,(-10L),7L,0x82EA7804L}};
            uint32_t l_964 = 0x11D4D91AL;
            uint32_t l_965 = 4294967293UL;
            int16_t l_967 = 0xA912L;
            int32_t l_968 = 1L;
            uint32_t l_976 = 1UL;
            uint32_t ** const ***l_986[4][3] = {{&g_985,&g_985,&g_985},{&g_985,&g_985,&g_985},{&g_985,&g_985,&g_985},{(void*)0,&g_985,&g_985}};
            int i, j, k;
            if ((safe_rshift_func_uint16_t_u_u((((l_791 , (0x9000739EL != ((void*)0 == l_782))) == ((safe_div_func_int8_t_s_s((*l_765), 0x7CL)) & (((safe_div_func_uint8_t_u_u(((*l_783) |= ((&g_509 == l_598) >= g_139[3].f2)), g_14[5][2])) == g_159.f2) < 1L))) & 0x8CB3L), g_14[0][1])))
            { 
                uint32_t ***l_803 = &g_801;
                int32_t l_809 = 0x642CB74BL;
                int64_t l_824[7] = {0x3BF811263D65DE03LL,(-4L),0x3BF811263D65DE03LL,0x3BF811263D65DE03LL,(-4L),0x3BF811263D65DE03LL,0x3BF811263D65DE03LL};
                uint16_t *l_825 = &g_33[0];
                uint16_t l_830 = 0UL;
                int16_t *l_864 = &g_159.f0;
                uint32_t l_871[3][5] = {{0xAA4B7AB6L,18446744073709551614UL,18446744073709551615UL,18446744073709551615UL,18446744073709551614UL},{0x6D11BD13L,0x8B180334L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x8B180334L,0x6D11BD13L,0x8B180334L,18446744073709551615UL,18446744073709551615UL}};
                int32_t *l_872 = &g_873;
                int i, j;
                if (((safe_unary_minus_func_uint8_t_u(g_159.f2)) || (safe_div_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((((((*l_687) = ((((*l_803) = g_801) == &g_802) ^ (safe_unary_minus_func_uint32_t_u(((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_809, ((((*l_825) = ((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(((((*l_598) & ((((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((((***l_669) ^= (safe_add_func_uint16_t_u_u(l_809, (safe_mul_func_uint16_t_u_u(g_188, 0x2538L))))) || 0x1A84DFFEL) ^ g_58) >= 1L), 0xC6L)), (*l_598))) , 0x5BL) | 0xB2L) >= 18446744073709551615UL)) <= 4L) & g_110[0][2][0]), g_48)) | (*g_802)), l_824[0])) ^ 0xC4A5C7FBBBF4B3D9LL)) , (void*)0) != (void*)0))), g_159.f0)) , (*g_802)))))) & g_188) , (**g_801)) < l_824[0]), l_809)) , 18446744073709551614UL) && g_159.f1), 0xB5L))))
                { 
                    int64_t *l_828[4][2][6] = {{{&g_139[3].f0.f2,&g_50,&l_824[0],&g_50,&g_139[3].f0.f2,&g_14[2][1]},{&g_50,&g_139[3].f0.f2,&g_14[2][1],&g_14[2][1],&g_139[3].f0.f2,&g_50}},{{&g_14[0][1],&g_50,&g_14[1][0],&g_139[3].f0.f2,&g_14[1][0],&g_50},{&g_14[1][0],&g_14[0][1],&g_14[2][1],&l_824[0],&l_824[0],&g_14[2][1]}},{{&g_14[1][0],&g_14[1][0],&l_824[0],&g_139[3].f0.f2,&g_50,&g_139[3].f0.f2},{&g_14[0][1],&g_14[1][0],&g_14[0][1],&g_14[2][1],&l_824[0],&l_824[0]}},{{&g_50,&g_14[0][1],&g_14[0][1],&g_50,&g_14[1][0],&g_139[3].f0.f2},{&g_139[3].f0.f2,&g_50,&l_824[0],&g_50,&g_139[3].f0.f2,&g_14[2][1]}}};
                    int32_t l_829 = 1L;
                    int i, j, k;
                    (***l_669) &= ((g_50 = ((*l_598) | (safe_rshift_func_int16_t_s_s(l_824[0], 15)))) , ((g_33[3] , 0x634E8ACAL) , (-10L)));
lbl_847:
                    ++l_830;
                    (*l_765) |= l_791;
                    (*l_765) = ((*g_596) = ((~((((((*l_598) = ((((l_834 , (safe_rshift_func_int8_t_s_u(l_791, 1))) >= (safe_mul_func_int16_t_s_s(g_110[0][2][0], (safe_rshift_func_int16_t_s_u((***l_669), ((((l_841[0] , (+(safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(l_841[0].f2, l_824[5])), l_824[2])))) ^ g_110[0][2][0]) == g_141) | g_16)))))) || (*g_802)) ^ (*l_598))) ^ l_829) <= l_824[3]) && 0x42FEAB3BDF125B64LL) & 0x0FL)) & l_829));
                    if (g_64)
                        goto lbl_847;
                }
                else
                { 
                    int16_t **l_856 = &l_855;
                    int16_t *l_858[7] = {&g_159.f0,&g_159.f0,&g_159.f0,&g_159.f0,&g_159.f0,&g_159.f0,&g_159.f0};
                    int16_t **l_857 = &l_858[0];
                    int64_t l_860 = 0x05213CFD30ECDCD6LL;
                    int8_t *l_862 = &l_715[0][0][0];
                    uint16_t l_863[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_863[i] = 0x0127L;
                    l_863[0] |= (safe_unary_minus_func_int16_t_s((((((((*l_862) |= (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(l_791, 3)) & (((*l_857) = ((g_159.f0 & g_108) , ((*l_856) = l_855))) == g_859)), (l_861 = (0x77L | ((g_781 ^ l_860) >= g_159.f3))))), 0xB3A9L))) && (***l_669)) ^ g_111.f0) , &g_402) == &g_402) < l_860)));
                    if (l_9)
                        goto lbl_883;
                }
                (**l_669) = func_36((((*l_864) = l_841[0].f1) <= (safe_rshift_func_uint8_t_u_u((((*l_872) = (((*g_801) == (void*)0) > (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_733, l_871[2][3])), (*l_598))))) , (((((g_16 >= 65529UL) , l_841[0].f1) == l_874[0][5]) < (*g_802)) && 4294967287UL)), g_139[3].f1))), (**l_669));
                for (g_64 = 8; (g_64 >= 24); ++g_64)
                { 
                    int16_t l_877[7][5] = {{(-1L),0x0214L,(-1L),0x0214L,(-1L)},{0x423EL,0x423EL,0x423EL,0x423EL,0x423EL},{(-1L),0x0214L,(-1L),0x0214L,(-1L)},{0x423EL,0x423EL,0x423EL,0x423EL,0x423EL},{(-1L),0x0214L,(-1L),0x0214L,(-1L)},{0x423EL,0x423EL,0x423EL,0x423EL,0x423EL},{(-1L),0x0214L,(-1L),0x0214L,(-1L)}};
                    int i, j;
                    if (l_877[1][1])
                        break;
                }
            }
            else
            { 
lbl_883:
                for (g_151 = 0; (g_151 != 8); g_151 = safe_add_func_uint64_t_u_u(g_151, 4))
                { 
                    int32_t **l_880 = (void*)0;
                    int32_t **l_881 = &g_596;
                    (*l_881) = ((**l_669) = l_766[2][0][0]);
                    if (l_841[0].f0)
                        continue;
                    (*l_765) |= l_882;
                }
                for (g_159.f3 = 1; (g_159.f3 >= 7); g_159.f3 = safe_add_func_int64_t_s_s(g_159.f3, 5))
                { 
                    l_791 = l_841[0].f0;
                }
                if ((safe_mod_func_uint8_t_u_u(((l_888 , g_889) == &g_890), l_891)))
                { 
                    union U3 l_900[4] = {{0xBCFF2B95L},{0xBCFF2B95L},{0xBCFF2B95L},{0xBCFF2B95L}};
                    int32_t l_904 = 0x64084F83L;
                    int32_t l_905[3];
                    uint16_t l_907 = 0x26E4L;
                    struct S1 *l_921 = &g_139[3].f0;
                    struct S1 *l_922 = &g_923;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_905[i] = (-10L);
                    (*l_598) = (((g_16 != ((l_892 == (((*l_687) = (&g_33[0] == (void*)0)) | (((0x641A88C3L > (++(**g_801))) < (g_110[0][2][0]++)) <= (safe_div_func_int64_t_s_s(((l_900[3] , ((safe_div_func_uint8_t_u_u(((l_900[3].f3 <= (-1L)) < l_841[0].f1), 0x23L)) ^ l_888)) <= (*l_765)), g_13))))) <= 0UL)) , l_841[0].f1) && g_185[4]);
                    if (l_891)
                        goto lbl_910;
                    (**l_669) = &l_791;
lbl_910:
                    l_907++;
                    (*l_765) |= (l_892 | (((g_33[0]--) & (((safe_mod_func_int32_t_s_s((1UL != (safe_mul_func_uint8_t_u_u((g_859 == &l_888), (((*l_783) = (safe_div_func_uint16_t_u_u((((*g_802) = ((safe_lshift_func_int8_t_s_s(((*l_598) || (*l_598)), 4)) & ((((*l_922) = ((*l_921) = (*g_461))) , 0xF1DC8395L) & 0xBDC99F08L))) < l_841[0].f0), 0x9F7BL))) & g_139[3].f2)))), 0x51D2BCE3L)) != l_924[1][1][0]) < g_110[0][2][0])) | g_925));
                }
                else
                { 
                    int8_t *l_929 = &g_159.f3;
                    int64_t *l_959 = &g_159.f2;
                    int64_t *l_960 = &g_139[3].f0.f2;
                    int32_t l_961[2];
                    uint16_t *l_963 = &g_33[0];
                    int32_t l_969 = 0x128A580CL;
                    int16_t *l_977 = &l_957[1];
                    int16_t *l_984 = &l_861;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_961[i] = 0x653D6B9AL;
                    (**l_669) = (void*)0;
                    (*l_765) = ((*l_598) = (l_926 > (safe_add_func_int64_t_s_s((((*l_929) = 5L) && 1L), (safe_div_func_int64_t_s_s(0x10B7B2F8237C971DLL, (safe_rshift_func_uint16_t_u_u((((~4294967292UL) ^ g_14[0][1]) < 0x35L), (*l_765)))))))));
                    l_969 ^= ((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((func_82(((((l_939 , (((*l_963) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((&g_925 == ((~((safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(((((*l_960) ^= ((*l_959) ^= ((((safe_rshift_func_int8_t_s_u((((g_110[0][0][0] < (safe_rshift_func_int16_t_s_s((-3L), 7))) | ((*l_765) | 1L)) , g_22), l_957[1])) >= g_111.f0) < (-7L)) | l_958))) && l_961[0]) <= g_132), 3)) , g_58), l_962[2][4])) != l_961[0])) , &l_888)), 9L)), 10)), 13)), 1))) && g_110[0][2][0])) , l_964) > l_965) , (void*)0), &g_14[0][1], l_966, g_873) , l_967), l_968)), g_141)) & g_111.f3);
                    (*l_598) |= (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*l_963) = ((safe_sub_func_uint16_t_u_u(0x1AC5L, l_976)) >= ((*l_977) = (-3L)))), ((((l_961[1] <= 5L) >= g_185[4]) > (safe_div_func_int16_t_s_s(((*l_984) = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_2, 0xEDL)), g_139[3].f1))), (-2L)))) , (-6L)))), (*l_765)));
                }
                l_987 = g_985;
            }
            (*l_598) = ((*l_765) = (*l_598));
            (**l_669) = (void*)0;
            (**l_669) = (void*)0;
        }
    }
    else
    { 
        int32_t l_990 = 0xAB7E80B5L;
        uint32_t l_998 = 0xFEEBE25AL;
        struct S1 l_1001 = {0x2C1003ACL,-3L,0x6E06D3E206454E32LL};
        int32_t l_1020 = 0xD0CCD29FL;
        union U3 l_1024 = {18446744073709551615UL};
        int16_t l_1049 = 0x935CL;
        const struct S2 l_1050 = {{18446744073709551615UL,0x20EA9E0BL,0L},0x5D5BCAACL,0x90819063L};
        uint32_t l_1080 = 0UL;
        int32_t l_1097 = 0L;
        int32_t l_1098 = 1L;
        const struct S0 l_1120[5][5][5] = {{{{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{-1L,1UL,2L,-1L},{-1L,0x52L,0L,0x60L},{0xCF2FL,0UL,0L,4L},{0L,0xB9L,0xD6FEEE9232B283C2LL,4L}},{{-1L,0x44L,-1L,1L},{-1L,1UL,2L,-1L},{0x5A7FL,1UL,1L,0x43L},{0L,0UL,8L,0xAEL},{0L,0UL,8L,0xAEL}},{{-1L,0x52L,0L,0x60L},{5L,0x37L,0xA618001655B34511LL,0x6DL},{0xCFB6L,254UL,0x28731359F7CF3305LL,0x91L},{5L,0x37L,0xA618001655B34511LL,0x6DL},{-1L,0x52L,0L,0x60L}},{{-1L,0x40L,-1L,-2L},{0x1118L,1UL,0xC44FC8EC99A7A9DELL,0x9FL},{-4L,1UL,0xDCF0DC08E9C214C6LL,0x5AL},{0xD5E7L,255UL,-6L,0x11L},{-9L,0x38L,0xEB38112F4AC97E22LL,0L}},{{0x5F26L,0x60L,1L,0xC7L},{0x7754L,1UL,0x2D2FD129E69E45ABLL,5L},{0xD599L,0x94L,0xB7C8E812291AB593LL,-10L},{-1L,0x44L,-1L,1L},{0xCF2FL,0UL,0L,4L}}},{{{0x5A7FL,1UL,1L,0x43L},{1L,0x43L,0xBCDE8A9900D766ADLL,0xE2L},{0L,255UL,-5L,0x93L},{0x1118L,1UL,0xC44FC8EC99A7A9DELL,0x9FL},{-9L,0x38L,0xEB38112F4AC97E22LL,0L}},{{-1L,0xB2L,0L,0x74L},{-1L,0x44L,-1L,1L},{5L,0x37L,0xA618001655B34511LL,0x6DL},{0x7C4DL,6UL,1L,-6L},{-1L,0x52L,0L,0x60L}},{{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{0x5A7FL,1UL,1L,0x43L},{0xA53CL,0x64L,0x98BD78994139C7EFLL,0x45L},{0xABACL,0x55L,0xF5E3E04FE99E3094LL,6L},{0L,0UL,8L,0xAEL}},{{-10L,0x8CL,0x4779333D05B1E89ELL,0L},{0xD5E7L,255UL,-6L,0x11L},{-1L,0x40L,-1L,-2L},{0xA96AL,0x72L,0xE7F5493F25D735E6LL,0x08L},{-5L,255UL,0L,-1L}},{{-9L,0UL,0L,0xB1L},{-1L,1UL,2L,-1L},{-1L,0x40L,-1L,-2L},{0x7754L,1UL,0x2D2FD129E69E45ABLL,5L},{0xCFB6L,254UL,0x28731359F7CF3305LL,0x91L}}},{{{0xA96AL,0x72L,0xE7F5493F25D735E6LL,0x08L},{0L,255UL,-5L,0x93L},{0xA53CL,0x64L,0x98BD78994139C7EFLL,0x45L},{0xA53CL,0x64L,0x98BD78994139C7EFLL,0x45L},{0L,255UL,-5L,0x93L}},{{4L,247UL,0xB13220992D2164A0LL,0x6BL},{0xA96AL,0x72L,0xE7F5493F25D735E6LL,0x08L},{5L,0x37L,0xA618001655B34511LL,0x6DL},{-1L,0xB2L,0L,0x74L},{-1L,1UL,0L,-8L}},{{1L,0x43L,0xBCDE8A9900D766ADLL,0xE2L},{0x3BDCL,0x1DL,0x24FE76D1D555E12FLL,0xB6L},{0L,255UL,-5L,0x93L},{-1L,0x52L,0L,0x60L},{7L,0x09L,0L,7L}},{{0L,0xB9L,0xD6FEEE9232B283C2LL,4L},{0L,0x3BL,0xB09507636DC5D308LL,-8L},{0xD599L,0x94L,0xB7C8E812291AB593LL,-10L},{0x3BDCL,0x1DL,0x24FE76D1D555E12FLL,0xB6L},{0x7754L,1UL,0x2D2FD129E69E45ABLL,5L}},{{1L,0x43L,0xBCDE8A9900D766ADLL,0xE2L},{0x5F26L,0x60L,1L,0xC7L},{-4L,1UL,0xDCF0DC08E9C214C6LL,0x5AL},{-10L,0x8CL,0x4779333D05B1E89ELL,0L},{-1L,1UL,2L,-1L}}},{{{4L,247UL,0xB13220992D2164A0LL,0x6BL},{0xABACL,0x55L,0xF5E3E04FE99E3094LL,6L},{0xCFB6L,254UL,0x28731359F7CF3305LL,0x91L},{0xEF66L,0xA8L,-1L,0xB0L},{0xDF5AL,0x0DL,-1L,-8L}},{{0xA96AL,0x72L,0xE7F5493F25D735E6LL,0x08L},{-9L,0UL,0L,0xB1L},{0xDF5AL,0x0DL,-1L,-8L},{0xCFB6L,254UL,0x28731359F7CF3305LL,0x91L},{7L,246UL,0x24CC4CDD6110E19ALL,-1L}},{{-9L,0UL,0L,0xB1L},{-4L,1UL,0xDCF0DC08E9C214C6LL,0x5AL},{-1L,0xB2L,0L,0x74L},{0xCFB6L,254UL,0x28731359F7CF3305LL,0x91L},{0x5F26L,0x60L,1L,0xC7L}},{{-10L,0x8CL,0x4779333D05B1E89ELL,0L},{0L,0xB9L,0xD6FEEE9232B283C2LL,4L},{1L,0UL,0x9F874D9C39D637FCLL,0xD3L},{0xEF66L,0xA8L,-1L,0xB0L},{1L,0UL,0x9F874D9C39D637FCLL,0xD3L}},{{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{1L,0x9DL,0x3E69AABDAEEA8930LL,-1L},{-10L,0x8CL,0x4779333D05B1E89ELL,0L},{0L,0x3BL,0xB09507636DC5D308LL,-8L}}},{{{-1L,0xB2L,0L,0x74L},{0xDF5AL,0x0DL,-1L,-8L},{0xABACL,0x55L,0xF5E3E04FE99E3094LL,6L},{0x3BDCL,0x1DL,0x24FE76D1D555E12FLL,0xB6L},{4L,247UL,0xB13220992D2164A0LL,0x6BL}},{{0x5A7FL,1UL,1L,0x43L},{0L,0UL,0L,0xD4L},{-5L,255UL,0L,-1L},{-1L,0x52L,0L,0x60L},{0xD5E7L,255UL,-6L,0x11L}},{{0x5F26L,0x60L,1L,0xC7L},{0xDF5AL,0x0DL,-1L,-8L},{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{-1L,0xB2L,0L,0x74L},{0x3BDCL,0x1DL,0x24FE76D1D555E12FLL,0xB6L}},{{-1L,0x40L,-1L,-2L},{-9L,0x38L,0xEB38112F4AC97E22LL,0L},{0x5A7FL,1UL,1L,0x43L},{0xA53CL,0x64L,0x98BD78994139C7EFLL,0x45L},{0xABACL,0x55L,0xF5E3E04FE99E3094LL,6L}},{{-1L,0x52L,0L,0x60L},{0L,0xB9L,0xD6FEEE9232B283C2LL,4L},{-1L,1UL,2L,-1L},{0x7754L,1UL,0x2D2FD129E69E45ABLL,5L},{-10L,0x8CL,0x4779333D05B1E89ELL,0L}}}};
        int8_t l_1144 = 0x1BL;
        uint16_t l_1150 = 0xEC2CL;
        const int32_t **l_1156 = (void*)0;
        const int32_t *** const l_1155 = &l_1156;
        const int32_t *** const *l_1154[5];
        const uint64_t *l_1169 = &g_496;
        const uint64_t **l_1168 = &l_1169;
        const uint64_t ***l_1167 = &l_1168;
        const uint64_t ****l_1166 = &l_1167;
        const int16_t l_1187 = 0xB36CL;
        int32_t l_1210 = (-1L);
        int64_t l_1211 = 0xA0DF2EDE7FD8A4C8LL;
        uint32_t l_1216 = 0xCD087F95L;
        int32_t l_1226 = (-7L);
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1154[i] = &l_1155;
        if (((safe_mod_func_int64_t_s_s(((***l_669) ^ (l_990 & (0x4B6BAC78AC3C3A94LL & (safe_lshift_func_uint16_t_u_s((((-1L) || (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_159.f1 > ((-1L) < ((((((***l_669) ^ l_997) != (*l_598)) , 0x7E1FL) > l_998) | l_998))), 0xEDC756B6A5F040A8LL)), 7))) , g_733), 2))))), g_139[3].f1)) != 0UL))
        { 
            struct S1 *l_1000[2];
            int32_t l_1009 = 2L;
            int16_t **l_1019 = &g_859;
            uint64_t l_1021 = 1UL;
            struct S0 *l_1029 = &g_159;
            int32_t l_1096[7] = {6L,6L,0L,6L,6L,0L,6L};
            int i;
            for (i = 0; i < 2; i++)
                l_1000[i] = &l_999[5];
            l_1001 = l_999[3];
            (*l_598) ^= (-7L);
            if ((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u(l_1009)) , (func_82((g_1010[1][1][6] = (*l_686)), &l_966, ((safe_mul_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(1UL, ((((*l_753) , (l_1009 |= ((**l_686) = (safe_add_func_uint8_t_u_u((0x883B78FDE29B0A3CLL > (safe_add_func_int8_t_s_s((((*l_1019) = &g_925) == (void*)0), l_1020))), g_50))))) < 18446744073709551606UL) ^ (***l_669)))) != g_132) < (*g_802)), g_159.f3)) , l_1009), g_873) , (*g_802))), l_1021)) ^ l_1001.f1) > g_139[3].f0.f0), g_923.f2)) != g_139[3].f0.f0), g_151)))
            { 
                for (g_159.f2 = (-4); (g_159.f2 == 13); g_159.f2 = safe_add_func_uint16_t_u_u(g_159.f2, 1))
                { 
                    return l_1024;
                }
            }
            else
            { 
                struct S0 *l_1028 = &g_159;
                int32_t l_1031[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1031[i] = 1L;
                if ((***l_669))
                { 
                    uint32_t l_1025 = 0UL;
                    --l_1025;
                }
                else
                { 
                    union U3 l_1030 = {0xDCA7075FL};
                    l_1029 = l_1028;
                    return l_1030;
                }
                (*g_596) = l_1031[2];
            }
            for (l_1024.f3 = (-1); (l_1024.f3 <= 16); l_1024.f3++)
            { 
                int32_t **l_1044 = (void*)0;
                const int32_t l_1053 = 1L;
                union U3 l_1060 = {1UL};
                int32_t ****l_1062 = &l_669;
                int32_t *****l_1063 = &l_1062;
                int64_t *l_1076 = &g_14[0][1];
                int32_t l_1095[5][3][7] = {{{(-1L),0x59C7EAB0L,0x7C6AB585L,0x7FF1A24BL,0x2B0EC762L,4L,(-1L)},{(-2L),(-1L),0x7FF1A24BL,1L,(-4L),0xAA3F4DD5L,0x3AFD07EDL},{6L,(-10L),0x2B0EC762L,(-4L),0xC3A4B83BL,0L,1L}},{{0x2B0EC762L,0L,4L,0xAA3F4DD5L,0L,(-2L),1L},{(-1L),0L,(-1L),0x3AFD07EDL,1L,1L,0x3AFD07EDL},{0xDE5E556EL,0x7C6AB585L,0xDE5E556EL,4L,0xA40EF2B6L,4L,(-1L)}},{{0L,0L,0xC2648D79L,(-6L),0xDE5E556EL,0x7FF1A24BL,0L},{(-1L),0L,(-9L),(-1L),(-1L),4L,(-1L)},{0xAA3F4DD5L,0xFD4FA79BL,0xCACB891CL,0L,0L,1L,0x8832D65EL}},{{0xD17D863DL,1L,1L,0L,(-6L),0L,0xAA3F4DD5L},{0x313C38FCL,(-1L),0L,0xD451D3BFL,0x7FF1A24BL,0xD17D863DL,(-10L)},{0x9A5A597AL,(-1L),1L,0L,0L,1L,(-1L)}},{{(-10L),(-9L),0xA40EF2B6L,(-4L),0x3AFD07EDL,0x7FBE6447L,1L},{0x7FBE6447L,0L,0xDE5E556EL,0xFD4FA79BL,6L,(-1L),(-4L)},{0xD17D863DL,(-1L),(-1L),(-4L),0xCACB891CL,0xE5F28F98L,(-6L)}}};
                int i, j, k;
                for (g_159.f3 = 0; (g_159.f3 <= 3); g_159.f3 += 1)
                { 
                    uint32_t *****l_1041 = &g_1039[0][0];
                    int32_t l_1051 = (-8L);
                    uint8_t *l_1052 = &g_159.f1;
                    (**l_669) = &l_1009;
                    (***l_669) = ((*g_596) &= (((safe_add_func_uint16_t_u_u((((*l_1052) ^= ((+((*l_598) = (((g_985 != ((*l_1041) = g_1039[0][0])) | (0xDC5A8C22D545E849LL <= (safe_rshift_func_uint8_t_u_s(((void*)0 != l_1044), 1)))) != (((safe_add_func_int64_t_s_s((l_1001.f1 |= (safe_mul_func_int16_t_s_s(l_1049, g_781))), l_1021)) , l_1050) , l_1051)))) , 0x98L)) > l_1009), l_1001.f2)) >= l_1050.f0.f2) > 1L));
                    if (l_1009)
                        break;
                    if (l_1053)
                        break;
                }
                for (g_923.f2 = (-12); (g_923.f2 <= 8); ++g_923.f2)
                { 
                    if (l_1056)
                        break;
                    l_1001.f1 |= (!((func_76(((safe_add_func_uint8_t_u_u(0x55L, (*l_598))) , func_82((*l_686), &g_14[0][1], (*g_859), g_159.f3)), (*l_753), (*g_402), l_1021) , (void*)0) != (*g_889)));
                    return l_1060;
                }
                (*g_596) &= (((-6L) && g_139[3].f0.f0) , (~((((*l_1063) = l_1062) == ((!(safe_mod_func_uint8_t_u_u((g_925 != ((*g_859) == (safe_div_func_int32_t_s_s(((((*l_1076) = (((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s((l_1020 & (safe_lshift_func_uint16_t_u_s(((((*g_859) | l_1021) < 1UL) | 0xC9CAB883F14B2D9BLL), (*g_859)))), l_1021)))) | 0x34F8FA47L), 0x93D7L)) & g_33[3]) != l_990)) & g_925) & (*l_598)), l_1009)))), g_50))) , (void*)0)) & l_1021)));
                for (l_1049 = (-11); (l_1049 >= 2); l_1049 = safe_add_func_uint32_t_u_u(l_1049, 5))
                { 
                    uint8_t l_1081 = 9UL;
                }
                for (g_733 = 0; (g_733 <= 3); g_733 = safe_add_func_uint32_t_u_u(g_733, 6))
                { 
                    int32_t *l_1084 = &l_632[0][0][1];
                    int32_t *l_1085 = &g_923.f1;
                    int32_t *l_1086 = &l_1009;
                    int32_t *l_1087 = &l_1009;
                    int32_t *l_1088 = &g_781;
                    int32_t *l_1089 = &l_1020;
                    int32_t *l_1090 = (void*)0;
                    int32_t *l_1091 = &g_2;
                    int32_t *l_1092 = &l_1060.f1;
                    int32_t *l_1093 = &l_1020;
                    int32_t *l_1094[2];
                    uint32_t l_1099[4];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1094[i] = &l_1009;
                    for (i = 0; i < 4; i++)
                        l_1099[i] = 0x07B50C19L;
                    if ((*l_598))
                        break;
                    l_1099[3]--;
                    g_1102 = &g_139[3];
                    if (l_1020)
                        continue;
                    g_1103.f0 = l_1104[5];
                }
            }
        }
        else
        { 
            uint16_t l_1108 = 8UL;
            const uint32_t *l_1117[2];
            const uint32_t ** const l_1116 = &l_1117[0];
            int32_t l_1140 = 0xAC246C4FL;
            int32_t l_1143 = (-1L);
            int32_t l_1147 = 0x7A8D386BL;
            int32_t l_1149 = 0x34DD0DDDL;
            uint64_t *** const **l_1165 = &g_1163;
            struct S0 l_1173 = {0L,1UL,0x370A1FDC560E135BLL,1L};
            union U3 l_1190 = {0xD8D4160EL};
            uint32_t l_1197 = 0UL;
            int32_t l_1214 = 0xD782BE55L;
            int i;
            for (i = 0; i < 2; i++)
                l_1117[i] = &g_16;
            for (l_990 = 1; (l_990 <= 27); ++l_990)
            { 
                uint8_t *l_1109 = &g_188;
                int8_t *l_1112 = &g_48;
                int32_t l_1115 = 0xC08BDA9EL;
                (*g_596) |= ((((*l_598) = 0xE32CL) <= (~l_1108)) != (((*l_1112) &= (0x73L || ((*l_1109)--))) & (((g_132 | (***l_669)) & ((((((**l_686) &= ((safe_mod_func_uint8_t_u_u(((l_1115 , (***l_669)) && l_1115), g_141)) , l_998)) , (void*)0) != l_1116) != l_1024.f1) | 4294967292UL)) == g_159.f3)));
            }
            if ((((g_873 & 0x611761452031194ELL) , g_1103.f2) != (&l_686 == (void*)0)))
            { 
                uint32_t l_1119 = 1UL;
                uint32_t *l_1127 = &g_22;
                const int32_t *l_1129[2];
                int32_t l_1141 = 0x2DBCFDABL;
                int16_t l_1142 = 0L;
                int32_t l_1145 = (-1L);
                int32_t l_1146 = (-1L);
                int32_t l_1148 = (-3L);
                const int32_t *** const **l_1157 = &l_1154[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_1129[i] = (void*)0;
                (*g_596) |= 0x80875CFBL;
                if (((+(((l_1119 , (l_1120[2][1][2] , (safe_sub_func_uint16_t_u_u((***l_669), (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((l_1127 != (*l_1116)), 7)) && (l_1108 & ((((*l_753) , 0xD7L) , l_1108) & 1UL))), g_185[4])))))) || 9L) | 0UL)) | (*l_598)))
                { 
                    const int32_t **l_1128 = (void*)0;
                    int32_t *l_1130 = &g_781;
                    int32_t *l_1131 = &l_1097;
                    int32_t *l_1132 = &g_781;
                    int32_t *l_1133 = &l_632[0][1][1];
                    int32_t *l_1134 = &g_733;
                    int32_t *l_1135 = (void*)0;
                    int32_t *l_1136 = &l_1020;
                    int32_t *l_1137 = (void*)0;
                    int32_t *l_1138 = &l_1098;
                    int32_t *l_1139[6] = {&l_1098,&l_1104[5].f1,&l_1104[5].f1,&l_1098,&l_1104[5].f1,&l_1104[5].f1};
                    int i;
                    g_186 = l_1117[0];
                    l_1129[1] = l_1117[1];
                    --l_1150;
                }
                else
                { 
                    uint8_t l_1153 = 255UL;
                    (*g_596) = (l_1153 >= (&g_925 != &l_861));
                }
                (*l_1157) = l_1154[3];
            }
            else
            { 
                union U3 l_1158 = {0x6ADAE59BL};
                return l_1158;
            }
            if (((***l_669) = ((((((void*)0 != &l_1147) && (((safe_mod_func_uint16_t_u_u(g_14[3][2], (l_1140 | (((*l_1165) = g_1163) != l_1166)))) ^ (safe_div_func_uint32_t_u_u((func_76(func_82((func_82((*l_686), &g_14[4][0], (***l_669), g_1103.f1) , (*l_686)), &l_1056, l_1140, g_923.f0), (**l_752), l_1120[0][1][1], l_1108) , 4294967291UL), (**g_801)))) >= 9L)) | (**g_801)) >= l_1172) < g_159.f3)))
            { 
                uint32_t l_1188 = 0x26E24CA7L;
                for (g_132 = 0; (g_132 <= 0); g_132 += 1)
                { 
                    int i;
                    (**l_712) = l_1173;
                    if ((*l_598))
                        continue;
                    g_1189 &= (safe_add_func_uint8_t_u_u(((g_139[3].f0.f1 <= (((g_2 > ((((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((*g_596) <= (safe_sub_func_uint64_t_u_u(0x2CC95287EEF8064ALL, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((~(((*l_686) = (void*)0) != (void*)0)) > 0x1DL), g_139[3].f0.f2)), l_1149))))), g_13)) < (-1L)), g_781)) || 0x50L) > l_1187) == 0L)) != l_1188) ^ 4294967290UL)) , 4UL), 0xB0L));
                    return l_1190;
                }
            }
            else
            { 
                uint8_t *l_1193 = &l_1173.f1;
                int32_t l_1196 = 6L;
                int8_t *l_1202 = &l_715[0][1][0];
                int8_t *l_1203 = &g_48;
                int64_t *l_1204 = (void*)0;
                int64_t *l_1205 = &l_1104[5].f2;
                uint32_t *l_1209[7][5] = {{&g_22,&g_16,(void*)0,&g_132,(void*)0},{&g_16,&g_16,(void*)0,&g_16,&g_16},{(void*)0,&g_132,(void*)0,&g_16,&g_22},{&g_16,(void*)0,(void*)0,&g_16,(void*)0},{&g_22,&g_132,&l_1080,&g_132,&g_22},{(void*)0,&g_16,(void*)0,(void*)0,&g_16},{&g_22,&g_16,(void*)0,&g_132,(void*)0}};
                int32_t l_1213 = 6L;
                const int32_t ***l_1223 = &l_1156;
                const int32_t ****l_1222 = &l_1223;
                const int32_t *****l_1221 = &l_1222;
                int32_t l_1231 = 0x2DF0BB1FL;
                struct S1 l_1243 = {18446744073709551610UL,0L,0x2BCD1101E1E1D179LL};
                int32_t l_1244 = 0L;
                int i, j;
                (*l_598) &= 4L;
                (***l_669) = (((*l_1205) = ((((l_1190.f1 && ((safe_add_func_uint8_t_u_u((--(*l_1193)), (l_1196 , (-4L)))) & (l_1197 | (((((*g_402) , (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((g_873 = 0x5C7A24D0L) , ((*l_1203) = ((*l_1202) ^= g_925))), g_22)) <= g_139[3].f0.f2), g_111.f3))) | l_1190.f1) == 18446744073709551615UL) != l_1190.f1)))) , g_1103.f1) | l_1196) >= 0x916059D532480B48LL)) == 18446744073709551615UL);
                if ((((g_139[3].f1 == (safe_add_func_int64_t_s_s((l_1208 , (((((*g_802) < (l_1216++)) , 4294967291UL) >= ((l_1213 != (((*l_598) = (((safe_mod_func_uint8_t_u_u((((l_1221 != g_1224) > l_1173.f1) > 0x471FC5E2L), l_1140)) , 0xB34D2B89L) , 0xAC9B49DEL)) || l_1173.f3)) ^ g_925)) , g_923.f1)), 0x33B8D0D58EE6138ELL))) , (void*)0) != (void*)0))
                { 
                    int32_t *l_1227 = &l_1140;
                    int32_t *l_1228 = &l_1149;
                    int32_t *l_1229 = (void*)0;
                    int32_t *l_1230[1][5][5] = {{{&g_111.f1,&l_999[3].f1,&g_111.f1,&l_1104[5].f1,&l_1104[5].f1},{&g_111.f1,&l_999[3].f1,&g_111.f1,&l_1104[5].f1,&l_1104[5].f1},{&g_111.f1,&l_999[3].f1,&g_111.f1,&l_1104[5].f1,&l_1104[5].f1},{&g_111.f1,&l_999[3].f1,&g_111.f1,&l_1104[5].f1,&l_1104[5].f1},{&g_111.f1,&l_999[3].f1,&g_111.f1,&l_1104[5].f1,&l_1104[5].f1}}};
                    int i, j, k;
                    --l_1232;
                    (*l_598) = (***l_669);
                    (*l_1227) = ((((*l_1205) = (safe_add_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((((((*g_1102) , ((g_139[3].f0.f1 || g_108) & g_1103.f0.f1)) >= (safe_lshift_func_uint8_t_u_s(0xC3L, g_1241))) || ((l_1108 != g_496) | 0UL)) && (-8L)), 1)) ^ l_1143) < g_1103.f0.f2) <= 0L), 3L))) , (**l_751)) == (void*)0);
                    (*l_713) = (*g_402);
                }
                else
                { 
                    struct S1 *l_1242[7];
                    int32_t *l_1245 = &l_632[0][0][1];
                    int32_t *l_1246 = &l_999[3].f1;
                    int32_t *l_1247[1][7][3];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1242[i] = &l_999[3];
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1247[i][j][k] = &l_1226;
                        }
                    }
                    g_923 = (l_1243 = (*g_461));
                    l_1248++;
                    (**l_712) = l_1120[2][1][2];
                }
            }
        }
        for (g_1103.f0.f0 = 0; (g_1103.f0.f0 >= 5); ++g_1103.f0.f0)
        { 
            return g_111;
        }
    }
    for (g_509 = 0; (g_509 != 39); ++g_509)
    { 
        uint32_t l_1255 = 1UL;
        int64_t *l_1264 = &l_1208.f0.f2;
        int64_t *l_1265[4];
        int64_t l_1266[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
        int32_t *l_1268 = &l_1208.f0.f1;
        int16_t l_1296 = 0x6540L;
        int i;
        for (i = 0; i < 4; i++)
            l_1265[i] = &l_1215;
        if (l_1255)
            break;
        if ((safe_mod_func_int8_t_s_s((((g_1103.f0.f2 < (-4L)) >= l_1255) | (((g_733 || ((safe_mul_func_int8_t_s_s(l_1255, (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s(0x21L, 7)) , (g_139[3].f0.f2 = ((*l_1264) = (l_1255 ^ 3UL)))) == l_1255), 0xC6871C07FF7BBF52LL)))) < (-2L))) > l_1266[2]) || (*l_598))), 0xC5L)))
        { 
            for (l_664 = 2; (l_664 >= 0); l_664 -= 1)
            { 
                int32_t *l_1267 = (void*)0;
                int i;
                l_1268 = l_1267;
            }
        }
        else
        { 
            const struct S1 *l_1270 = &l_1104[5];
            const struct S1 **l_1269[7][2][5] = {{{(void*)0,(void*)0,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270}},{{&l_1270,(void*)0,&l_1270,&l_1270,(void*)0},{&l_1270,(void*)0,(void*)0,&l_1270,&l_1270}},{{&l_1270,&l_1270,&l_1270,(void*)0,(void*)0},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270}},{{(void*)0,&l_1270,&l_1270,(void*)0,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,(void*)0,&l_1270,&l_1270,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,(void*)0,&l_1270,&l_1270}}};
            int32_t l_1280 = 0xBE630BF2L;
            int32_t **l_1294 = &g_225[0][0];
            int32_t **l_1295 = &l_598;
            int16_t *l_1297[5];
            uint32_t *l_1298 = &l_1255;
            uint32_t ***l_1299 = &g_801;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1297[i] = &l_1212;
            g_1271 = (g_461 = (void*)0);
            (*l_1293) = ((0x0180D927L && (((((*l_1268) = (((++(**g_801)) >= (safe_mod_func_uint64_t_u_u((((g_1103.f0.f0 = (safe_mul_func_uint8_t_u_u((((*l_1298) = (safe_sub_func_uint64_t_u_u(((g_159.f0 |= (((((*l_598) == l_1280) , (((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(g_33[2], ((safe_sub_func_int64_t_s_s((*l_1268), ((*l_1264) = ((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_111.f3, (safe_mul_func_uint16_t_u_u((((*l_1295) = l_1293) == l_1268), g_1103.f0.f0)))), 0x927A7826L)) >= g_1103.f0.f1) , g_925) < (*l_1293))))) <= l_1296))) ^ (*l_1293)), g_110[0][2][0])) , (*l_1268)) , (*l_1268))) <= (*l_1268)) != (*l_1293))) ^ (*l_1268)), g_159.f2))) || 0UL), 0x98L))) , l_1299) != (void*)0), 18446744073709551615UL))) , (*l_598))) , 0x5294BE2E79ABFF19LL) || (*l_1268)) , (*l_598))) & l_1280);
        }
    }
    if ((+((!(!((l_1303 == (((g_58 |= (((*l_1313) = (+((*l_598) == (((l_1305[0] != (void*)0) & 0xA8AE4A8D497056E4LL) <= ((l_999[3].f1 ^= ((safe_rshift_func_int8_t_s_s((*l_598), 1)) ^ (((((safe_mod_func_int8_t_s_s((g_159.f3 = ((~((*g_802) = ((!0x4FL) & g_1103.f1))) == 0x3A77L)), g_1241)) , (void*)0) != &g_33[3]) & (*l_1293)) >= g_33[1]))) && (*l_1293)))))) ^ g_159.f1)) & l_1315) != (*l_1293))) && g_50))) <= 0xA8B4C37BL)))
    { 
        struct S1 *l_1318 = &l_999[3];
        uint64_t *l_1320 = &g_496;
        uint16_t *l_1324 = &g_33[1];
        uint16_t *l_1327[2][7] = {{&g_108,&g_108,&g_108,&g_108,&g_108,&g_108,&g_108},{&g_108,&g_108,&g_108,&g_108,&g_108,(void*)0,&g_108}};
        int32_t l_1334 = 0xE68C3279L;
        int32_t *l_1339 = &g_13;
        struct S1 ***l_1341 = &l_1340;
        uint32_t l_1436 = 18446744073709551610UL;
        int64_t l_1437 = 3L;
        uint16_t l_1462 = 65528UL;
        int64_t l_1463 = 0x18EAEE897254C679LL;
        int32_t l_1465 = 3L;
        int32_t l_1470 = (-9L);
        int32_t l_1471 = 0x3590CA4BL;
        union U3 **l_1505 = &l_753;
        uint32_t l_1559 = 0x8EB7815FL;
        int i, j;
        (**l_669) = (l_1339 = &l_1334);
        (*l_1341) = l_1340;
        for (g_159.f2 = 1; (g_159.f2 >= 0); g_159.f2 -= 1)
        { 
            int32_t * const l_1342 = &g_2;
            int32_t **l_1343 = &g_596;
            struct S0 * const l_1344[5] = {&g_159,&g_159,&g_159,&g_159,&g_159};
            int32_t *l_1440 = (void*)0;
            int32_t *l_1441 = &l_1334;
            int32_t *l_1442[2];
            uint16_t l_1443 = 6UL;
            uint16_t l_1460 = 0x9CDAL;
            uint32_t l_1461 = 0xC037DB11L;
            union U3 l_1476 = {0UL};
            uint64_t *l_1498 = (void*)0;
            int8_t l_1524 = 0xE9L;
            int32_t l_1527 = 1L;
            uint8_t l_1560 = 0xE0L;
            uint32_t l_1562 = 18446744073709551609UL;
            struct S0 ***l_1563[4][5] = {{&l_712,&l_712,&l_712,&l_712,&l_712},{&g_711,&g_711,&g_711,&g_711,&g_711},{&l_712,&l_712,&l_712,&l_712,&l_712},{&g_711,&g_711,&g_711,&g_711,&g_711}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1442[i] = &g_1189;
            (*l_1343) = l_1342;
            for (g_1241 = 0; (g_1241 <= 1); g_1241 += 1)
            { 
                for (g_923.f2 = 1; (g_923.f2 >= 0); g_923.f2 -= 1)
                { 
                    struct S0 **l_1345 = &l_713;
                    int i, j;
                    (*l_1339) = (-1L);
                    (*l_1345) = l_1344[2];
                    if (l_874[g_923.f2][(g_1241 + 2)])
                        break;
                    return g_111;
                }
            }
            for (l_1334 = 1; (l_1334 >= 0); l_1334 -= 1)
            { 
                int32_t l_1348 = 0xAC1145A4L;
                uint64_t **l_1352 = &l_1320;
                int32_t l_1357 = (-1L);
                int32_t l_1359 = 1L;
                for (l_1303 = 0; (l_1303 <= 0); l_1303 += 1)
                { 
                    uint32_t *l_1349 = &l_999[3].f0;
                    uint8_t *l_1358 = &g_151;
                    struct S1 l_1362[1][5] = {{{18446744073709551612UL,0L,0x098EEE09DADA695DLL},{18446744073709551612UL,0L,0x098EEE09DADA695DLL},{18446744073709551612UL,0L,0x098EEE09DADA695DLL},{18446744073709551612UL,0L,0x098EEE09DADA695DLL},{18446744073709551612UL,0L,0x098EEE09DADA695DLL}}};
                    int i, j;
                    l_1359 |= (((*l_1358) = (g_159.f1 ^= ((l_874[l_1303][(l_1303 + 1)] , (((((*l_598) <= (*l_1339)) > (l_1348 <= (((((((*l_1349)++) , (((**g_1163) = (*g_1164)) != (l_1352 = &l_687))) || (safe_sub_func_uint8_t_u_u(((*l_1313)--), ((((l_1357 = l_874[l_1303][(l_1303 + 1)]) >= g_1103.f2) > l_874[l_1303][(l_1303 + 1)]) && g_1103.f2)))) & 0x86L) >= 2L) <= 0x0739F236AC1941B3LL))) && (**l_1343)) == (-4L))) ^ 0x93ABL))) && (**l_1343));
                    (*l_1293) = (((0UL ^ (((safe_div_func_int8_t_s_s(((((***l_1341) = l_1362[0][4]) , ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_1362[0][4].f2, 65535UL)), ((*l_1324) ^= (safe_lshift_func_uint8_t_u_u(l_1362[0][4].f1, (((*l_1342) <= 0x69L) && l_1348)))))) ^ 1UL)) <= l_1359), (*l_1342))) ^ 1L) && 1UL)) >= 4UL) , (*l_1339));
                    (*l_598) ^= (**l_1343);
                }
            }
            for (l_861 = 1; (l_861 >= 0); l_861 -= 1)
            { 
                uint64_t ***l_1374 = (void*)0;
                uint64_t ****l_1373 = &l_1374;
                int32_t l_1384 = (-1L);
                int32_t ****l_1394 = &l_669;
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                { 
                    uint64_t l_1377[7];
                    uint32_t l_1385 = 0UL;
                    union U3 * const ***l_1389 = &g_1387;
                    int8_t l_1416 = 0x63L;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1377[i] = 0x6C738BD7EB851BCBLL;
                    if (l_874[g_64][(g_64 + 1)])
                        break;
                    l_1385 ^= (((((safe_mod_func_int64_t_s_s((*l_1293), (((void*)0 == l_1373) | (*l_1339)))) , 0xDFA3L) > (0xF88AD4E277C1A47ELL >= (safe_div_func_uint8_t_u_u((g_159.f1 |= ((l_1377[5]++) | (((*l_1313)++) > (safe_div_func_int32_t_s_s(((l_1384 < (-1L)) != g_925), l_1384))))), g_923.f2)))) >= 0x769426F290D34AD0LL) == l_1384);
                    l_1389 = g_1386;
                    (**l_1343) = ((**l_1343) | ((safe_unary_minus_func_uint16_t_u((+((((g_1395[5] = l_1394) != l_1394) , ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((((**l_686) &= (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((((*l_1293) && g_111.f0) == ((((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s((g_159.f0 != (safe_add_func_uint64_t_u_u((((l_1385 ^ l_1416) ^ g_139[3].f0.f1) , l_1377[3]), (**l_1343)))), 4)) || g_1103.f0.f1) | g_925), 1)) > 0L) != g_1241) || g_188)), l_1416)) & (*l_598)), g_1338)), 0L))) > 0x9D28E306C7E77E0ELL), l_874[g_64][(g_64 + 1)])) < (*l_1293)), 1)), 3)), (*l_1342))) >= g_48)) > 0x9DEDL)))) != g_111.f3));
                }
                for (g_1103.f0.f0 = 0; (g_1103.f0.f0 <= 0); g_1103.f0.f0 += 1)
                { 
                    struct S0 l_1417[7] = {{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL},{0x6C9DL,7UL,0xD57D503E4E1158E3LL,0x8DL}};
                    struct S0 ***l_1430 = &g_711;
                    union U3 l_1439 = {4UL};
                    int i, j, k;
                    l_1418 = l_1417[1];
                    (*g_596) ^= 0x510E1AD7L;
                    (*l_1339) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_715[g_1103.f0.f0][l_861][g_1103.f0.f0], g_139[3].f0.f1)), ((*l_1324) = (~(safe_add_func_int8_t_s_s((0xA8FFL <= (((l_874[g_159.f2][(g_1103.f0.f0 + 2)] = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((((g_58 = (((*l_1430) = g_711) != &l_1344[0])) > (~g_188)) && (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((l_1436 ^ (**l_1343)), 0x44169CDAL)), 0x78L))) != (*l_1342)) & g_185[4]), 4)), (*l_1293)))) , l_1437) ^ 5L)), (**l_1343)))))));
                    if (g_1438)
                        continue;
                    return l_1439;
                }
                if ((*l_1339))
                    break;
            }
            l_1443++;
            for (g_188 = 0; (g_188 <= 1); g_188 += 1)
            { 
                uint16_t **l_1451 = &l_1327[1][2];
                int32_t l_1481 = 1L;
                uint64_t ** const *l_1512 = &g_247;
                uint64_t ** const **l_1511 = &l_1512;
                int16_t *l_1513 = &g_925;
                struct S0 *l_1515 = &g_159;
                int16_t l_1532 = 1L;
                uint32_t l_1537 = 1UL;
            }
        }
    }
    else
    { 
        struct S0 l_1566 = {0xB7F0L,0xE1L,0xE12A3F22F15BB57ELL,0xA0L};
        (*l_598) = (l_1566 , 0L);
    }
    return l_1567[0];
}



static int8_t  func_7(int32_t  p_8)
{ 
    uint32_t l_19 = 0x46E74A6EL;
    for (p_8 = 0; (p_8 != (-2)); p_8--)
    { 
        int32_t *l_12 = &g_13;
        int32_t *l_15 = &g_13;
        g_16++;
    }
    for (p_8 = 2; (p_8 >= 0); p_8 -= 1)
    { 
        return p_8;
    }
    return l_19;
}



static int32_t * func_36(int16_t  p_37, int32_t * p_38)
{ 
    int32_t *l_515[4][2] = {{&g_13,&g_64},{&g_13,&g_13},{&g_64,&g_13},{&g_13,&g_64}};
    int32_t l_516 = 0x19A43D3EL;
    uint64_t *l_519 = &g_110[0][4][0];
    struct S2 l_522 = {{0UL,-1L,8L},0x609E4DDEL,1UL};
    uint64_t *l_525[1];
    int16_t *l_538[7];
    const struct S0 **l_539 = &g_402;
    int64_t *l_540 = &g_14[1][1];
    uint64_t l_541[6][3][2] = {{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}},{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}},{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}},{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}},{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}},{{0x5873ED461D7C6551LL,0x5873ED461D7C6551LL},{0xF0D8EE929217A6EELL,0x5873ED461D7C6551LL},{0x5873ED461D7C6551LL,0xF0D8EE929217A6EELL}}};
    struct S0 *l_542 = &g_159;
    union U3 l_580 = {6UL};
    uint16_t l_594 = 5UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_525[i] = &g_141;
    for (i = 0; i < 7; i++)
        l_538[i] = &g_159.f0;
    l_516 = func_41((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_14[0][1], 4)), 2)));
    if (g_159.f1)
        goto lbl_543;
    l_541[5][2][0] &= ((safe_add_func_int16_t_s_s((func_82(l_519, l_519, ((safe_sub_func_int32_t_s_s((((0L ^ ((l_522 , (--(*l_519))) < (((g_496 = p_37) ^ (((*l_540) = (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_37 , (((safe_mul_func_int16_t_s_s((g_159.f0 ^= (((((((safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((g_111.f3 , l_522.f0) , g_159.f1), 1L)) && 3UL), p_37)), 10)) , p_37) , g_13) != p_37) ^ g_111.f1) && g_33[2]) <= g_139[3].f0.f1)), 1UL)) , l_539) == &g_402)), 0xDB39A850L)), 0x5C50L))) , g_159.f2)) , 4L))) , 0x9CA8L) , (*p_38)), p_37)) && g_509), g_58) , 1L), (-6L))) | g_188);
lbl_543:
    (*l_542) = (**l_539);
    for (l_522.f1 = 0; (l_522.f1 < 15); l_522.f1 = safe_add_func_int16_t_s_s(l_522.f1, 1))
    { 
        uint16_t l_558 = 0xA3D8L;
        int32_t l_562[7] = {0x084F9625L,0x084F9625L,0x084F9625L,0x084F9625L,0x084F9625L,0x084F9625L,0x084F9625L};
        int32_t **l_589 = (void*)0;
        int32_t **l_590 = &g_225[2][2];
        int32_t **l_591 = (void*)0;
        int32_t **l_592 = &g_225[2][2];
        int32_t **l_593 = (void*)0;
        int8_t *l_595 = &g_159.f3;
        int i;
        for (g_496 = (-24); (g_496 <= 32); g_496 = safe_add_func_uint16_t_u_u(g_496, 3))
        { 
            struct S1 l_560[6] = {{5UL,4L,0xD5CDC6855E92BDA4LL},{5UL,4L,0xD5CDC6855E92BDA4LL},{5UL,4L,0xD5CDC6855E92BDA4LL},{5UL,4L,0xD5CDC6855E92BDA4LL},{5UL,4L,0xD5CDC6855E92BDA4LL},{5UL,4L,0xD5CDC6855E92BDA4LL}};
            int32_t *l_563 = &l_560[4].f1;
            int32_t **l_564 = &g_225[1][0];
            int i;
            for (g_151 = 0; (g_151 <= 30); g_151++)
            { 
                uint64_t l_559[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_559[i] = 18446744073709551609UL;
                for (l_522.f0.f1 = (-10); (l_522.f0.f1 != (-7)); l_522.f0.f1 = safe_add_func_int32_t_s_s(l_522.f0.f1, 1))
                { 
                    struct S1 *l_561 = &g_139[3].f0;
                    l_559[0] &= ((p_37 , (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((&g_224[2] != &g_224[1]) > 0x2FL) && 0L), 11)), p_37))) , (safe_sub_func_uint64_t_u_u(l_558, 7L)));
                    if ((*p_38))
                        break;
                    (*l_561) = l_560[4];
                }
                l_562[0] |= (l_560[4].f1 = (*p_38));
            }
            (*l_564) = l_563;
        }
        l_562[0] &= (safe_mul_func_uint16_t_u_u(g_159.f0, (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_595) = ((+(safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(p_37, (l_580 , (p_37 || g_50)))), ((safe_mod_func_uint8_t_u_u(p_37, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((*l_519) &= (((p_38 = l_515[2][1]) == l_515[3][1]) && g_33[1])), (-6L))) == l_594), 0xFA97L)), p_37)) && 0xDF5C20D1B0D8EC0BLL))) & 65535UL))), g_50)), g_33[2]))) <= g_132)), 1L)), p_37))));
    }
    (*l_542) = (**g_401);
    return g_596;
}



static int32_t  func_41(int32_t  p_42)
{ 
    int8_t *l_47 = &g_48;
    int32_t *l_49 = (void*)0;
    union U3 l_81 = {0xECB2DECAL};
    struct S0 l_112 = {0x06AAL,0xA7L,1L,0xB1L};
    uint32_t *l_365 = &g_132;
    uint32_t **l_364 = &l_365;
    const int32_t *l_404 = (void*)0;
    uint64_t *l_408 = (void*)0;
    uint64_t **l_407 = &l_408;
    uint16_t l_421[4][3][5] = {{{65526UL,65526UL,65526UL,65526UL,65526UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{65526UL,65526UL,65526UL,65526UL,65526UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL},{65526UL,65526UL,65526UL,65526UL,65526UL},{65535UL,65535UL,65535UL,65535UL,65535UL}},{{65526UL,65526UL,65526UL,65526UL,65526UL},{65535UL,65535UL,65535UL,65535UL,65535UL},{65526UL,65526UL,65526UL,65526UL,65526UL}},{{65535UL,65535UL,65535UL,65535UL,65535UL},{65526UL,65526UL,65526UL,65526UL,65526UL},{65535UL,65535UL,65535UL,65535UL,65535UL}}};
    union U3 *l_453[5][5] = {{&l_81,&g_111,&l_81,&g_111,&l_81},{&l_81,&l_81,&l_81,&g_111,&l_81},{&l_81,(void*)0,(void*)0,&l_81,&l_81},{&g_111,&l_81,&l_81,&l_81,&l_81},{&g_111,&l_81,&l_81,&l_81,&g_111}};
    union U3 **l_452 = &l_453[2][1];
    struct S0 *l_456 = &g_159;
    const struct S1 *l_459 = &g_139[3].f0;
    int32_t l_474 = 1L;
    int32_t l_475 = 0x3EE48320L;
    int32_t l_479[5][4][6] = {{{2L,0x8CD5A551L,0xBAE55C1EL,0x8CD5A551L,2L,0x91A45455L},{0x8CD5A551L,2L,0x91A45455L,0x91A45455L,0x91A45455L,7L},{2L,7L,5L,0x91A45455L,5L,7L},{5L,2L,0xBAE55C1EL,(-7L),(-7L),0xBAE55C1EL}},{{5L,5L,(-7L),0x91A45455L,0x8CD5A551L,0x91A45455L},{2L,5L,2L,0xBAE55C1EL,(-7L),(-7L)},{7L,2L,2L,7L,5L,0x91A45455L},{0x91A45455L,7L,(-7L),7L,0x91A45455L,0xBAE55C1EL}},{{7L,0x91A45455L,0xBAE55C1EL,0xBAE55C1EL,0x91A45455L,7L},{2L,7L,5L,0x91A45455L,5L,7L},{5L,2L,0xBAE55C1EL,(-7L),(-7L),0xBAE55C1EL},{5L,5L,(-7L),0x91A45455L,0x8CD5A551L,0x91A45455L}},{{2L,5L,2L,0xBAE55C1EL,(-7L),(-7L)},{7L,2L,2L,7L,5L,0x91A45455L},{0x91A45455L,7L,(-7L),7L,0x91A45455L,0xBAE55C1EL},{7L,0x91A45455L,0xBAE55C1EL,0xBAE55C1EL,0x91A45455L,7L}},{{2L,7L,5L,0x91A45455L,5L,7L},{5L,2L,0xBAE55C1EL,(-7L),(-7L),0xBAE55C1EL},{5L,5L,(-7L),0x91A45455L,0x8CD5A551L,0x91A45455L},{2L,5L,2L,0xBAE55C1EL,(-7L),(-7L)}}};
    int i, j, k;
    if ((((*l_47) ^= g_2) < (g_50 = (&g_13 != l_49))))
    { 
        int64_t l_57 = (-6L);
        int32_t l_89 = (-2L);
        uint64_t * const l_140 = &g_141;
        uint64_t *l_376[5][4][3] = {{{&g_110[0][2][1],&g_110[0][2][0],&g_110[0][2][1]},{(void*)0,(void*)0,&g_141},{&g_110[0][4][0],&g_110[0][2][0],&g_110[0][4][0]},{(void*)0,&g_141,&g_141}},{{&g_110[0][2][1],&g_110[0][2][0],&g_110[0][2][1]},{(void*)0,(void*)0,&g_141},{&g_110[0][4][0],&g_110[0][2][0],&g_110[0][4][0]},{(void*)0,&g_141,&g_141}},{{&g_110[0][2][1],&g_110[0][2][0],&g_110[0][2][1]},{(void*)0,(void*)0,&g_141},{&g_110[0][4][0],&g_110[0][2][0],&g_110[0][4][0]},{(void*)0,&g_141,&g_141}},{{&g_110[0][2][1],&g_110[0][2][0],&g_110[0][2][1]},{(void*)0,(void*)0,&g_141},{&g_110[0][4][0],&g_110[0][2][0],&g_110[0][4][0]},{(void*)0,&g_141,&g_141}},{{&g_110[0][2][1],&g_110[0][2][0],&g_110[0][2][1]},{(void*)0,(void*)0,&g_141},{&g_110[0][4][0],&g_110[0][2][0],&g_110[0][4][0]},{(void*)0,&g_141,&g_141}}};
        union U3 l_380[5][6][5] = {{{{0x27B29225L},{0x38A6FDFDL},{0x1ABE4F0CL},{0xECF71AB1L},{18446744073709551615UL}},{{1UL},{18446744073709551612UL},{0UL},{0UL},{0UL}},{{18446744073709551615UL},{0x38A6FDFDL},{8UL},{0x38A6FDFDL},{18446744073709551615UL}},{{0UL},{0UL},{0UL},{18446744073709551612UL},{1UL}},{{18446744073709551615UL},{7UL},{6UL},{0x23A2BF0EL},{0xEE6D5270L}},{{18446744073709551612UL},{0x520F47FAL},{0UL},{0x520F47FAL},{18446744073709551612UL}}},{{{0xEE6D5270L},{0x23A2BF0EL},{6UL},{7UL},{0x703B1655L}},{{18446744073709551612UL},{0UL},{1UL},{0x520F47FAL},{0xA94196BDL}},{{0x703B1655L},{0x23A2BF0EL},{0x50EA4E94L},{0x23A2BF0EL},{0x703B1655L}},{{0xA94196BDL},{0x520F47FAL},{1UL},{0UL},{18446744073709551612UL}},{{0x703B1655L},{7UL},{6UL},{0x23A2BF0EL},{0xEE6D5270L}},{{18446744073709551612UL},{0x520F47FAL},{0UL},{0x520F47FAL},{18446744073709551612UL}}},{{{0xEE6D5270L},{0x23A2BF0EL},{6UL},{7UL},{0x703B1655L}},{{18446744073709551612UL},{0UL},{1UL},{0x520F47FAL},{0xA94196BDL}},{{0x703B1655L},{0x23A2BF0EL},{0x50EA4E94L},{0x23A2BF0EL},{0x703B1655L}},{{0xA94196BDL},{0x520F47FAL},{1UL},{0UL},{18446744073709551612UL}},{{0x703B1655L},{7UL},{6UL},{0x23A2BF0EL},{0xEE6D5270L}},{{18446744073709551612UL},{0x520F47FAL},{0UL},{0x520F47FAL},{18446744073709551612UL}}},{{{0xEE6D5270L},{0x23A2BF0EL},{6UL},{7UL},{0x703B1655L}},{{18446744073709551612UL},{0UL},{1UL},{0x520F47FAL},{0xA94196BDL}},{{0x703B1655L},{0x23A2BF0EL},{0x50EA4E94L},{0x23A2BF0EL},{0x703B1655L}},{{0xA94196BDL},{0x520F47FAL},{1UL},{0UL},{18446744073709551612UL}},{{0x703B1655L},{7UL},{6UL},{0x23A2BF0EL},{0xEE6D5270L}},{{18446744073709551612UL},{0x520F47FAL},{0UL},{0x520F47FAL},{18446744073709551612UL}}},{{{0xEE6D5270L},{0x23A2BF0EL},{6UL},{7UL},{0x703B1655L}},{{18446744073709551612UL},{0UL},{1UL},{0x520F47FAL},{0xA94196BDL}},{{0x703B1655L},{0x23A2BF0EL},{0x50EA4E94L},{0x23A2BF0EL},{0x703B1655L}},{{0xA94196BDL},{0x520F47FAL},{1UL},{0UL},{18446744073709551612UL}},{{0x703B1655L},{7UL},{6UL},{0x23A2BF0EL},{0xEE6D5270L}},{{18446744073709551612UL},{0x520F47FAL},{0UL},{0x520F47FAL},{18446744073709551612UL}}}};
        uint8_t l_382[1][4] = {{0x12L,0x12L,0x12L,0x12L}};
        int32_t l_383 = (-1L);
        struct S0 *l_400 = &g_159;
        struct S0 ** const l_399 = &l_400;
        uint64_t **l_406 = &l_376[2][0][1];
        int32_t *l_409 = (void*)0;
        int32_t *l_410 = &l_380[2][2][0].f1;
        int32_t *l_411 = (void*)0;
        int32_t *l_412 = &l_81.f1;
        int32_t *l_413 = &l_81.f1;
        int32_t *l_414 = &l_383;
        int32_t *l_415 = &g_139[3].f0.f1;
        int32_t *l_416 = &g_139[3].f0.f1;
        int32_t *l_417 = &l_380[2][2][0].f1;
        int32_t *l_418 = &g_139[3].f0.f1;
        int32_t *l_419 = &g_139[3].f0.f1;
        int32_t *l_420[3][2][7] = {{{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1},{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1}},{{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1},{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1}},{{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1},{&l_81.f1,(void*)0,&g_64,&g_2,&g_64,(void*)0,&l_81.f1}}};
        int i, j, k;
        for (g_48 = (-8); (g_48 > 6); g_48 = safe_add_func_int8_t_s_s(g_48, 1))
        { 
            uint64_t *l_87 = (void*)0;
            int32_t l_88 = 0x07407285L;
            int8_t *l_320 = &l_112.f3;
            int32_t *l_334 = &g_111.f1;
            struct S0 l_381 = {-10L,0x79L,0x4F4B4AB1370501B5LL,5L};
            const int32_t **l_405 = &g_186;
            for (g_50 = 4; (g_50 >= (-15)); --g_50)
            { 
                if ((safe_div_func_uint64_t_u_u(l_57, (g_58 = (g_14[3][1] = g_33[3])))))
                { 
                    return g_14[0][1];
                }
                else
                { 
                    uint64_t l_59[4] = {0x97A07E09FA00A4EDLL,0x97A07E09FA00A4EDLL,0x97A07E09FA00A4EDLL,0x97A07E09FA00A4EDLL};
                    int i;
                    return l_59[3];
                }
            }
            for (g_22 = 0; (g_22 >= 47); ++g_22)
            { 
                int32_t *l_62 = (void*)0;
                int32_t *l_63 = &g_64;
                int64_t *l_92 = &g_50;
                int16_t *l_403 = &l_112.f0;
                (*l_63) = 1L;
                for (g_50 = 0; (g_50 <= 3); g_50 += 1)
                { 
                    struct S0 *l_345 = &l_112;
                    union U3 l_346 = {0UL};
                    struct S0 **l_347 = (void*)0;
                    struct S0 *l_349 = &l_112;
                    struct S0 **l_348 = &l_349;
                    int16_t *l_350 = (void*)0;
                    int16_t *l_351[1][7][5] = {{{&l_112.f0,&l_112.f0,(void*)0,&l_112.f0,(void*)0},{&l_112.f0,&l_112.f0,(void*)0,&g_159.f0,&l_112.f0},{&g_159.f0,(void*)0,&g_159.f0,&g_159.f0,(void*)0},{(void*)0,(void*)0,&g_159.f0,(void*)0,&g_159.f0},{&l_112.f0,(void*)0,&l_112.f0,(void*)0,&l_112.f0},{&g_159.f0,&g_159.f0,(void*)0,&g_159.f0,&g_159.f0},{&l_112.f0,(void*)0,(void*)0,&l_112.f0,&g_159.f0}}};
                    uint16_t *l_352 = &g_33[g_50];
                    int32_t *l_353[4][3][3] = {{{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0}},{{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0}},{{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0}},{{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0},{&g_13,&g_13,(void*)0}}};
                    int i, j, k;
                }
                (*l_334) = (safe_sub_func_int8_t_s_s(((g_139[3].f0 , (*l_334)) < g_159.f3), (safe_lshift_func_int8_t_s_s(1L, 3))));
                for (l_112.f1 = (-25); (l_112.f1 <= 49); l_112.f1 = safe_add_func_uint16_t_u_u(l_112.f1, 1))
                { 
                    const struct S1 l_360[1][3][1] = {{{{0xA8D5574EL,1L,0x1C18D602D2994937LL}},{{0xA8D5574EL,1L,0x1C18D602D2994937LL}},{{0xA8D5574EL,1L,0x1C18D602D2994937LL}}}};
                    struct S1 *l_361[5][3][5] = {{{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0}},{{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0}},{{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0}},{{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0}},{{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0},{&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0,&g_139[3].f0}}};
                    uint64_t *l_377 = &g_110[0][5][0];
                    int i, j, k;
                    g_139[3].f0 = l_360[0][1][0];
                    l_383 |= ((*l_63) = (safe_rshift_func_int16_t_s_u(((void*)0 == l_364), (safe_lshift_func_int8_t_s_s(((*l_320) = p_42), ((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(p_42, (func_82(l_376[1][1][2], (func_76(func_82(l_377, ((safe_rshift_func_int8_t_s_u(p_42, 0)) , l_377), l_57, l_89), l_380[2][2][0], l_381, g_159.f1) , l_377), g_139[3].f0.f1, g_139[3].f0.f1) , p_42))), 1)), l_382[0][3])) & 0x5716600051D7CDC1LL), 2)) != 0x9702L))))));
                }
                l_62 = ((((~((safe_rshift_func_uint16_t_u_s((((g_185[4] >= (-6L)) & (safe_div_func_int16_t_s_s(((*l_403) = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((p_42 >= ((safe_mod_func_uint64_t_u_u((func_82(l_92, &g_14[5][1], (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_399 == g_401), (-1L))), 255UL)), g_188) , 0x8A9BDF50DFC92BCALL), 0xAEED544C4648E6F5LL)) != g_141)) > 0L), p_42)), l_57))), g_14[3][1]))) <= 5L), 11)) ^ (*l_334))) ^ (*l_334)) >= 0x6984B96DL) , l_49);
            }
            (*l_405) = (l_404 = l_365);
            if ((*l_404))
                break;
            (*l_334) = ((l_406 = (void*)0) != l_407);
        }
        l_383 = p_42;
        l_421[3][0][3]++;
    }
    else
    { 
        int32_t l_443 = 0xF9FE42F1L;
        int16_t *l_444 = &l_112.f0;
        union U3 *l_450 = &l_81;
        union U3 **l_449 = &l_450;
        uint8_t l_455 = 1UL;
        struct S0 l_466[4] = {{0xE34CL,0x74L,0x6B87B797E4BAF06FLL,0xB2L},{0xE34CL,0x74L,0x6B87B797E4BAF06FLL,0xB2L},{0xE34CL,0x74L,0x6B87B797E4BAF06FLL,0xB2L},{0xE34CL,0x74L,0x6B87B797E4BAF06FLL,0xB2L}};
        int32_t l_476 = 0xF0C31D8DL;
        int32_t l_477 = 1L;
        int32_t l_478 = 0x15DCCE05L;
        int32_t l_480 = 1L;
        int32_t l_481 = 9L;
        int32_t l_482 = 0xE6866779L;
        int32_t l_483 = 0L;
        int32_t l_484 = 0x9E73C5FEL;
        int32_t l_485 = 0x0FC15BFFL;
        int32_t l_486 = 0L;
        int32_t l_487[2][7][5] = {{{0xE74D289BL,0x95398D7DL,0xB0B1CC80L,0x84653183L,0xED6D75B7L},{0xB0B1CC80L,0x8009594CL,0x43539FFBL,4L,0x84653183L},{2L,8L,0x89D6E7DEL,0L,(-6L)},{0x43539FFBL,0L,0L,0L,0L},{(-5L),0x84653183L,0x95398D7DL,4L,0xB0B1CC80L},{1L,0xCEE2491CL,1L,0x84653183L,0L},{(-1L),0x43539FFBL,0x0EDCB54EL,0x89D6E7DEL,1L}},{{1L,1L,0L,0x8009594CL,0x2C9AD875L},{(-5L),0xCF608735L,0L,0L,4L},{0x43539FFBL,0xB0B1CC80L,0L,0xB0B1CC80L,0L},{0L,0x7C49C3C8L,0x0EDCB54EL,4L,0xED6D75B7L},{(-1L),0L,0x2C9AD875L,1L,0x43539FFBL},{0L,0xA8C14D8FL,0xCEE2491CL,0x7C49C3C8L,0xED6D75B7L},{0x89D6E7DEL,1L,8L,0xED6D75B7L,0L}}};
        uint8_t l_489 = 6UL;
        int8_t l_507 = 2L;
        uint64_t l_512 = 0xA9BC827E5613BDC9LL;
        int i, j, k;
        if ((((safe_lshift_func_uint16_t_u_u((p_42 & (safe_mul_func_uint16_t_u_u(0xC30CL, ((~0xE31AL) > (safe_mod_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((-6L) > (safe_mul_func_int16_t_s_s(((*l_444) = (((safe_mod_func_int32_t_s_s(p_42, (g_111 , (safe_add_func_int16_t_s_s(p_42, 0xB1FAL))))) & p_42) & l_443)), g_50))), p_42)) == p_42), 3)) , g_2) || g_50), p_42)) , l_443) >= p_42) , 0xAE1EF49DL), 4294967291UL)))))), p_42)) && l_443) > p_42))
        { 
            union U3 ***l_451[3][1];
            const int32_t l_454 = 0xB870A253L;
            struct S0 *l_457 = &g_159;
            int64_t *l_458 = &g_14[0][1];
            int32_t *l_471 = (void*)0;
            int32_t *l_472 = (void*)0;
            int32_t *l_473[1];
            int32_t l_488[1][5] = {{0x7CA4A9BBL,0x7CA4A9BBL,0x7CA4A9BBL,0x7CA4A9BBL,0x7CA4A9BBL}};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_451[i][j] = (void*)0;
            }
            for (i = 0; i < 1; i++)
                l_473[i] = &g_111.f1;
            if ((safe_add_func_int64_t_s_s(((*l_458) = (safe_div_func_int32_t_s_s(((l_452 = l_449) != ((l_454 <= ((g_111 , (p_42 | l_455)) | (l_456 == l_457))) , &l_453[2][1])), l_454))), g_139[3].f0.f2)))
            { 
                const struct S1 **l_460[2];
                uint64_t ***l_463 = &g_247;
                uint64_t ****l_462 = &l_463;
                int i;
                for (i = 0; i < 2; i++)
                    l_460[i] = &l_459;
                g_461 = l_459;
                (*l_462) = (void*)0;
            }
            else
            { 
                union U3 *l_467 = &g_111;
                int32_t l_468 = 0xE84128D8L;
                uint16_t *l_469 = &g_108;
                int32_t *l_470 = &l_443;
                (*l_470) ^= (0x9FL == (((*l_469) = (p_42 , (safe_mod_func_uint64_t_u_u(((l_466[2] , (((((**g_401) , l_467) == (void*)0) >= ((*l_365) = l_468)) | g_108)) || (-1L)), g_48)))) , l_454));
                for (l_112.f2 = 0; (l_112.f2 <= 0); l_112.f2 += 1)
                { 
                    int i;
                    if (p_42)
                        break;
                    l_470 = &l_468;
                }
            }
            ++l_489;
            for (g_111.f1 = 24; (g_111.f1 > 21); g_111.f1 = safe_sub_func_uint64_t_u_u(g_111.f1, 9))
            { 
                struct S0 l_494 = {0xC14AL,7UL,2L,0L};
                for (g_159.f2 = 0; (g_159.f2 <= 0); g_159.f2 += 1)
                { 
                    int i, j;
                    l_477 &= l_488[g_159.f2][(g_159.f2 + 3)];
                }
                for (l_81.f3 = 0; (l_81.f3 <= 0); l_81.f3 += 1)
                { 
                    struct S1 *l_495[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_495[i] = (void*)0;
                    l_474 |= 0x02181028L;
                    l_481 = (l_494 , 0x45F8BEFAL);
                    g_139[3].f0 = (*g_461);
                    g_496 &= l_466[2].f1;
                }
            }
        }
        else
        { 
            union U3 **l_499 = &l_453[1][2];
            int32_t l_501 = 7L;
            int32_t *l_506[6] = {(void*)0,&l_479[1][3][0],&l_479[1][3][0],(void*)0,&l_479[1][3][0],&l_479[1][3][0]};
            int32_t l_508 = 0x7C9A61A5L;
            int i;
            for (l_482 = (-29); (l_482 <= 2); l_482 = safe_add_func_uint16_t_u_u(l_482, 7))
            { 
                uint64_t l_502[3][7] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{8UL,8UL,8UL,8UL,8UL,8UL,8UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
                int i, j;
                for (l_480 = 1; (l_480 >= 0); l_480 -= 1)
                { 
                    int32_t *l_500[3];
                    int32_t **l_505 = &g_225[2][2];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_500[i] = &l_475;
                    l_475 &= ((((void*)0 != &l_365) , (g_108 , l_499)) != (void*)0);
                    l_502[1][0]++;
                    if (l_502[1][0])
                        break;
                    (*l_505) = &l_483;
                }
            }
            ++g_509;
        }
        --l_512;
    }
    return l_421[3][0][3];
}



static int16_t  func_65(uint32_t  p_66, int8_t * p_67, int8_t * p_68)
{ 
    const int64_t *l_323 = &g_139[3].f0.f2;
    int64_t *l_324 = &g_14[5][2];
    struct S2 l_330 = {{0xFC4BC694L,1L,0xB043DCC804D94C7BLL},0xDE6F4626L,0x9E41796EL};
    int32_t *l_331 = (void*)0;
    int32_t *l_332 = &g_111.f1;
    int32_t l_333 = 0L;
    (*l_332) = (safe_mod_func_int64_t_s_s(((*l_324) = (((void*)0 == l_323) != ((void*)0 == &g_48))), (safe_mul_func_uint16_t_u_u((p_66 || ((safe_rshift_func_uint16_t_u_u((+((l_330 , g_33[0]) > l_330.f1)), g_33[0])) ^ g_111.f3)), l_330.f2))));
    return l_333;
}



static uint16_t  func_71(struct S2  p_72, union U3  p_73, uint64_t * const  p_74, int64_t  p_75)
{ 
    int32_t l_160[1][7] = {{0x4D80B7E5L,0x4D80B7E5L,0x4D80B7E5L,0x4D80B7E5L,0x4D80B7E5L,0x4D80B7E5L,0x4D80B7E5L}};
    const int32_t *l_184 = &g_185[4];
    uint64_t *l_200 = (void*)0;
    struct S0 l_201 = {0L,8UL,0L,-1L};
    struct S2 l_214 = {{0x2D828728L,0xCC889B63L,0x07D318FB5AA6BA30LL},18446744073709551615UL,18446744073709551615UL};
    struct S1 *l_230 = &l_214.f0;
    int32_t *l_264 = &g_139[3].f0.f1;
    uint64_t * const *l_319 = &l_200;
    uint64_t * const **l_318 = &l_319;
    uint64_t * const ***l_317 = &l_318;
    int i, j;
lbl_316:
    for (p_73.f1 = (-20); (p_73.f1 < (-17)); ++p_73.f1)
    { 
        uint32_t l_156 = 0x59954026L;
        int32_t l_179[5] = {0x108D450DL,0x108D450DL,0x108D450DL,0x108D450DL,0x108D450DL};
        int32_t *l_193 = (void*)0;
        int32_t *l_194 = &g_64;
        struct S0 *l_226 = (void*)0;
        struct S1 *l_232 = (void*)0;
        struct S1 **l_252 = &l_230;
        uint8_t l_299 = 2UL;
        uint64_t l_309 = 0x40B304A777E33F6FLL;
        int8_t *l_312[2][2][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_312[i][j][k] = &l_201.f3;
            }
        }
        for (g_58 = (-15); (g_58 > 2); ++g_58)
        { 
            uint16_t l_178 = 0x46FEL;
            int32_t *l_187[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (g_111.f3 = (-28); (g_111.f3 == 6); g_111.f3 = safe_add_func_uint32_t_u_u(g_111.f3, 9))
            { 
                int8_t l_163[1];
                int32_t *l_171 = &g_13;
                int i;
                for (i = 0; i < 1; i++)
                    l_163[i] = 0x2DL;
                if (g_139[3].f1)
                { 
                    int32_t *l_148 = &g_139[3].f0.f1;
                    int32_t *l_149 = &g_64;
                    int32_t *l_150[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_150[i] = &g_139[3].f0.f1;
                    g_151++;
                    (*l_149) ^= (p_72.f0.f1 , p_72.f0.f0);
                    (*l_148) = 5L;
                }
                else
                { 
                    int32_t *l_154 = &g_64;
                    int32_t *l_155 = &g_64;
                    uint16_t *l_176 = &g_33[0];
                    uint8_t *l_177 = &g_159.f1;
                    --l_156;
                    (*l_154) ^= ((((void*)0 == &g_50) , g_159) , l_160[0][2]);
                    if (l_160[0][2])
                        continue;
                    p_72.f0.f1 = (((((safe_add_func_int64_t_s_s(l_163[0], (0xD1267A7CL ^ (((*p_74)--) >= (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((safe_mod_func_int16_t_s_s(((void*)0 == l_171), (((safe_add_func_uint16_t_u_u(g_111.f3, (safe_sub_func_int8_t_s_s((((*l_171) > ((((*l_177) ^= (((*l_176) = (p_72.f2 != (*l_171))) | 0xD8C2L)) <= (*l_155)) >= 0x98794C979CE06271LL)) || g_111.f0), 0xD6L)))) , g_33[0]) | p_72.f0.f0))))), 2)))))) >= l_178) && p_73.f3) ^ l_179[3]) ^ (*l_155));
                }
                l_179[3] = (-7L);
                for (p_75 = (-8); (p_75 != 0); ++p_75)
                { 
                    const int32_t *l_183 = (void*)0;
                    const int32_t **l_182[7] = {&l_183,&l_183,&l_183,&l_183,&l_183,&l_183,&l_183};
                    int i;
                    g_186 = (l_184 = &l_160[0][2]);
                }
            }
            if (p_72.f0.f1)
                break;
            g_188++;
        }
        (*l_194) = (safe_lshift_func_uint8_t_u_s(p_73.f1, 7));
        if (((0x68AC4890B747BEB8LL != (p_72.f0.f0 >= ((((*p_74) = (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((func_76(func_82(l_200, l_200, p_72.f0.f0, p_72.f0.f0), g_111, l_201, (*p_74)) , 0x1DCAF3CCL) <= 0L))), (*l_184))), (*l_184)))) <= p_72.f1) < g_50))) > p_72.f2))
        { 
            uint32_t l_204 = 5UL;
            union U3 l_217 = {0x32A19252L};
            int32_t **l_222 = &l_194;
            struct S0 *l_249 = (void*)0;
            struct S0 *l_250[2];
            int i;
            for (i = 0; i < 2; i++)
                l_250[i] = &g_159;
            for (p_72.f1 = (-2); (p_72.f1 < 1); ++p_72.f1)
            { 
                int64_t l_220 = 2L;
                uint16_t *l_221[5] = {&g_33[3],&g_33[3],&g_33[3],&g_33[3],&g_33[3]};
                union U3 *l_227[4];
                int32_t *l_228 = &l_160[0][4];
                struct S0 l_241 = {3L,253UL,-5L,0L};
                int i;
                for (i = 0; i < 4; i++)
                    l_227[i] = &l_217;
                if (l_204)
                { 
                    const union U3 *l_205 = &g_111;
                    const union U3 **l_206 = (void*)0;
                    const union U3 *l_208 = (void*)0;
                    const union U3 **l_207 = &l_208;
                    struct S1 *l_209[6] = {(void*)0,(void*)0,&g_139[3].f0,(void*)0,(void*)0,&g_139[3].f0};
                    int i;
                    (*l_207) = (l_205 = l_205);
                    g_139[3].f0 = g_139[3].f0;
                }
                else
                { 
                    uint8_t *l_219 = &g_188;
                    int32_t ***l_223[1][3][3] = {{{&l_222,&l_222,&l_222},{&l_222,&l_222,&l_222},{&l_222,&l_222,&l_222}}};
                    int i, j, k;
                    g_186 = &g_2;
                    g_224[2] = ((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_111.f0, (((((l_214 , 0xC0FDE11BL) & (((safe_rshift_func_uint16_t_u_s(((l_217 , p_73.f3) != (((safe_unary_minus_func_uint8_t_u((((*l_219) = p_73.f1) | l_220))) , g_33[0]) | g_139[3].f0.f1)), 13)) , &g_108) == l_221[4])) | p_73.f3) == p_73.f0) && (*l_184)))) , 1UL), g_110[0][1][1])) , l_222);
                    l_226 = &l_201;
                    l_227[2] = l_227[3];
                    (*l_222) = l_228;
                }
                if (((p_72.f0 , p_72.f1) || p_72.f2))
                { 
                    (*l_222) = l_228;
                }
                else
                { 
                    int16_t l_229 = 0xBCF2L;
                    struct S1 **l_231 = &l_230;
                    if (p_72.f0.f2)
                        break;
                    if (l_229)
                        break;
                    l_232 = ((*l_231) = l_230);
                    (*l_194) ^= ((g_111.f0 <= (safe_lshift_func_int8_t_s_s(p_73.f3, 7))) != p_72.f0.f1);
                    (*l_222) = &l_160[0][6];
                }
                for (g_64 = 0; (g_64 > 13); g_64++)
                { 
                    int8_t *l_242 = &g_159.f3;
                    const int32_t l_248 = (-1L);
                    (*l_222) = l_228;
                    (*l_228) = (safe_add_func_uint8_t_u_u((*l_228), (safe_mod_func_int8_t_s_s(((*l_242) &= ((g_159.f2 || (l_241 , g_33[0])) > 0x642168D3L)), (g_2 ^ ((((safe_mod_func_int16_t_s_s(((--(*p_74)) <= (((&p_74 != g_247) && (*l_184)) <= (**l_222))), p_72.f0.f0)) <= l_248) <= (*l_228)) != 0x82C05EC3L))))));
                    if ((*l_228))
                        break;
                }
            }
            g_159 = l_201;
        }
        else
        { 
            const uint16_t l_262 = 65535UL;
            int32_t l_296 = 0L;
            int32_t *l_297 = (void*)0;
            int32_t *l_298[2];
            int i;
            for (i = 0; i < 2; i++)
                l_298[i] = &g_64;
            for (g_111.f3 = 0; (g_111.f3 <= 2); g_111.f3 += 1)
            { 
                struct S1 **l_251 = &l_230;
                int32_t * const l_253[6] = {&l_160[0][2],&l_160[0][2],&l_160[0][2],&l_160[0][2],&l_160[0][2],&l_160[0][2]};
                int32_t **l_254 = &g_225[2][1];
                uint32_t *l_293 = &g_132;
                int i;
                l_252 = l_251;
                (*l_254) = l_253[2];
                (**l_254) = p_72.f0.f0;
                (**l_254) = (g_110[0][2][0] <= ((&g_225[0][1] != (void*)0) || ((((*l_194) = ((~g_58) || 0xEBL)) ^ p_73.f0) > (safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(g_33[1], 6)) <= p_72.f2), l_262)) <= g_132), p_72.f0.f0)))));
                for (l_214.f1 = 0; (l_214.f1 <= 3); l_214.f1 += 1)
                { 
                    int32_t *l_263[2];
                    const uint32_t *l_277 = (void*)0;
                    const uint32_t **l_276 = &l_277;
                    int8_t *l_294 = &l_201.f3;
                    int8_t *l_295[5];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_263[i] = (void*)0;
                    for (i = 0; i < 5; i++)
                        l_295[i] = &g_58;
                    (*l_254) = (*l_254);
                    l_264 = l_263[0];
                    l_214.f0.f1 &= ((safe_mul_func_uint8_t_u_u((*l_184), (g_110[0][2][0] < (((p_72.f0.f1 = (safe_sub_func_int8_t_s_s((g_58 = (safe_div_func_int64_t_s_s(((~((*l_294) &= (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_262 , 4UL), (((*l_276) = &l_156) == ((!((safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((g_33[l_214.f1]++), 11)) <= p_72.f0.f2), (safe_mul_func_uint16_t_u_u(((*l_194) , g_139[3].f0.f1), p_72.f0.f1)))) >= 0xC46C0336L), l_262)) < p_72.f0.f1) > p_72.f0.f1), (-1L))), p_73.f0)) || p_75)) , l_293)))), g_139[3].f2)))) > g_139[3].f1), (*l_194)))), l_262))) != 4294967295UL) >= 0xF1L)))) | (-9L));
                    p_72.f0.f1 ^= (**l_254);
                }
            }
            (*l_194) = p_75;
            if (p_73.f0)
                break;
            (**l_252) = (*l_230);
            l_299--;
        }
        (*l_194) |= (((((g_139[3] , &l_230) != (void*)0) , (!(g_159.f0 |= ((((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(0x783F9EC0L, l_309)), p_73.f1)) > ((g_58 = (g_159.f3 ^= (safe_mod_func_uint8_t_u_u(g_110[0][3][1], g_185[4])))) ^ g_141)), g_33[3])) , g_22) && g_185[4]) != g_111.f3)))) == g_159.f1) || 0x69L);
    }
    for (g_58 = 0; (g_58 > (-1)); g_58 = safe_sub_func_int64_t_s_s(g_58, 9))
    { 
        int16_t l_315 = 0x2E37L;
        return l_315;
    }
    if (g_58)
        goto lbl_316;
    (*l_317) = (void*)0;
    return g_139[3].f0.f2;
}



static struct S2  func_76(union U3  p_77, union U3  p_78, struct S0  p_79, uint64_t  p_80)
{ 
    uint64_t **l_116 = (void*)0;
    uint64_t *l_118 = &g_110[0][2][0];
    uint64_t **l_117 = &l_118;
    int64_t *l_123 = &g_14[0][1];
    int32_t l_129[6] = {5L,5L,(-1L),5L,5L,(-1L)};
    uint32_t *l_130 = (void*)0;
    uint32_t *l_131 = &g_132;
    uint16_t l_133 = 0xDD53L;
    uint64_t *l_134 = (void*)0;
    uint64_t *l_135 = (void*)0;
    uint64_t *l_136 = &g_110[0][4][0];
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = &g_64;
    int i;
    (*l_138) ^= (+(0x64B8L || (((p_79.f2 != (((((*l_117) = &g_110[0][2][0]) == &p_80) >= ((*l_136) = (((safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((void*)0 != l_123), (+((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((*l_131) ^= l_129[1]) || l_129[5]), 0x9AL)), p_79.f1)) || g_14[4][2])))) || l_133), p_77.f0)) , l_129[1]) <= 0x5EB154EAL))) | l_129[1])) >= l_129[1]) , 0xD87DL)));
    return g_139[3];
}



static union U3  func_82(uint64_t * p_83, int64_t * p_84, int16_t  p_85, uint8_t  p_86)
{ 
    uint32_t l_97[1][6] = {{0xB9AEE731L,0xB9AEE731L,0UL,0xB9AEE731L,0xB9AEE731L,0UL}};
    struct S1 l_98 = {0x068EE181L,2L,-10L};
    uint32_t *l_99 = &l_97[0][3];
    int8_t *l_104 = &g_58;
    int32_t *l_105[4][7] = {{&g_64,&g_2,&g_64,&g_2,&g_2,&g_64,&g_2},{&g_2,&g_2,&g_13,&g_13,&g_2,&g_2,&g_2},{&g_64,&g_2,&g_2,&g_64,&g_2,&g_64,&g_2},{&g_64,&g_64,&g_2,&g_13,&g_2,&g_64,&g_64}};
    uint16_t *l_106 = (void*)0;
    uint16_t *l_107 = &g_108;
    uint64_t l_109 = 18446744073709551615UL;
    int i, j;
    g_110[0][2][0] = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((*l_107) |= ((4294967291UL < l_97[0][3]) || ((l_98 , (((*l_99) = 0xDEAEDAB1L) , (g_64 = ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((l_98.f1 &= ((*l_99) |= p_86)) , (-1L)), ((((*l_104) = (p_85 < l_98.f2)) ^ g_33[3]) , g_33[2]))), g_48)) , g_33[3])))) & p_86))) && p_85) , 0UL), 14)) > p_86), p_85)) || l_109);
    g_64 ^= g_58;
    return g_111;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_110[i][j][k], "g_110[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_139[i].f0.f0, "g_139[i].f0.f0", print_hash_value);
        transparent_crc(g_139[i].f0.f1, "g_139[i].f0.f1", print_hash_value);
        transparent_crc(g_139[i].f0.f2, "g_139[i].f0.f2", print_hash_value);
        transparent_crc(g_139[i].f1, "g_139[i].f1", print_hash_value);
        transparent_crc(g_139[i].f2, "g_139[i].f2", print_hash_value);

    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);

    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_923.f0, "g_923.f0", print_hash_value);
    transparent_crc(g_923.f1, "g_923.f1", print_hash_value);
    transparent_crc(g_923.f2, "g_923.f2", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_1103.f0.f0, "g_1103.f0.f0", print_hash_value);
    transparent_crc(g_1103.f0.f1, "g_1103.f0.f1", print_hash_value);
    transparent_crc(g_1103.f0.f2, "g_1103.f0.f2", print_hash_value);
    transparent_crc(g_1103.f1, "g_1103.f1", print_hash_value);
    transparent_crc(g_1103.f2, "g_1103.f2", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1241, "g_1241", print_hash_value);
    transparent_crc(g_1338, "g_1338", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
