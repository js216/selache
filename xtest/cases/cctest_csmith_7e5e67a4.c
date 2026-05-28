// SPDX-License-Identifier: MIT
// cctest_csmith_7e5e67a4.c --- cctest case csmith_7e5e67a4 (csmith seed 2120116132)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4d26afc4 */
/* @exp_ticks 0x4345 */

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

// Options:   -s 2120116132 -o /tmp/csmith_gen_vbljba7l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint64_t  f3;
   uint32_t  f4;
};

union U3 {
   uint32_t  f0;
   uint16_t  f1;
   const int8_t  f2;
};

union U4 {
   uint8_t  f0;
   uint64_t  f1;
};


static uint8_t g_7 = 0xA8L;
static union U4 g_14 = {0xB4L};
static int32_t g_28[1][1] = {{0xE67B38EBL}};
static int32_t g_29 = (-1L);
static uint32_t g_51 = 0x9DB3FA3CL;
static int8_t g_59[2] = {0xE6L,0xE6L};
static uint64_t g_80 = 0UL;
static int8_t g_96 = (-4L);
static struct S0 g_99[2][4] = {{{0x2BL,0x690A484C52037B1CLL,0xCF876E49L,0xE341DA9CD7CB0FD4LL,0x32F9EFC8L},{0x1AL,18446744073709551612UL,1L,0UL,4294967287UL},{0x2BL,0x690A484C52037B1CLL,0xCF876E49L,0xE341DA9CD7CB0FD4LL,0x32F9EFC8L},{0x1AL,18446744073709551612UL,1L,0UL,4294967287UL}},{{0x2BL,0x690A484C52037B1CLL,0xCF876E49L,0xE341DA9CD7CB0FD4LL,0x32F9EFC8L},{0x1AL,18446744073709551612UL,1L,0UL,4294967287UL},{0x2BL,0x690A484C52037B1CLL,0xCF876E49L,0xE341DA9CD7CB0FD4LL,0x32F9EFC8L},{0x1AL,18446744073709551612UL,1L,0UL,4294967287UL}}};
static uint32_t g_112 = 18446744073709551615UL;
static union U3 g_114 = {4294967295UL};
static uint64_t g_149[3][3] = {{0UL,8UL,0UL},{0xDFB1779622336EABLL,0xDFB1779622336EABLL,0xDFB1779622336EABLL},{0UL,8UL,0UL}};
static uint32_t g_160 = 0x43EB0363L;
static uint8_t g_201[4] = {0xF3L,0xF3L,0xF3L,0xF3L};
static uint16_t g_210 = 1UL;
static uint8_t g_220 = 0xF2L;



static union U3  func_1(void);
static uint32_t  func_8(union U4  p_9, int16_t  p_10, union U3  p_11, const union U4  p_12, int32_t  p_13);
static union U3  func_16(int32_t  p_17, uint64_t  p_18, const uint32_t  p_19, uint8_t  p_20, uint8_t  p_21);
static int32_t  func_26(int32_t  p_27);




static union U3  func_1(void)
{ 
    int32_t l_15 = 0xAEE5A986L;
    union U3 l_229 = {0xD558BC87L};
    l_15 = (safe_sub_func_int32_t_s_s((~(safe_rshift_func_int8_t_s_s(g_7, 3))), func_8(g_14, l_15, func_16((safe_rshift_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(l_15, 0x7919ADB821342F3DLL)) , g_14.f0) , 65535UL), g_14.f0)), g_7, l_15, g_7, g_7), g_14, l_15)));
    return l_229;
}



static uint32_t  func_8(union U4  p_9, int16_t  p_10, union U3  p_11, const union U4  p_12, int32_t  p_13)
{ 
    uint32_t l_181 = 0xE08F3222L;
    int32_t l_197 = 0xB0E5196AL;
    int32_t l_199 = 0xD308A82EL;
    int32_t l_228 = 9L;
    for (g_14.f0 = 0; (g_14.f0 <= 1); g_14.f0 += 1)
    { 
        uint8_t l_182 = 1UL;
        int i;
        if (g_59[g_14.f0])
            break;
        if ((safe_rshift_func_uint16_t_u_u(0xA045L, 3)))
        { 
            int i;
            return g_59[g_14.f0];
        }
        else
        { 
            p_13 = l_181;
        }
        l_182 = (g_80 && (l_181 >= g_99[0][0].f2));
    }
    for (g_14.f0 = 0; (g_14.f0 <= 0); g_14.f0 += 1)
    { 
        int16_t l_190 = 0L;
        int32_t l_198 = 0xBAAB2A12L;
        const int8_t l_200 = (-9L);
        const uint16_t l_209 = 0UL;
        int i;
        g_201[3] &= ((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_s((((((g_59[g_14.f0] == ((p_9.f0 = (safe_mul_func_uint8_t_u_u(0x93L, ((safe_rshift_func_uint16_t_u_u(l_190, (safe_sub_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u((l_198 = (safe_sub_func_uint32_t_u_u((l_197 &= (g_160 &= (p_11.f0 = (g_99[0][0].f4 = (((g_29 < 0x6D265171L) & 1L) < g_112))))), p_12.f0))), p_10)) && (-9L)) || l_199) || g_28[0][0]), l_200)))) && g_80)))) <= l_181)) ^ l_190) >= g_114.f2) & p_12.f0) | p_12.f0), g_149[1][1])))) || l_199);
        for (l_199 = 0; (l_199 >= 0); l_199 -= 1)
        { 
            int i, j;
            p_13 = g_28[l_199][l_199];
            if (g_28[g_14.f0][l_199])
                continue;
            if ((p_11.f1 >= (safe_sub_func_int64_t_s_s((g_210 = ((safe_lshift_func_int8_t_s_s((!((safe_rshift_func_uint16_t_u_s(p_13, (l_199 , (l_209 & 0xD524L)))) == p_10)), g_28[l_199][l_199])) ^ p_9.f0)), g_59[g_14.f0]))))
            { 
                return g_59[g_14.f0];
            }
            else
            { 
                int16_t l_211[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_211[i] = (-1L);
                p_13 = (g_28[0][0] = (0UL == 0x300B1250D9DD0687LL));
                if (l_211[0])
                    continue;
                if (g_7)
                    continue;
            }
        }
        for (p_9.f0 = 0; (p_9.f0 <= 26); p_9.f0++)
        { 
            uint32_t l_214 = 5UL;
            int32_t l_223 = 1L;
            if (l_214)
                break;
            if (p_9.f0)
                break;
            l_228 &= ((l_197 = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_199, g_29)), ((l_223 = (safe_unary_minus_func_uint8_t_u((--g_220)))) | (g_99[0][0].f4 &= (g_160++)))))) != ((safe_lshift_func_int16_t_s_u((g_114.f2 > 1UL), l_190)) , g_99[0][0].f3));
        }
    }
    return p_11.f2;
}



static union U3  func_16(int32_t  p_17, uint64_t  p_18, const uint32_t  p_19, uint8_t  p_20, uint8_t  p_21)
{ 
    union U4 l_68 = {0xD7L};
    int32_t l_79 = 7L;
    uint16_t l_159 = 65535UL;
    int32_t l_174 = 6L;
    union U3 l_178 = {0x8BE43F02L};
    if ((func_26(p_20) >= (-1L)))
    { 
        uint32_t l_61[4][4][3] = {{{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL},{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL}},{{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL},{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL}},{{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL},{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL}},{{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL},{0x0323AA36L,0x0323AA36L,0x0323AA36L},{1UL,0x930CB047L,1UL}}};
        int32_t l_103 = 1L;
        int i, j, k;
lbl_64:
        l_61[1][2][1]++;
        for (p_20 = 0; (p_20 <= 1); p_20 += 1)
        { 
            union U4 l_67 = {0x6AL};
            for (g_51 = 0; (g_51 <= 0); g_51 += 1)
            { 
                int i, j;
                if (p_20)
                    goto lbl_64;
                if (g_28[g_51][g_51])
                    break;
                if (g_59[p_20])
                    continue;
            }
            g_29 = (safe_mul_func_int8_t_s_s(((l_68 = l_67) , ((p_17 >= (g_80 ^= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_19, (l_79 = (safe_div_func_uint8_t_u_u(((p_18 = 0x6244A889BFF34F21LL) && p_21), p_17))))), (-1L))) != g_51) | 0x2B275DCBL), p_20)), 0UL)))) || g_59[1])), g_29));
            for (p_18 = 0; (p_18 <= 0); p_18 += 1)
            { 
                int64_t l_91[4];
                int32_t l_100 = (-1L);
                int i, j;
                for (i = 0; i < 4; i++)
                    l_91[i] = 7L;
                l_91[1] &= ((safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(p_19, ((0x91L > ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((0x5CEFL != (safe_lshift_func_int16_t_s_s(l_67.f0, g_28[0][0]))), g_28[0][0])) | 0x08L), l_67.f0)) > p_18)) & 7UL))) <= 4294967290UL) | 7UL), 0xE7L)) > p_19);
                l_100 = ((g_28[0][0] = (-7L)) ^ (safe_div_func_int16_t_s_s((((g_96 = (safe_lshift_func_uint8_t_u_s(g_59[1], 2))) || (safe_mul_func_uint16_t_u_u((g_51 == (g_99[0][0] , p_17)), 0x6049L))) > g_51), l_91[1])));
                l_103 = (safe_lshift_func_int16_t_s_s((-6L), 5));
            }
        }
    }
    else
    { 
        uint64_t l_109 = 18446744073709551613UL;
        int32_t l_127[1];
        uint16_t l_153 = 0xFF5DL;
        int i;
        for (i = 0; i < 1; i++)
            l_127[i] = 0x3E4526E0L;
        if (((((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s((((l_109 &= (safe_add_func_int64_t_s_s(0x0A6BB719D3565F0DLL, l_79))) >= (l_79 != ((p_18 = (((l_68.f0 <= 0x64L) >= 0UL) || p_19)) | p_19))) | p_19), g_51)))) != p_19) < 0xA7E5L) , p_19))
        { 
            uint64_t l_113 = 18446744073709551615UL;
            int16_t l_126 = (-1L);
            int32_t l_139 = 0x92C7F7F8L;
            l_113 = (g_112 ^= (p_18 ^ (0x5786F59E05BB15C0LL != 6L)));
            l_127[0] ^= ((((g_114 , (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((+(safe_rshift_func_int16_t_s_s((g_99[0][0].f3 || (safe_rshift_func_uint16_t_u_s((l_109 < g_99[0][0].f1), 12))), p_20))), l_126)), 0x77A0DE80L)), 1))) <= (-1L)) ^ l_126) , p_19);
            l_139 = ((((~((safe_div_func_int64_t_s_s(0xA0514B5F7258353CLL, (safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((l_127[0] = (safe_div_func_uint32_t_u_u(g_114.f0, p_18))) || ((safe_mod_func_uint8_t_u_u(((g_114 , g_114.f0) > 1L), g_99[0][0].f2)) , p_18)), (-5L))) && l_126), g_99[0][0].f1)))) , l_113)) ^ 1L) & 4UL) || g_14.f0);
        }
        else
        { 
            uint32_t l_150[4] = {0x7A0CA377L,0x7A0CA377L,0x7A0CA377L,0x7A0CA377L};
            int i;
            g_28[0][0] = (((((g_29 , ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((g_114.f1 , (safe_mod_func_uint64_t_u_u((0x0C60L < (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(g_149[1][1])), g_149[0][2]))), 18446744073709551615UL))) | p_17), 0)), l_68.f0)) & g_99[0][0].f4) > l_127[0]) ^ p_19)) > g_112) & l_127[0]) != 0UL) <= 0x28438D7AL);
            l_150[1] = g_80;
        }
        l_153 = (safe_lshift_func_int8_t_s_s((g_96 = l_127[0]), 7));
        l_79 = ((l_68.f0 ^ p_17) < (~((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((g_160 = l_159), 14)), 3)) <= (safe_lshift_func_int8_t_s_u(0x66L, l_153)))));
    }
    l_79 = 6L;
    for (g_114.f1 = 15; (g_114.f1 >= 33); g_114.f1++)
    { 
        uint64_t l_165 = 0xEF0CFF6E6F63E18BLL;
        int32_t l_171 = 7L;
        if (g_80)
            break;
        l_165 &= g_99[0][0].f2;
        if (g_99[0][0].f3)
        { 
            uint64_t l_166 = 18446744073709551615UL;
            int32_t l_167 = (-5L);
            l_167 = l_166;
        }
        else
        { 
            int16_t l_170 = 0L;
            int32_t l_172 = 0x759302C5L;
            int32_t l_173[4];
            int i;
            for (i = 0; i < 4; i++)
                l_173[i] = 0x2E44315DL;
            for (p_20 = 0; (p_20 <= 1); p_20 += 1)
            { 
                l_79 = 0x6C4F008FL;
            }
            for (g_29 = 0; (g_29 != (-12)); g_29 = safe_sub_func_int8_t_s_s(g_29, 2))
            { 
                uint32_t l_175 = 0x43B544FAL;
                ++l_175;
                return g_114;
            }
        }
    }
    return l_178;
}



static int32_t  func_26(int32_t  p_27)
{ 
    const int8_t l_42 = 0x7BL;
    struct S0 l_54 = {0xB5L,18446744073709551615UL,0L,0x4EE8E20E6E86CD98LL,1UL};
    for (p_27 = 0; (p_27 >= 0); p_27 -= 1)
    { 
        uint8_t l_43 = 9UL;
        int32_t l_55 = (-1L);
        const uint32_t l_57 = 0x4680EDEDL;
        int32_t l_58 = 0x4C4AE3B7L;
        for (g_29 = 0; (g_29 <= 0); g_29 += 1)
        { 
            int32_t l_44 = 0x633E7A32L;
            int i, j;
            l_44 ^= (l_43 &= ((safe_mod_func_uint16_t_u_u(g_28[g_29][p_27], ((((safe_sub_func_uint16_t_u_u((65535UL != (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(g_28[0][0], (safe_sub_func_uint8_t_u_u(0xC9L, g_7)))) == 65527UL), g_7)), 0UL))), g_14.f0)) != g_14.f0) | g_29) && l_42))) == g_28[g_29][p_27]));
        }
        for (l_43 = 0; (l_43 <= 0); l_43 += 1)
        { 
            int32_t l_56 = 0x0846D72DL;
            int32_t l_60 = 2L;
            int i, j;
            g_28[p_27][p_27] = ((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((0xA7FAD540778D402ALL <= (((g_28[p_27][l_43] != g_28[p_27][l_43]) <= ((g_51 = p_27) , g_28[p_27][l_43])) == 0x7E7E5FF1FC5BFF90LL)), g_29)), l_42)), 0x12L)) | 18446744073709551615UL);
            for (g_29 = 0; (g_29 <= 0); g_29 += 1)
            { 
                int i, j;
                l_60 |= (0x00651603L < ((g_59[1] |= (l_58 = ((l_56 = (g_28[p_27][l_43] = (((((65535UL > g_28[p_27][g_29]) <= ((l_55 = (((safe_div_func_uint32_t_u_u((l_54 , g_28[g_29][g_29]), p_27)) > g_28[p_27][p_27]) ^ 0xF9L)) == g_14.f0)) == g_28[p_27][g_29]) == g_28[0][0]) | g_28[0][0]))) < l_57))) & 0x47L));
            }
        }
    }
    return g_59[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_28[i][j], "g_28[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_99[i][j].f0, "g_99[i][j].f0", print_hash_value);
            transparent_crc(g_99[i][j].f1, "g_99[i][j].f1", print_hash_value);
            transparent_crc(g_99[i][j].f2, "g_99[i][j].f2", print_hash_value);
            transparent_crc(g_99[i][j].f3, "g_99[i][j].f3", print_hash_value);
            transparent_crc(g_99[i][j].f4, "g_99[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_149[i][j], "g_149[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_201[i], "g_201[i]", print_hash_value);

    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
