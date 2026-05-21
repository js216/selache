// SPDX-License-Identifier: MIT
// cctest_csmith_92be49b5.c --- cctest case csmith_92be49b5 (csmith seed 2461944245)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc582c404 */

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

// Options:   -s 2461944245 -o /tmp/csmith_gen_nb1d11ar/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   const uint16_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint16_t  f4;
   int32_t  f5;
   int32_t  f6;
   uint16_t  f7;
};

union U1 {
   int32_t  f0;
};


static uint32_t g_17 = 18446744073709551615UL;
static union U1 g_45 = {0x4B71808AL};
static int16_t g_85 = 0x1F75L;
static const int32_t *g_92[2] = {&g_45.f0,&g_45.f0};
static uint64_t g_104 = 8UL;
static uint64_t g_105[4][7] = {{8UL,0x40229A812DEA9B0BLL,0x40229A812DEA9B0BLL,8UL,0x40229A812DEA9B0BLL,0x40229A812DEA9B0BLL,8UL},{1UL,0x90C4FCC00BB0491ELL,1UL,1UL,0x90C4FCC00BB0491ELL,1UL,1UL},{8UL,8UL,5UL,8UL,8UL,5UL,8UL},{0x90C4FCC00BB0491ELL,1UL,1UL,0x90C4FCC00BB0491ELL,1UL,1UL,0x90C4FCC00BB0491ELL}};
static uint32_t g_106 = 0xB1DD72C8L;
static int64_t g_107 = (-1L);
static uint64_t g_113[1][1] = {{0xCDC455A66CF4C4C9LL}};
static int16_t *g_124 = (void*)0;
static int16_t g_126 = 0x2630L;
static uint8_t g_128 = 1UL;
static uint8_t *g_127 = &g_128;
static int32_t g_138 = (-4L);
static uint8_t g_149 = 247UL;
static uint8_t g_153 = 0x08L;
static int8_t g_179 = 0x87L;
static int8_t g_181 = 4L;
static uint32_t g_208 = 6UL;
static struct S0 g_220 = {5L,65535UL,0x619D5960L,1UL,65534UL,-6L,0x7C073804L,1UL};
static int8_t g_246 = 7L;
static int32_t g_248 = (-1L);
static int8_t **g_327 = (void*)0;
static uint8_t ** const g_415 = &g_127;
static uint8_t ** const *g_414 = &g_415;
static int32_t ***g_439 = (void*)0;
static int32_t ****g_438 = &g_439;
static uint64_t g_445 = 1UL;
static uint32_t g_462 = 0xFDDF3602L;
static int32_t g_531 = (-1L);
static const uint32_t g_582 = 0x7980E2C9L;
static int32_t *g_611 = &g_220.f5;
static int32_t **g_610 = &g_611;
static int32_t **g_612 = (void*)0;
static const int32_t ***g_643 = (void*)0;
static const int32_t ****g_642 = &g_643;
static uint32_t g_709 = 0x4C370AD7L;
static int64_t g_732 = 3L;
static uint8_t ****g_781 = (void*)0;
static uint8_t *****g_780[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t *g_851 = (void*)0;
static uint32_t **g_850 = &g_851;
static const int32_t g_862 = 0L;
static const int32_t *g_861 = &g_862;
static const int32_t **g_860 = &g_861;
static uint8_t g_915 = 0xE0L;
static int16_t g_973 = 1L;
static uint32_t g_974 = 0x39A81B63L;
static int8_t ** const *g_983 = &g_327;
static int8_t ** const **g_982[6][6][4] = {{{&g_983,&g_983,(void*)0,&g_983},{&g_983,&g_983,&g_983,&g_983},{(void*)0,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{(void*)0,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,(void*)0}},{{&g_983,&g_983,&g_983,(void*)0},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983}},{{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{(void*)0,(void*)0,&g_983,&g_983},{&g_983,(void*)0,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983}},{{&g_983,(void*)0,&g_983,&g_983},{&g_983,(void*)0,&g_983,&g_983},{&g_983,&g_983,(void*)0,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983}},{{&g_983,&g_983,(void*)0,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,(void*)0},{&g_983,&g_983,&g_983,(void*)0},{&g_983,&g_983,(void*)0,&g_983},{&g_983,&g_983,&g_983,&g_983}},{{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,(void*)0,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983,&g_983},{(void*)0,&g_983,&g_983,&g_983}}};
static uint16_t *g_1000 = &g_220.f7;
static uint16_t **g_999 = &g_1000;
static uint64_t g_1046 = 0xE70AA55687726264LL;
static uint8_t g_1074 = 252UL;
static int8_t g_1099 = 0xE8L;
static int32_t g_1110 = 0x04CEBAE7L;
static int32_t * const g_1109 = &g_1110;
static int32_t * const *g_1108[5] = {&g_1109,&g_1109,&g_1109,&g_1109,&g_1109};
static int16_t g_1130 = 0L;
static union U1 g_1134[5] = {{0x4E708290L},{0x4E708290L},{0x4E708290L},{0x4E708290L},{0x4E708290L}};
static int8_t * const *g_1156 = (void*)0;
static int8_t * const **g_1155 = &g_1156;
static int32_t *** const * const g_1166 = (void*)0;
static const int32_t *g_1172[3] = {(void*)0,(void*)0,(void*)0};
static uint16_t g_1191 = 0x5DBBL;
static uint8_t g_1252 = 0xD8L;
static int64_t g_1287[1] = {0x507C380B0B239B65LL};
static uint32_t g_1296[3][2][2] = {{{4294967294UL,0x8822BF01L},{0x8822BF01L,4294967294UL}},{{0x8822BF01L,0x8822BF01L},{4294967294UL,0x8822BF01L}},{{0x8822BF01L,4294967294UL},{0x8822BF01L,0x8822BF01L}}};
static int32_t g_1302 = 0x27E6E004L;
static uint64_t g_1305 = 0x02F83C9E438D182FLL;
static uint64_t *g_1333 = &g_105[2][1];
static uint32_t g_1384 = 4294967286UL;
static int8_t ***g_1397 = (void*)0;
static int8_t ****g_1396 = &g_1397;
static int8_t *****g_1395 = &g_1396;
static const int8_t * const *g_1403 = (void*)0;
static uint32_t g_1443 = 0xEFAADC3EL;
static int32_t g_1510[3] = {0xD20BB51AL,0xD20BB51AL,0xD20BB51AL};
static int16_t g_1534 = 0xE1EAL;
static int8_t *** const *g_1580 = &g_1397;
static int8_t *** const **g_1579 = &g_1580;
static int32_t *g_1640 = (void*)0;
static int32_t **g_1639 = &g_1640;
static union U1 *g_1767 = &g_45;
static union U1 **g_1766 = &g_1767;
static int32_t g_1809 = 0L;
static int16_t g_1820 = 0x0B30L;
static uint8_t g_1837 = 0UL;
static int32_t ***g_1892 = &g_1639;
static int32_t ****g_1891[5][6][3] = {{{&g_1892,&g_1892,(void*)0},{&g_1892,&g_1892,&g_1892},{(void*)0,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{(void*)0,&g_1892,(void*)0},{&g_1892,&g_1892,(void*)0}},{{(void*)0,(void*)0,&g_1892},{&g_1892,(void*)0,&g_1892},{(void*)0,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{(void*)0,(void*)0,&g_1892},{&g_1892,(void*)0,&g_1892}},{{&g_1892,&g_1892,&g_1892},{&g_1892,(void*)0,&g_1892},{&g_1892,(void*)0,(void*)0},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892}},{{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{(void*)0,(void*)0,&g_1892},{&g_1892,&g_1892,&g_1892}},{{&g_1892,(void*)0,(void*)0},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892},{&g_1892,&g_1892,&g_1892}}};
static int64_t *g_1917[6] = {&g_732,&g_732,&g_732,&g_732,&g_732,&g_732};
static int64_t **g_1916 = &g_1917[0];
static int64_t ***g_1915 = &g_1916;
static uint32_t g_1955 = 0xD4ACCB1DL;
static int64_t g_1997 = 0L;
static union U1 ***g_2077[4] = {&g_1766,&g_1766,&g_1766,&g_1766};
static union U1 ****g_2076[2] = {&g_2077[3],&g_2077[3]};
static int32_t g_2322 = 0x7B310C71L;



static int64_t  func_1(void);
static uint32_t  func_10(uint32_t  p_11, uint16_t  p_12, int8_t  p_13, uint8_t  p_14);
static struct S0  func_18(int64_t  p_19, int32_t  p_20);
static uint32_t  func_29(int16_t  p_30, union U1  p_31);
static int16_t  func_32(union U1  p_33, uint64_t  p_34);
static struct S0  func_40(int32_t  p_41, union U1  p_42, uint64_t  p_43, const uint8_t  p_44);
static uint32_t  func_50(int32_t  p_51, const uint32_t  p_52, uint32_t  p_53);
static const uint32_t  func_54(uint32_t  p_55, union U1  p_56, uint64_t  p_57, int8_t  p_58, uint32_t  p_59);




static int64_t  func_1(void)
{ 
    uint32_t l_21[2][4] = {{0x00D0E75DL,0x00D0E75DL,0x00D0E75DL,0x00D0E75DL},{0x00D0E75DL,0x00D0E75DL,0x00D0E75DL,0x00D0E75DL}};
    union U1 l_35 = {-2L};
    uint32_t *l_1442 = &g_1443;
    int32_t *l_2321 = &g_2322;
    int i, j;
    (*l_2321) &= ((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(func_10(((((safe_rshift_func_uint16_t_u_u(g_17, 10)) , func_18(l_21[1][0], (((safe_rshift_func_uint16_t_u_s((0x8E503485L >= ((*l_1442) ^= (safe_mul_func_uint8_t_u_u(g_17, (safe_lshift_func_int8_t_s_u((~func_29(func_32(l_35, ((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((((4L ^ (((func_40(l_21[0][1], g_45, g_45.f0, l_21[1][0]) , l_21[1][0]) == l_21[0][0]) < l_35.f0)) || l_21[1][3]) ^ g_1099), g_582)), 18446744073709551608UL)) , 0x86A2EB65D63105EALL)), g_1134[1])), 6)))))), 3)) < 0x5BL) , (-1L)))) , (**g_999)) < 0x813BL), l_21[0][1], l_21[1][0], l_21[1][0]), 4294967295UL)) , l_21[1][3]), l_21[1][0])), l_35.f0)), 4294967294UL)) == (-1L));
    (*l_2321) ^= (-1L);
    return (*l_2321);
}



static uint32_t  func_10(uint32_t  p_11, uint16_t  p_12, int8_t  p_13, uint8_t  p_14)
{ 
    uint64_t l_2320 = 18446744073709551610UL;
    return l_2320;
}



static struct S0  func_18(int64_t  p_19, int32_t  p_20)
{ 
    uint32_t l_1472 = 18446744073709551615UL;
    int32_t l_1497 = (-3L);
    int32_t l_1501 = 0x20D43141L;
    int32_t l_1506 = (-5L);
    int32_t l_1509 = 0x6EB9373FL;
    int32_t l_1513 = 1L;
    int32_t l_1515 = 1L;
    int32_t l_1519 = 0x6DC60629L;
    struct S0 l_1523 = {2L,0xA5FBL,1L,0UL,0x0C1EL,0xE550D7D2L,0x3559DF26L,0x964FL};
    uint8_t *l_1530[5] = {&g_915,&g_915,&g_915,&g_915,&g_915};
    const int32_t **l_1533 = &g_92[0];
    union U1 l_1549[1][4][7] = {{{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}}}};
    const struct S0 * const l_1556 = &g_220;
    const struct S0 * const *l_1555 = &l_1556;
    int8_t *** const **l_1584 = &g_1580;
    int32_t l_1613[6][7][4] = {{{0L,1L,0xE3A6490CL,0x29616FFCL},{(-1L),1L,1L,(-1L)},{1L,(-1L),0L,0xABF9DBBBL},{1L,0L,1L,0xE3A6490CL},{(-1L),0xABF9DBBBL,0xE3A6490CL,0xE3A6490CL},{0L,0L,0x29616FFCL,0xABF9DBBBL},{0xABF9DBBBL,(-1L),0x29616FFCL,(-1L)}},{{0L,1L,0xE3A6490CL,0x29616FFCL},{(-1L),1L,1L,(-1L)},{1L,(-1L),0L,0xABF9DBBBL},{1L,0L,1L,0xE3A6490CL},{(-1L),0xABF9DBBBL,0xE3A6490CL,0xE3A6490CL},{0L,0L,0x29616FFCL,0xABF9DBBBL},{0xABF9DBBBL,(-1L),0x29616FFCL,(-1L)}},{{0L,1L,0xE3A6490CL,0x29616FFCL},{(-1L),1L,1L,(-1L)},{1L,(-1L),0L,0xABF9DBBBL},{1L,0L,1L,0xE3A6490CL},{(-1L),0xABF9DBBBL,0x29616FFCL,0x29616FFCL},{0xC85E7C81L,0xC85E7C81L,0L,0xE3A6490CL},{0xE3A6490CL,1L,0L,1L}},{{0xC85E7C81L,0xABF9DBBBL,0x29616FFCL,0L},{1L,0xABF9DBBBL,0xABF9DBBBL,1L},{0xABF9DBBBL,1L,0xC85E7C81L,0xE3A6490CL},{0xABF9DBBBL,0xC85E7C81L,0xABF9DBBBL,0x29616FFCL},{1L,0xE3A6490CL,0x29616FFCL,0x29616FFCL},{0xC85E7C81L,0xC85E7C81L,0L,0xE3A6490CL},{0xE3A6490CL,1L,0L,1L}},{{0xC85E7C81L,0xABF9DBBBL,0x29616FFCL,0L},{1L,0xABF9DBBBL,0xABF9DBBBL,1L},{0xABF9DBBBL,1L,0xC85E7C81L,0xE3A6490CL},{0xABF9DBBBL,0xC85E7C81L,0xABF9DBBBL,0x29616FFCL},{1L,0xE3A6490CL,0x29616FFCL,0x29616FFCL},{0xC85E7C81L,0xC85E7C81L,0L,0xE3A6490CL},{0xE3A6490CL,1L,0L,1L}},{{0xC85E7C81L,0xABF9DBBBL,0x29616FFCL,0L},{1L,0xABF9DBBBL,0xABF9DBBBL,1L},{0xABF9DBBBL,1L,0xC85E7C81L,0xE3A6490CL},{0xABF9DBBBL,0xC85E7C81L,0xABF9DBBBL,0x29616FFCL},{1L,0xE3A6490CL,0x29616FFCL,0x29616FFCL},{0xC85E7C81L,0xC85E7C81L,0L,0xE3A6490CL},{0xE3A6490CL,1L,0L,1L}}};
    int64_t l_1644[5][5][4] = {{{0L,(-1L),0x802F7BBB3A1DDC30LL,0x118F9D7D298AC05FLL},{0x118F9D7D298AC05FLL,(-1L),(-1L),0x91DB45F10F3334E9LL},{(-1L),(-6L),(-1L),7L},{0xE8E7E6E86D44A58CLL,(-1L),0xAFB5E27280A23CAELL,0L},{0x6160D29D27ABDE5FLL,0xE8E7E6E86D44A58CLL,7L,(-1L)}},{{0x91DB45F10F3334E9LL,0xF9239652642A06FDLL,7L,0xB6B49A37C490CF4ALL},{0x6160D29D27ABDE5FLL,0xAFB5E27280A23CAELL,0xAFB5E27280A23CAELL,0x6160D29D27ABDE5FLL},{0xE8E7E6E86D44A58CLL,0x91DB45F10F3334E9LL,(-1L),0xDCA54BD187B725F3LL},{(-1L),0xDCA54BD187B725F3LL,(-1L),0xF9239652642A06FDLL},{0x118F9D7D298AC05FLL,0x765F1C40446D21DBLL,0x802F7BBB3A1DDC30LL,0xF9239652642A06FDLL}},{{0L,0xDCA54BD187B725F3LL,0x118F9D7D298AC05FLL,0xDCA54BD187B725F3LL},{(-4L),0x91DB45F10F3334E9LL,(-6L),0x6160D29D27ABDE5FLL},{(-1L),0xAFB5E27280A23CAELL,0L,0xB6B49A37C490CF4ALL},{0x765F1C40446D21DBLL,0xF9239652642A06FDLL,0xB6B49A37C490CF4ALL,(-1L)},{0x765F1C40446D21DBLL,0xE8E7E6E86D44A58CLL,0L,0L}},{{(-1L),(-1L),(-6L),7L},{(-4L),(-6L),0x118F9D7D298AC05FLL,0x91DB45F10F3334E9LL},{0L,(-1L),0x802F7BBB3A1DDC30LL,0x118F9D7D298AC05FLL},{0x118F9D7D298AC05FLL,(-1L),(-1L),0x91DB45F10F3334E9LL},{(-1L),(-6L),(-1L),7L}},{{0xE8E7E6E86D44A58CLL,(-1L),0xAFB5E27280A23CAELL,0L},{0x6160D29D27ABDE5FLL,0xE8E7E6E86D44A58CLL,7L,(-1L)},{0x91DB45F10F3334E9LL,0xF9239652642A06FDLL,7L,0xB6B49A37C490CF4ALL},{0x6160D29D27ABDE5FLL,0xAFB5E27280A23CAELL,0xAFB5E27280A23CAELL,0x6160D29D27ABDE5FLL},{0xE8E7E6E86D44A58CLL,0x6160D29D27ABDE5FLL,0xCF25D71F345F7BA4LL,(-1L)}}};
    int32_t **l_1666 = &g_1640;
    int8_t l_1671 = (-1L);
    int32_t * const l_1715 = &l_1497;
    union U1 **l_1768 = &g_1767;
    int16_t l_1817 = (-1L);
    uint64_t l_1838 = 0x302DD54D89EE507CLL;
    union U1 **l_1860 = &g_1767;
    int32_t ***l_1862 = &l_1666;
    int32_t ****l_1861 = &l_1862;
    int64_t l_1863 = 0x37A16831A6652DF7LL;
    int32_t *l_1864 = &l_1501;
    uint16_t **l_1875 = &g_1000;
    uint8_t **l_1922 = &g_127;
    uint8_t ***l_1921[5][6][5] = {{{(void*)0,&l_1922,(void*)0,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,(void*)0},{&l_1922,&l_1922,(void*)0,&l_1922,(void*)0},{(void*)0,(void*)0,&l_1922,&l_1922,(void*)0}},{{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,(void*)0,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,(void*)0,&l_1922,&l_1922,(void*)0},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,(void*)0,(void*)0}},{{(void*)0,&l_1922,(void*)0,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,(void*)0},{&l_1922,&l_1922,(void*)0,&l_1922,(void*)0},{(void*)0,(void*)0,&l_1922,&l_1922,(void*)0}},{{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,(void*)0,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,(void*)0,&l_1922,&l_1922,(void*)0},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,(void*)0,(void*)0}},{{(void*)0,&l_1922,(void*)0,&l_1922,&l_1922},{(void*)0,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,&l_1922},{&l_1922,&l_1922,&l_1922,&l_1922,(void*)0},{&l_1922,&l_1922,(void*)0,&l_1922,(void*)0},{(void*)0,(void*)0,&l_1922,&l_1922,(void*)0}}};
    uint8_t ****l_1920 = &l_1921[4][3][1];
    uint16_t l_1927 = 0x89B1L;
    int16_t l_1989 = 9L;
    uint8_t l_2025 = 0xD1L;
    int32_t **l_2072[7][7][4] = {{{(void*)0,&g_611,&l_1864,&g_611},{(void*)0,&l_1864,&l_1864,&g_611},{&l_1864,&g_611,&l_1864,&l_1864},{(void*)0,&l_1864,&l_1864,(void*)0},{(void*)0,&g_611,&g_611,&l_1864},{&g_611,&l_1864,&l_1864,&g_611},{(void*)0,&g_611,&g_611,&g_611}},{{(void*)0,&l_1864,(void*)0,&l_1864},{&l_1864,&g_611,&l_1864,(void*)0},{&l_1864,&l_1864,&g_611,&g_611},{&l_1864,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,&g_611,&g_611},{(void*)0,&g_611,&g_611,&l_1864},{&l_1864,&g_611,&l_1864,(void*)0}},{{&g_611,&g_611,(void*)0,&g_611},{&l_1864,&g_611,(void*)0,(void*)0},{&g_611,&g_611,&g_611,&l_1864},{&l_1864,&g_611,&g_611,&g_611},{&l_1864,&l_1864,(void*)0,&g_611},{(void*)0,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,&g_611,&g_611}},{{&l_1864,(void*)0,&g_611,&g_611},{&g_611,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,(void*)0,&g_611},{&g_611,&g_611,&l_1864,&g_611},{&l_1864,(void*)0,&g_611,&g_611},{(void*)0,&l_1864,&g_611,&g_611},{&l_1864,&g_611,(void*)0,&g_611}},{{&l_1864,&l_1864,&g_611,&g_611},{(void*)0,&g_611,&g_611,&l_1864},{&l_1864,&g_611,&l_1864,(void*)0},{&g_611,&g_611,(void*)0,&g_611},{&l_1864,&g_611,(void*)0,(void*)0},{&g_611,&g_611,&g_611,&l_1864},{&l_1864,&g_611,&g_611,&g_611}},{{&l_1864,&l_1864,(void*)0,&g_611},{(void*)0,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,&g_611,&g_611},{&l_1864,(void*)0,&g_611,&g_611},{&g_611,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,(void*)0,&g_611},{&g_611,&g_611,&l_1864,&g_611}},{{&l_1864,(void*)0,&g_611,&g_611},{(void*)0,&l_1864,&g_611,&g_611},{&l_1864,&g_611,(void*)0,&g_611},{&l_1864,&l_1864,&g_611,&g_611},{(void*)0,&g_611,&g_611,&l_1864},{&l_1864,&g_611,&l_1864,(void*)0},{&g_611,&g_611,(void*)0,&g_611}}};
    int64_t l_2105 = 0x7549EA3C55A76323LL;
    int16_t l_2120 = 4L;
    const union U1 l_2129 = {-6L};
    int8_t l_2131 = 0x99L;
    uint32_t l_2141 = 0x43426494L;
    int64_t l_2223 = (-1L);
    uint64_t **l_2234 = (void*)0;
    int32_t *l_2257[4][1][1] = {{{&g_220.f2}},{{&l_1613[4][0][2]}},{{&g_220.f2}},{{&l_1613[4][0][2]}}};
    int64_t l_2283 = (-2L);
    uint32_t l_2300 = 0xA6613732L;
    uint32_t l_2316 = 0x407ED139L;
    struct S0 l_2319 = {-1L,0UL,0L,0UL,65535UL,7L,0x24DDC94AL,65531UL};
    int i, j, k;
    for (g_1384 = 0; (g_1384 <= 1); g_1384 += 1)
    { 
        uint64_t l_1456 = 18446744073709551609UL;
        uint64_t l_1485 = 1UL;
        int32_t l_1496 = 0x562C7A7CL;
        int32_t l_1498[5][5][7] = {{{0xBEE7F681L,2L,0x6B098AC3L,(-2L),0L,7L,(-3L)},{0x73AE3DD7L,0xF321D1D7L,7L,0x6B098AC3L,0x5E9E0386L,0xB7F2DC54L,0x73AE3DD7L},{0x1D2A29FEL,(-6L),0x971D054AL,0xF414D62BL,0x160F4641L,(-2L),(-2L)},{(-1L),(-9L),0x9235E5BCL,(-2L),0x62972B14L,0L,(-4L)},{0x9235E5BCL,0xB22A2891L,7L,0xE971CF56L,0x2E73C47CL,0x61913EDFL,(-1L)}},{{0x62972B14L,0xB22A2891L,(-7L),(-9L),(-6L),(-6L),0xB7F2DC54L},{0xB22A2891L,0xFFDCA653L,0x6B6B3BA6L,1L,7L,7L,1L},{(-1L),(-9L),(-1L),7L,0L,0xFFDCA653L,0L},{0x2E73C47CL,7L,(-6L),0x6B098AC3L,1L,0x1D2A29FEL,0xB7F2DC54L},{0x6E767E9FL,(-1L),0xFFDCA653L,7L,1L,0xFFDCA653L,0x62972B14L}},{{0x833050E6L,0L,1L,0x971D054AL,7L,7L,0x9BBA1184L},{(-9L),0x2E73C47CL,(-4L),0x9235E5BCL,1L,(-6L),2L},{0x6B098AC3L,9L,0x971D054AL,0x6E767E9FL,9L,0x61913EDFL,(-9L)},{0xE9FA420CL,2L,0x971D054AL,1L,2L,0x9BBA1184L,9L},{0xE785B5CBL,1L,(-4L),0x6B098AC3L,(-6L),0x73155E91L,(-6L)}},{{2L,1L,1L,2L,(-8L),1L,0x73AE3DD7L},{7L,0L,0xFFDCA653L,0L,0xB7F2DC54L,0xBD871CE8L,0x971D054AL},{0xE785B5CBL,0x2E73C47CL,(-6L),(-9L),0L,0xEB0576ACL,0x73AE3DD7L},{0L,0xE9FA420CL,(-1L),0xB22A2891L,0xBD871CE8L,0L,(-6L)},{0x61913EDFL,0x62972B14L,0x6B6B3BA6L,1L,0xE785B5CBL,0xBD871CE8L,9L}},{{(-9L),7L,(-7L),(-6L),0x9235E5BCL,0x5E9E0386L,(-9L)},{0xB7F2DC54L,0L,7L,(-6L),0xE9FA420CL,9L,2L},{0x971D054AL,(-1L),(-8L),1L,0xB7F2DC54L,0x9BBA1184L,0x9BBA1184L},{0x2E73C47CL,0xB22A2891L,1L,0xB22A2891L,0x2E73C47CL,0xF414D62BL,0x62972B14L},{0x62972B14L,0xE971CF56L,0xBD871CE8L,(-9L),0x6B6B3BA6L,0x2078A5E0L,0xB7F2DC54L}}};
        int16_t *l_1541 = &g_126;
        int16_t *l_1546 = &g_1534;
        int32_t *l_1547 = &l_1509;
        int8_t l_1552[1][2][1];
        int64_t l_1567 = 0xA7FEC3E798353079LL;
        uint8_t l_1568[5][2][1] = {{{0xF0L},{3UL}},{{0xF0L},{3UL}},{{0xF0L},{3UL}},{{0xF0L},{3UL}},{{0xF0L},{3UL}}};
        uint16_t l_1617 = 65530UL;
        const int16_t l_1641 = 0x8749L;
        struct S0 l_1642 = {-1L,2UL,0xA617E3A7L,6UL,1UL,0xE1B084CCL,1L,2UL};
        int8_t ***l_1737 = (void*)0;
        uint32_t l_1738 = 1UL;
        int8_t ** const ***l_1793 = &g_982[0][2][3];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1552[i][j][k] = (-6L);
            }
        }
        for (g_17 = 0; g_17 < 4; g_17 += 1)
        {
            for (g_128 = 0; g_128 < 7; g_128 += 1)
            {
                g_105[g_17][g_128] = 0x21DAA6D2C5EE2255LL;
            }
        }
        for (g_104 = 0; (g_104 <= 1); g_104 += 1)
        { 
            uint8_t l_1453[5];
            int32_t l_1490[2][1];
            int32_t l_1495 = 0xDD5D0FF8L;
            int32_t l_1499 = (-2L);
            int32_t l_1500 = (-8L);
            int32_t l_1502 = 0xA1BC835FL;
            int32_t l_1504 = (-9L);
            int32_t l_1505 = (-5L);
            int32_t l_1507 = 0L;
            int32_t l_1508 = 0x8701797FL;
            int32_t l_1511 = 4L;
            int32_t l_1512 = 0x054D2968L;
            int32_t l_1516 = 0x420F7F12L;
            int32_t l_1517 = 1L;
            int32_t l_1518 = 1L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1453[i] = 9UL;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1490[i][j] = 0x67A3C642L;
            }
            for (g_915 = 0; (g_915 <= 3); g_915 += 1)
            { 
                struct S0 l_1444 = {0x0D28L,1UL,0xF46D0044L,0x788C5635L,65535UL,0x8EE50181L,0x522BB69BL,0x2517L};
                int32_t *l_1445 = &l_1444.f2;
                int32_t *l_1446 = &g_531;
                int32_t *l_1447 = &l_1444.f5;
                int32_t *l_1448 = &g_531;
                int32_t *l_1449 = &g_531;
                int32_t *l_1450 = &g_220.f2;
                int32_t *l_1451 = &g_1302;
                int32_t *l_1452[1][6][5] = {{{&g_531,&g_1134[1].f0,&g_531,&l_1444.f5,&g_1134[1].f0},{&g_1134[1].f0,&g_220.f2,&g_1134[1].f0,&g_220.f2,&g_1134[1].f0},{&g_531,&g_220.f2,&g_1134[1].f0,&g_1134[1].f0,&g_1134[1].f0},{&g_1134[1].f0,&g_1134[1].f0,&g_1134[1].f0,&g_1134[1].f0,&g_45.f0},{&g_220.f2,&g_531,&g_531,&g_220.f2,&g_1134[1].f0},{&g_220.f2,&g_1134[1].f0,&l_1444.f5,&l_1444.f5,&g_1134[1].f0}}};
                union U1 *l_1477 = &g_1134[1];
                int i, j, k;
                for (g_973 = 3; (g_973 >= 0); g_973 -= 1)
                { 
                    return l_1444;
                }
                l_1453[0]--;
                if (((*g_438) == (void*)0))
                { 
                    l_1456--;
                    (*l_1450) |= 0x51AFC0FFL;
                }
                else
                { 
                    uint64_t l_1484[1][4] = {{0xECBC8D92675EB5CCLL,0xECBC8D92675EB5CCLL,0xECBC8D92675EB5CCLL,0xECBC8D92675EB5CCLL}};
                    uint16_t *l_1491 = &l_1444.f4;
                    int32_t l_1492 = 0x66F59B2FL;
                    int64_t *l_1493 = &g_732;
                    uint32_t *l_1494 = &g_1296[0][1][1];
                    int32_t l_1503[2];
                    int32_t l_1514 = 0xC87DD8CEL;
                    uint16_t l_1520 = 65526UL;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1503[i] = (-1L);
                    (*l_1451) = (safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s(((safe_div_func_uint64_t_u_u(((((*l_1494) = (((*l_1493) = ((safe_lshift_func_uint8_t_u_s((l_1492 ^= (safe_rshift_func_int16_t_s_u((0L ^ ((*l_1491) = ((((safe_add_func_int32_t_s_s(((*l_1446) = l_1472), (((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((p_19 && ((l_1477 != (((((**g_999) = ((((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_1484[0][3], l_1485)), (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(0x46L, 6)) | 0x4AL), 15)))) == 0L) , l_1472) > (*g_1000))) ^ l_1453[1]) <= (*g_1333)) , (void*)0)) <= l_1453[0])) & p_19), (***g_414))), 0x7A16L)) <= (*g_1333)) , l_1456))) == 0L) && p_19) <= l_1490[1][0]))), 5))), 1)) <= p_20)) || p_19)) ^ l_1495) < 4294967287UL), (*g_1333))) != 1UL), 0xB210ABA2L))));
                    --l_1520;
                    l_1504 |= ((void*)0 != &l_1485);
                    return l_1523;
                }
                l_1498[0][4][5] ^= ((((safe_rshift_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((l_1530[1] == (void*)0), (((*g_1333) ^ ((((l_1523.f7 || (p_20 >= ((0x21542A72050472DBLL | ((void*)0 != l_1533)) == 4294967295UL))) == (-1L)) == (**g_999)) >= 4294967295UL)) & (-1L)))) > p_20), p_19)) | (*l_1448)) , g_1534), p_20)) , l_1496) == 0xC6L) > p_19);
                if ((*l_1448))
                    break;
            }
        }
        if (((*l_1547) |= ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x788B6E52L, (safe_sub_func_int8_t_s_s(p_19, (((**g_999) = (((*l_1541) = (p_19 , 0x8063L)) <= (safe_lshift_func_int16_t_s_u(((*l_1546) &= (safe_mul_func_int8_t_s_s(p_19, p_19))), (p_19 == 0L))))) >= p_20))))), p_19)) < l_1498[2][2][0])))
        { 
            int8_t l_1548 = 0L;
            struct S0 *l_1554 = &g_220;
            struct S0 **l_1553 = &l_1554;
            const struct S0 * const **l_1557 = &l_1555;
            int32_t *l_1562 = &g_248;
            int32_t **l_1561 = &l_1562;
            int32_t ***l_1560 = &l_1561;
            int32_t **** const l_1559 = &l_1560;
            int32_t **** const *l_1558[3][5] = {{&l_1559,&l_1559,&l_1559,&l_1559,&l_1559},{&l_1559,&l_1559,&l_1559,&l_1559,&l_1559},{&l_1559,&l_1559,&l_1559,&l_1559,&l_1559}};
            int8_t *** const **l_1581 = (void*)0;
            const uint32_t l_1601[4] = {0x315F9476L,0x315F9476L,0x315F9476L,0x315F9476L};
            int32_t l_1603 = 0x24C00B05L;
            int32_t l_1604 = (-2L);
            int32_t l_1605 = (-6L);
            int64_t l_1606[1];
            int32_t l_1607 = 1L;
            int32_t l_1608 = 0x50BF918BL;
            int32_t l_1609 = 0x6ACE9785L;
            int32_t l_1610 = 0L;
            int32_t l_1611 = 0x22121CA9L;
            int32_t l_1612 = 0xD62C596EL;
            int32_t l_1614 = 3L;
            int64_t l_1615 = 4L;
            int32_t l_1616 = (-1L);
            int16_t l_1649 = 0L;
            int32_t l_1654 = 0x5870076CL;
            int16_t l_1665 = 0x8C82L;
            uint32_t l_1679 = 0xD3E84941L;
            int64_t *l_1702 = &l_1567;
            int64_t **l_1701 = &l_1702;
            int64_t ***l_1700[5] = {&l_1701,&l_1701,&l_1701,&l_1701,&l_1701};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1606[i] = (-2L);
            if (((((*g_1333) = ((**l_1553) , (*g_1333))) || 18446744073709551615UL) ^ 0xB99AL))
            { 
                uint16_t l_1571 = 0UL;
                int8_t *** const **l_1582 = &g_1580;
                int32_t l_1585 = 0L;
                if (((safe_add_func_uint32_t_u_u(p_20, p_20)) , l_1571))
                { 
                    int64_t l_1577 = (-1L);
                    uint16_t *l_1578 = &g_220.f4;
                    int8_t *** const **l_1583 = (void*)0;
                    (*l_1553) = &g_220;
                    (*l_1547) &= (((l_1585 = (((safe_mul_func_int8_t_s_s((0xD53F56F869328BAELL > ((safe_rshift_func_uint8_t_u_u(((*g_1333) == 0x5675B0D4041EFBA7LL), 5)) > (((l_1584 = (l_1583 = (l_1582 = (l_1581 = (((**g_999) & ((*l_1578) = (!l_1577))) , g_1579))))) != (void*)0) , 65529UL))), p_19)) == p_19) <= p_19)) | p_20) || p_20);
                }
                else
                { 
                    return g_220;
                }
                (*l_1553) = (*l_1553);
            }
            else
            { 
                int32_t *****l_1590 = &g_438;
                int32_t *****l_1591[1];
                uint16_t l_1602 = 0x3552L;
                const int64_t l_1643[1][5][4] = {{{0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL},{0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL},{0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL},{0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL},{0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL,0xE67FABC40A9763B6LL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1591[i] = &g_438;
                l_1602 |= (((*g_1333) = ((((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((&g_438 != (l_1591[0] = (l_1590 = (void*)0))), 6)), 8)) , 1UL) > ((safe_mod_func_int16_t_s_s(0x471CL, (safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(0x7058A15D7820D4FBLL, (~((((0UL ^ ((safe_add_func_int16_t_s_s(l_1601[1], g_1302)) != 5L)) | (*l_1547)) , p_19) ^ (**g_999))))), 0xCDDE14ADL)))) ^ (*l_1547))) ^ (**g_999)) | 0x0FB20689L) , p_19)) > p_19);
                --l_1617;
                if ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((!0x0B218826AC86C454LL), (safe_add_func_int32_t_s_s(((((((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((p_19 <= l_1523.f1) > 7UL) >= (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x02L, (((**l_1559) = g_1639) != &g_1640))), 0x1172L))), (*l_1547))), l_1641)) >= 0UL) , l_1642) , p_19) != 0L) , p_19), p_20)))), l_1643[0][0][2])), l_1644[3][4][3])), (*l_1547))))
                { 
                    l_1649 = ((*l_1547) = (safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s(g_1302, 0xC650011A88D5B309LL)) , p_20), p_20)));
                    (*l_1547) &= p_20;
                    if ((*l_1547))
                        continue;
                }
                else
                { 
                    uint16_t l_1650 = 0UL;
                    int32_t *l_1653 = &l_1496;
                    (*g_610) = (void*)0;
                    if (p_20)
                        continue;
                    (*l_1533) = (*g_610);
                    ++l_1650;
                    (*l_1533) = l_1653;
                }
                if (p_19)
                { 
                    int64_t *l_1669[2];
                    int32_t l_1670 = 0L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1669[i] = &g_1287[0];
                    (*l_1547) = (((**g_999) = 0xD2B4L) , 0L);
                    g_220.f2 |= ((*l_1547) = l_1654);
                    if (p_19)
                        break;
                    g_1510[2] &= ((((safe_lshift_func_int16_t_s_s((-8L), (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((**g_999) = (l_1665 != (l_1666 == ((*l_1560) = l_1666)))), ((safe_rshift_func_uint8_t_u_u(((((p_19 = 0x50B45720A6BB5069LL) , ((0x77L | l_1670) | (*l_1547))) < 6L) == 0x65345C23D96603A8LL), p_20)) & l_1671))), p_20)) & 6L), p_20)))) & 0xCC4AL) , (*l_1547)) > 4294967295UL);
                }
                else
                { 
                    int16_t l_1678 = 0x4731L;
                    l_1608 = (l_1497 = ((p_20 < (safe_sub_func_uint32_t_u_u(((***g_414) , (((0x5FC4L || (safe_sub_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(0UL, (-10L))) >= ((*l_1541) = (l_1678 | 0x8A1AL))), (*g_1333)))) & l_1679) | l_1604)), 1UL))) && (-5L)));
                }
            }
            for (g_220.f3 = 0; (g_220.f3 < 28); g_220.f3 = safe_add_func_uint16_t_u_u(g_220.f3, 2))
            { 
                int16_t l_1684 = (-4L);
                int8_t *l_1692 = &l_1552[0][0][0];
                int32_t l_1703 = 0x39D60093L;
                uint8_t l_1713[3][4][3] = {{{247UL,247UL,2UL},{0x0DL,1UL,2UL},{1UL,0x0DL,2UL},{247UL,247UL,2UL}},{{0x0DL,1UL,2UL},{1UL,0x0DL,2UL},{247UL,247UL,2UL},{0x0DL,1UL,2UL}},{{1UL,0x0DL,2UL},{247UL,247UL,2UL},{0x0DL,1UL,2UL},{1UL,0x0DL,2UL}}};
                int32_t *l_1714 = &l_1501;
                int i, j, k;
                for (g_128 = 0; (g_128 != 5); g_128 = safe_add_func_uint64_t_u_u(g_128, 5))
                { 
                    int64_t *l_1699 = &g_1287[0];
                    int64_t **l_1698 = &l_1699;
                    int64_t ***l_1697[5][2] = {{&l_1698,&l_1698},{&l_1698,&l_1698},{&l_1698,&l_1698},{&l_1698,&l_1698},{&l_1698,&l_1698}};
                    uint32_t *l_1704 = &g_1443;
                    int32_t l_1705[7][7] = {{0x46C5A1D8L,(-1L),(-1L),0x46C5A1D8L,(-1L),(-1L),0x46C5A1D8L},{0x75985657L,1L,0x75985657L,0L,0x48F49E75L,0L,0x75985657L},{0x46C5A1D8L,0x46C5A1D8L,0xE2D7A5E5L,0x46C5A1D8L,0x46C5A1D8L,0xE2D7A5E5L,0x46C5A1D8L},{0x48F49E75L,0L,0x75985657L,1L,0x75985657L,0L,0x48F49E75L},{(-1L),0x46C5A1D8L,(-1L),(-1L),0x46C5A1D8L,(-1L),(-1L)},{0x48F49E75L,1L,(-1L),1L,0x48F49E75L,(-3L),0x48F49E75L},{0x46C5A1D8L,(-1L),(-1L),0x46C5A1D8L,(-1L),(-1L),0x46C5A1D8L}};
                    int32_t l_1706 = 0xCFEE94C2L;
                    uint32_t *l_1710 = &g_1296[0][1][1];
                    int i, j;
                    l_1706 &= (((l_1684 > (((*l_1704) ^= (((((*l_1547) , (!((safe_sub_func_int32_t_s_s((-1L), ((*l_1547) = (((*l_1546) = (safe_mod_func_uint16_t_u_u(((l_1523.f5 = ((l_1684 & ((((void*)0 != l_1692) & (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((**g_999) < (*l_1547)), 14)), 5)) , l_1697[1][0]) != l_1700[2])) | l_1703)) , (*l_1547))) & (***g_414)), (*l_1547)))) | 0UL)))) ^ 65535UL))) > (*g_1333)) || 0x99F387054EB25055LL) < 0x4E8DEB1832133A27LL)) ^ p_20)) <= l_1705[4][3]) || (*g_1333));
                    (*l_1533) = &l_1703;
                    l_1607 = ((+((**g_999) = 0xC9A2L)) > (((((g_1110 , ((&l_1703 != (void*)0) , ((((*l_1710) = ((*l_1704) = (+(safe_unary_minus_func_int16_t_s(g_113[0][0]))))) >= (((((safe_lshift_func_uint8_t_u_s(l_1713[0][2][1], 3)) && (((5UL >= p_20) & 0x34545793549DDC79LL) >= 4294967287UL)) >= 1L) == p_20) ^ g_973)) , (*g_999)))) != (void*)0) ^ p_20) > 0xF1L) == 0x1988F7F0L));
                }
                l_1714 = &l_1703;
                for (l_1608 = 0; (l_1608 <= 0); l_1608 += 1)
                { 
                    return g_220;
                }
            }
        }
        else
        { 
            int32_t **l_1716[7][4] = {{&l_1547,&l_1547,&l_1547,&l_1547},{(void*)0,(void*)0,&l_1547,(void*)0},{&g_611,&l_1547,(void*)0,&l_1547},{(void*)0,&l_1547,&g_611,&l_1547},{&l_1547,&l_1547,&g_611,(void*)0},{&g_611,(void*)0,&l_1547,&l_1547},{&g_611,&l_1547,&l_1547,&l_1547}};
            int32_t **l_1717 = &g_611;
            uint32_t ***l_1759 = &g_850;
            union U1 *l_1764 = (void*)0;
            union U1 **l_1763[7][4] = {{(void*)0,&l_1764,&l_1764,(void*)0},{&l_1764,&l_1764,&l_1764,&l_1764},{&l_1764,&l_1764,&l_1764,&l_1764},{&l_1764,&l_1764,&l_1764,&l_1764},{(void*)0,&l_1764,(void*)0,&l_1764},{(void*)0,&l_1764,&l_1764,(void*)0},{&l_1764,(void*)0,&l_1764,(void*)0}};
            uint8_t l_1842 = 0UL;
            int i, j;
            (*l_1717) = l_1715;
            if ((((safe_div_func_int64_t_s_s(((&p_19 == (void*)0) , (+0x395DL)), (*g_1333))) != (((--(**g_999)) != p_20) < (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u((((*g_1396) = (l_1642 , (void*)0)) != l_1737), (*l_1547))) , p_19) , 253UL) < l_1738), (*l_1547))) < (*g_1333)), (*l_1547))) == (*l_1547)) , (*l_1715)) < 0L), p_19)), p_20)), 0UL)))) < (*g_1333)))
            { 
                const int8_t l_1754[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
                int32_t l_1769 = (-10L);
                int32_t l_1770 = (-1L);
                int32_t l_1772 = 0xACE9FA35L;
                int32_t l_1773 = 0xC3F2B4C1L;
                int32_t l_1775 = (-1L);
                uint64_t l_1779 = 0x90AB3340D31CC489LL;
                int8_t l_1810[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1810[i] = 3L;
                for (l_1456 = (-19); (l_1456 < 25); l_1456 = safe_add_func_uint8_t_u_u(l_1456, 1))
                { 
                    int32_t *l_1741 = (void*)0;
                    uint32_t *l_1760 = &g_106;
                    union U1 ***l_1765[4][1] = {{&l_1763[0][3]},{&l_1763[0][3]},{&l_1763[0][3]},{&l_1763[0][3]}};
                    int i, j;
                    (*l_1533) = l_1741;
                    (**g_610) ^= (safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((*g_1000) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1754[0][3], (safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s(((l_1759 == (void*)0) ^ ((*l_1760)--)), (((g_1766 = l_1763[0][3]) != (l_1768 = l_1768)) ^ 1UL))) <= 4L), 0x03A80C7C6DCA6450LL)))), p_20))), g_1046)) && (*l_1547)), l_1754[0][3])) ^ p_19), p_19)) , p_19), 5));
                    if (p_19)
                        continue;
                    if (p_20)
                        continue;
                }
                if (p_20)
                { 
                    int8_t l_1771 = 0xCCL;
                    int32_t l_1774 = 0x91736E2AL;
                    int32_t l_1776 = 0L;
                    int32_t l_1777 = (-1L);
                    int32_t l_1778[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1778[i] = 0xDB4F6B3EL;
                    ++l_1779;
                    (*l_1547) ^= (**g_610);
                    (*g_611) = (((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(0x97D4L, (((*l_1715) || ((safe_sub_func_uint64_t_u_u((((g_220 , 0x3B0FL) || (-5L)) >= (-1L)), g_113[0][0])) | (*l_1715))) , (*g_1000)))) < p_20), 3UL)) , (*l_1547)) && p_20);
                }
                else
                { 
                    int32_t *l_1792 = &g_531;
                    int8_t *** const l_1804 = &g_327;
                    int8_t ** const *l_1807 = &g_327;
                    int64_t *l_1808 = &g_1287[0];
                    int32_t l_1811[3];
                    uint8_t l_1812 = 0xFEL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1811[i] = 0x15AED3FBL;
                    (*l_1717) = &l_1498[2][2][0];
                    (*l_1533) = l_1792;
                    l_1793 = &g_982[3][0][1];
                    l_1769 = (g_974 >= (((((safe_div_func_int64_t_s_s(((*l_1808) = ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((l_1775 , (safe_lshift_func_uint16_t_u_u((0x59263E8DL == ((*g_611) = (*l_1792))), 12))) , p_20) || (l_1804 != ((((*l_1547) = (safe_mul_func_uint32_t_u_u((((g_149 < (*g_1333)) != 2L) & 0UL), 0UL))) < p_20) , l_1807))), 0x5499BC08L)), 6)) , (***g_414)), 0x6AL)) & 0x3768FBF59DA0A3D8LL)), (*l_1715))) == g_1809) , (*g_1000)) || (**g_999)) || p_19));
                    --l_1812;
                }
            }
            else
            { 
                int64_t l_1825 = 0x3FC6EAD7222A69C0LL;
                int32_t l_1841[5][4] = {{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L},{6L,6L,6L,6L}};
                int i, j;
                for (g_179 = (-1); (g_179 != 5); g_179 = safe_add_func_int8_t_s_s(g_179, 6))
                { 
                    (*g_611) = p_19;
                }
                if (l_1817)
                { 
                    uint16_t ***l_1829[1];
                    uint16_t ****l_1828 = &l_1829[0];
                    int32_t l_1839 = 0xD29523BAL;
                    int32_t l_1840[3];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1829[i] = &g_999;
                    for (i = 0; i < 3; i++)
                        l_1840[i] = 0x8688DEC0L;
                    (**g_610) |= (safe_mul_func_int16_t_s_s(((g_1820 , ((safe_mul_func_int16_t_s_s(0xC933L, (safe_div_func_int32_t_s_s(0xA1C53429L, (l_1825 && (safe_lshift_func_int16_t_s_s(((*l_1541) |= ((l_1828 != ((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((0L >= (safe_lshift_func_uint8_t_u_u(((((~((l_1825 ^ 0x3931L) <= p_20)) >= p_19) != 0x2FL) <= p_19), 7))) , p_19), p_20)) <= 0x2D43D837639B5A5CLL), g_1837)) , (void*)0)) | l_1838)), g_220.f6))))))) != 0x8B354515L)) >= p_19), 0x7C3EL));
                    (**g_610) = l_1839;
                    --l_1842;
                    return l_1642;
                }
                else
                { 
                    int64_t *l_1845 = &l_1644[3][3][0];
                    int32_t l_1848 = 2L;
                    (**g_610) &= (((0UL == ((*l_1845) = p_20)) < (p_19 & 1L)) != (safe_mul_func_uint8_t_u_u((p_20 == ((((***g_414) >= l_1848) < (-6L)) >= (*g_1333))), p_20)));
                    if (p_20)
                        break;
                    return g_220;
                }
            }
        }
        (*l_1715) &= (safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((void*)0 == &g_1820) & (p_20 & (((safe_lshift_func_uint16_t_u_u((**g_999), (safe_unary_minus_func_uint64_t_u(1UL)))) > (safe_add_func_uint8_t_u_u((*g_127), p_20))) , (*l_1547)))), (-7L))), 0x3AA7570AL)), p_19));
    }
    (*l_1864) |= ((((**l_1768) , (((((((*g_1333) < (l_1860 != (void*)0)) || p_20) , (((&l_1666 == ((*l_1861) = &l_1666)) != 0x648029BCL) , l_1863)) > (*l_1715)) && (*l_1715)) , p_19)) ^ (-2L)) <= (*l_1715));
    return l_2319;
}



static uint32_t  func_29(int16_t  p_30, union U1  p_31)
{ 
    int16_t l_1135 = 3L;
    int32_t l_1164[5][6][3] = {{{0x702CE886L,0xB1B9B458L,0x702CE886L},{0xEFDF89ADL,(-9L),1L},{1L,0xB1B9B458L,0xEFA69764L},{0L,0x76F7DD06L,0xFF4D309BL},{0xB2B6BC30L,0L,0x702CE886L},{0L,0L,0L}},{{1L,(-6L),(-1L)},{0xEFDF89ADL,0x76F7DD06L,0L},{0x702CE886L,0xEF1D1FFFL,0x702CE886L},{(-6L),(-9L),0xFF4D309BL},{1L,0xEF1D1FFFL,0xEFA69764L},{0x76F7DD06L,0x76F7DD06L,1L}},{{0xB2B6BC30L,(-6L),0x702CE886L},{0x76F7DD06L,0L,(-9L)},{1L,0L,(-1L)},{(-6L),0x76F7DD06L,(-9L)},{0x702CE886L,0xB1B9B458L,0x702CE886L},{0xEFDF89ADL,(-9L),1L}},{{1L,0xB1B9B458L,0xEFA69764L},{0L,0x76F7DD06L,0xFF4D309BL},{0xB2B6BC30L,0L,0x702CE886L},{0L,0L,0L},{1L,(-6L),(-1L)},{0xEFDF89ADL,0x76F7DD06L,0L}},{{0x702CE886L,0xEF1D1FFFL,0x702CE886L},{(-6L),(-9L),0xFF4D309BL},{1L,0xEF1D1FFFL,0xEFA69764L},{0x76F7DD06L,0x76F7DD06L,1L},{0xB2B6BC30L,(-6L),0x702CE886L},{0x76F7DD06L,0L,(-9L)}}};
    int8_t l_1185 = (-5L);
    int32_t l_1246 = 0x9B0B2475L;
    uint8_t **l_1262[5][1] = {{&g_127},{&g_127},{&g_127},{&g_127},{&g_127}};
    uint8_t ***l_1261 = &l_1262[0][0];
    uint16_t ***l_1275 = &g_999;
    int32_t **l_1280 = (void*)0;
    int32_t l_1300 = 0x7D9957E7L;
    int8_t ***l_1365 = &g_327;
    int8_t ****l_1364 = &l_1365;
    int8_t ***** const l_1363 = &l_1364;
    int32_t l_1408 = (-4L);
    const int32_t ****l_1418 = (void*)0;
    struct S0 *l_1429 = &g_220;
    uint32_t **l_1439 = &g_851;
    int i, j, k;
    if (l_1135)
    { 
        int32_t l_1142 = 0x19B16FDFL;
        uint8_t l_1143 = 0xE1L;
        int8_t ***l_1167 = (void*)0;
        int32_t l_1187 = 0x308C62B8L;
        int32_t l_1188 = 1L;
        int32_t l_1189 = 0x6B35413FL;
        int32_t l_1190 = 0L;
        if ((safe_add_func_uint16_t_u_u(p_30, (--(**g_999)))))
        { 
            int32_t *l_1140 = &g_220.f2;
            int32_t *l_1141[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1141[i] = &g_531;
            ++l_1143;
            p_31.f0 = ((*l_1140) = l_1142);
        }
        else
        { 
            struct S0 * const l_1150 = (void*)0;
            int32_t l_1165 = (-1L);
            for (g_104 = 27; (g_104 != 6); g_104 = safe_sub_func_uint8_t_u_u(g_104, 7))
            { 
                const int32_t *l_1169 = (void*)0;
                const int32_t **l_1170 = &g_92[0];
                const int32_t **l_1171 = (void*)0;
                const int32_t **l_1173 = (void*)0;
                const int32_t **l_1174 = &l_1169;
                for (g_220.f7 = 9; (g_220.f7 != 51); g_220.f7 = safe_add_func_int32_t_s_s(g_220.f7, 6))
                { 
                    struct S0 *l_1152 = &g_220;
                    struct S0 **l_1151 = &l_1152;
                    int8_t * const ***l_1157[6] = {&g_1155,(void*)0,(void*)0,&g_1155,(void*)0,(void*)0};
                    int i;
                    (*l_1151) = l_1150;
                    p_31.f0 = (safe_add_func_uint64_t_u_u(((g_1155 = g_1155) != ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((l_1164[2][0][0] = 1UL) < p_30), l_1165)), 3)) , ((((void*)0 != g_1166) | (0L || 0x24C4L)) ^ g_138)), p_31.f0)) , l_1167)), g_1130));
                }
                g_45.f0 = (safe_unary_minus_func_int16_t_s((-2L)));
                (*l_1174) = (g_1172[1] = ((*l_1170) = l_1169));
                for (g_248 = 0; (g_248 == (-21)); g_248--)
                { 
                    return p_30;
                }
            }
            return p_31.f0;
        }
        for (g_462 = 16; (g_462 >= 5); --g_462)
        { 
            int32_t *l_1179[2][3] = {{&l_1164[2][0][0],&g_45.f0,&g_45.f0},{&l_1164[2][0][0],&g_45.f0,&g_45.f0}};
            int i, j;
            (*g_610) = l_1179[0][1];
            if ((**g_610))
                break;
        }
        for (g_974 = 0; (g_974 <= 1); g_974 += 1)
        { 
            int32_t *l_1180 = &g_1134[1].f0;
            int32_t *l_1181 = &g_220.f2;
            int32_t *l_1182 = &l_1164[2][0][0];
            int32_t *l_1183 = &l_1164[2][0][0];
            int32_t *l_1184[6][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{&l_1164[0][4][0],(void*)0,&l_1164[0][4][0]}},{{(void*)0,(void*)0,(void*)0}},{{&l_1164[0][4][0],(void*)0,&l_1164[0][4][0]}},{{(void*)0,(void*)0,(void*)0}},{{&l_1164[0][4][0],(void*)0,&l_1164[0][4][0]}}};
            int32_t l_1186 = 0xB1CBF2A5L;
            int i, j, k;
            --g_1191;
            for (g_126 = 1; (g_126 >= 0); g_126 -= 1)
            { 
                uint32_t * const *l_1194[3];
                int32_t l_1199[4];
                int i;
                for (i = 0; i < 3; i++)
                    l_1194[i] = &g_851;
                for (i = 0; i < 4; i++)
                    l_1199[i] = 0xE9B44D6FL;
                for (g_531 = 0; (g_531 <= 0); g_531 += 1)
                { 
                    int i, j, k;
                    (*l_1180) &= (((g_113[g_531][g_531] && (g_113[g_531][g_531] = l_1185)) & ((((void*)0 != l_1194[1]) && p_30) != (safe_rshift_func_uint8_t_u_u((l_1199[1] | ((p_30 >= g_915) > p_31.f0)), 0)))) == p_31.f0);
                    g_92[g_974] = &l_1199[3];
                    (*l_1182) ^= p_31.f0;
                }
                return l_1164[2][0][0];
            }
        }
    }
    else
    { 
        uint64_t l_1203 = 18446744073709551615UL;
        int32_t *l_1216 = (void*)0;
        struct S0 l_1224 = {1L,1UL,-5L,0xDAAF364CL,0UL,2L,1L,0xCE01L};
        uint8_t **l_1260 = (void*)0;
        uint8_t ***l_1259 = &l_1260;
        int64_t l_1286 = 0L;
        int64_t l_1316 = 0xC228A97D4D353DBDLL;
        uint16_t l_1352[5][4][5] = {{{0UL,6UL,65535UL,65534UL,6UL},{0x958DL,2UL,0UL,0x69E8L,0x69E8L},{0x297FL,65535UL,0x297FL,65535UL,9UL},{65535UL,0x9FC5L,4UL,0x9EF1L,0x9F5BL}},{{65532UL,0UL,0UL,65535UL,65535UL},{1UL,0x958DL,4UL,0x9F5BL,65532UL},{0UL,0x297FL,0x297FL,0UL,0xF6F4L},{3UL,0xCAE7L,0x69E8L,4UL,0xCAE7L}},{{0xF6F4L,6UL,0xB79CL,0UL,0xC169L},{0x9F5BL,0UL,65529UL,4UL,65535UL},{65535UL,0x297FL,65535UL,0x297FL,65535UL},{65529UL,3UL,0UL,0UL,1UL}},{{0x0D6CL,0xF6F4L,0UL,65535UL,65535UL},{3UL,0x9F5BL,65535UL,3UL,1UL},{0xBC1CL,65535UL,0xB79CL,0xB79CL,65535UL},{1UL,65529UL,1UL,1UL,65535UL}},{{6UL,0x0D6CL,65535UL,0x1605L,0xC169L},{0UL,3UL,65535UL,0xDE41L,0xCAE7L},{6UL,0xBC1CL,0xF6F4L,65535UL,0xF6F4L},{1UL,1UL,0x958DL,0xCAE7L,0x9FC5L}}};
        int32_t l_1383 = 4L;
        int32_t l_1385[2][1][1];
        int8_t **l_1402 = (void*)0;
        uint64_t l_1409[5];
        int8_t ** const *l_1412 = &l_1402;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1385[i][j][k] = 9L;
            }
        }
        for (i = 0; i < 5; i++)
            l_1409[i] = 0xB229B4FFA0630D84LL;
        for (g_149 = 6; (g_149 != 2); g_149 = safe_sub_func_int8_t_s_s(g_149, 4))
        { 
            int32_t *l_1202 = &g_220.f5;
            int32_t l_1234 = (-3L);
            int32_t l_1249 = 3L;
            int32_t l_1251[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1251[i][j] = 0x65876903L;
            }
            l_1202 = (void*)0;
            for (g_179 = 1; (g_179 >= 0); g_179 -= 1)
            { 
                int32_t l_1208[5] = {2L,2L,2L,2L,2L};
                int64_t *l_1211 = (void*)0;
                int64_t *l_1212 = (void*)0;
                int64_t *l_1213 = &g_107;
                int16_t l_1243 = 0x210FL;
                int i;
                if (((l_1203 != (**g_415)) > (((((safe_div_func_uint64_t_u_u((((safe_add_func_uint8_t_u_u(0xD7L, l_1208[3])) || (safe_mod_func_int64_t_s_s(((*l_1213) = l_1208[3]), (safe_mul_func_int8_t_s_s(1L, 0x3CL))))) , 2UL), p_30)) | g_220.f0) >= 4294967294UL) != l_1203) > 0x8625CD36L)))
                { 
                    l_1216 = &l_1208[1];
                    if (l_1135)
                        break;
                    if ((*l_1216))
                        continue;
                }
                else
                { 
                    int32_t * const *l_1227 = &l_1216;
                    int32_t * const **l_1226 = &l_1227;
                    int32_t * const ***l_1225 = &l_1226;
                    int32_t * const ****l_1228 = &l_1225;
                    uint64_t *l_1229[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int16_t *l_1242 = &g_973;
                    int32_t *l_1244[4] = {&l_1208[4],&l_1208[4],&l_1208[4],&l_1208[4]};
                    const union U1 l_1245 = {-1L};
                    int16_t l_1250 = 0xBFCCL;
                    int i;
                    if (p_31.f0)
                        break;
                    p_31.f0 = (safe_unary_minus_func_int8_t_s((p_30 || (**g_999))));
                    g_220.f5 ^= (safe_rshift_func_int16_t_s_u(((((*g_127) = ((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((l_1224 , 255UL), (((*l_1228) = l_1225) == &g_643))) <= (l_1164[2][0][0] = 0xA532707A5BE7BC85LL)), (((safe_add_func_int16_t_s_s(((*l_1242) = ((safe_sub_func_int8_t_s_s(l_1234, (safe_mod_func_int64_t_s_s(((+(((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s(p_31.f0, 12)) , l_1135) || 1L) > p_30), 0)) , 0x4EL) ^ l_1234)) & g_732), g_17)))) < 0xB832836AL)), (-1L))) , (***g_414)) >= 0xBEL))) || p_31.f0)) >= l_1243) == p_31.f0), (*g_1000)));
                    l_1224.f5 = ((l_1164[1][3][2] & (l_1164[2][3][0] , 0xC7D90431L)) & (((l_1245 , (l_1246 = p_31.f0)) & 0x6EF22BD7L) && ((safe_div_func_uint8_t_u_u((**g_415), p_31.f0)) && 0x0AF1CF192A2FF37ALL)));
                    --g_1252;
                }
            }
            return p_30;
        }
        (*g_610) = &l_1246;
        if ((safe_rshift_func_uint16_t_u_s(0xCB07L, (safe_mul_func_uint16_t_u_u((l_1259 != l_1261), p_30)))))
        { 
            int32_t **l_1269[6] = {&g_611,&g_611,&g_611,&g_611,&g_611,&g_611};
            uint16_t ** const *l_1274 = &g_999;
            uint64_t *l_1281[5][6][2] = {{{&g_104,(void*)0},{&g_113[0][0],&g_104},{(void*)0,&l_1203},{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&l_1203}},{{(void*)0,&g_104},{&g_113[0][0],(void*)0},{&g_104,&l_1203},{&g_104,(void*)0},{&g_113[0][0],&g_104},{(void*)0,&l_1203}},{{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&l_1203},{(void*)0,&g_104},{&g_113[0][0],(void*)0},{&g_104,&l_1203}},{{&g_104,(void*)0},{&g_113[0][0],&g_104},{(void*)0,&l_1203},{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&g_113[0][0]},{&g_113[0][0],&l_1203}},{{(void*)0,&g_104},{&g_113[0][0],(void*)0},{&g_104,&l_1203},{&g_104,(void*)0},{&g_113[0][0],&g_104},{(void*)0,&l_1203}}};
            uint32_t l_1323 = 0x16BBF289L;
            uint32_t l_1341 = 0x7748F247L;
            int8_t *****l_1394 = &l_1364;
            int i, j, k;
            if ((((((((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((g_113[0][0] = (safe_div_func_int8_t_s_s((((p_31.f0 , l_1269[2]) != ((safe_sub_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((l_1274 == l_1275), (safe_div_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((((4294967295UL ^ p_30) || 0xEE8FL) & (**g_415)), 0x14L)) , l_1164[2][0][0]), p_30)))) , 2L) | (-1L)), (-8L))) , l_1280)) <= p_30), p_31.f0))) | g_732) || 0x795FL) | 0x68C6L), 3)), 1)) != p_31.f0) ^ p_31.f0) & p_31.f0) ^ 0x98C610A7E129F9FDLL) < (-1L)) > g_1252))
            { 
                const uint8_t *l_1284[5];
                int32_t *l_1285 = &l_1164[2][0][0];
                int32_t l_1288 = 0x380D7F53L;
                int32_t l_1294 = 0x4D41EC0CL;
                int32_t l_1303 = 0xB880A9DEL;
                int32_t l_1304 = 7L;
                int32_t ** const *l_1310 = &l_1269[3];
                int32_t ** const **l_1311 = &l_1310;
                int64_t *l_1324 = &g_732;
                int16_t *l_1334 = &l_1224.f0;
                uint32_t *l_1351 = &l_1323;
                const uint16_t l_1353 = 0x7255L;
                int8_t ** const ***l_1354[3];
                union U1 l_1367 = {-5L};
                int8_t l_1391 = 0xB9L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1284[i] = &g_1074;
                for (i = 0; i < 3; i++)
                    l_1354[i] = &g_982[5][4][0];
                if (((**g_610) = (safe_lshift_func_int16_t_s_u(((void*)0 == l_1284[1]), 0))))
                { 
                    uint32_t l_1289[7][3] = {{0xB4325168L,0xE9EE7C48L,0xE9EE7C48L},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xB4325168L,0xB4325168L,0xE9EE7C48L},{0UL,18446744073709551615UL,0UL},{0xB4325168L,0xE9EE7C48L,0xE9EE7C48L},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xB4325168L,0xB4325168L,0xE9EE7C48L}};
                    int32_t l_1292 = 0xD258474AL;
                    int32_t l_1293 = 0x842EAD20L;
                    int32_t l_1295 = 0L;
                    int i, j;
                    (*g_610) = l_1285;
                    l_1289[6][0]--;
                    ++g_1296[0][1][1];
                    return p_30;
                }
                else
                { 
                    uint32_t l_1299 = 0xB9296622L;
                    int32_t l_1301[5][4] = {{0x7DAD457CL,0x7DAD457CL,(-1L),0x7DAD457CL},{0x7DAD457CL,0xD518FC41L,0xD518FC41L,0x7DAD457CL},{0xD518FC41L,0x7DAD457CL,0xD518FC41L,0xD518FC41L},{0x7DAD457CL,0x7DAD457CL,(-1L),0x7DAD457CL},{0x7DAD457CL,0xD518FC41L,0xD518FC41L,0x7DAD457CL}};
                    int i, j;
                    (**g_610) = l_1299;
                    g_1305++;
                }
                (**g_610) = (((safe_lshift_func_int8_t_s_s(((((*l_1311) = l_1310) == (*g_642)) || (((*l_1324) = ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((l_1316 != (g_531 > (safe_div_func_uint32_t_u_u(g_1296[0][1][1], (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(0x483EL, p_31.f0)) & p_30), 0xEDABFF1C4CCC847ALL)))))) | p_30), g_113[0][0])) || l_1323), 251UL)) >= 0xF99FL)) >= g_462)), 6)) == 1L) || p_30);
                for (g_1191 = 0; (g_1191 == 29); g_1191++)
                { 
                    const uint16_t *l_1330 = &g_220.f1;
                    const uint16_t **l_1329 = &l_1330;
                    const uint16_t ***l_1328 = &l_1329;
                    const uint16_t ****l_1327 = &l_1328;
                    const uint16_t *****l_1331 = (void*)0;
                    const uint16_t *****l_1332 = &l_1327;
                    (*l_1332) = l_1327;
                    (*g_610) = (*g_610);
                }
                (*g_611) = ((((p_30 > ((-8L) && (((p_30 == (p_31.f0 = l_1203)) != ((*l_1334) = (((((g_208 , l_1324) == (((((void*)0 != g_1333) ^ p_30) & p_30) , (void*)0)) && p_30) && p_30) , p_30))) <= 0xD515L))) & p_30) > 255UL) && (*l_1285));
                if ((0x21A2A6FAL ^ (safe_add_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((*l_1285), ((l_1341 | ((+p_31.f0) == ((g_1134[1] , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((0x94CEL > (((*l_1351) = p_31.f0) ^ l_1352[3][0][4])), 1)), 0)), 3UL))) == 0L))) == l_1353))) && (*l_1285)) >= l_1185), p_31.f0))))
                { 
                    l_1354[2] = &g_982[4][3][3];
                    return p_31.f0;
                }
                else
                { 
                    int32_t l_1358 = 0x28B8D72BL;
                    int32_t l_1366 = 0x3F5A7EF3L;
                    (*g_610) = (void*)0;
                    (*l_1285) = ((!(safe_mod_func_uint8_t_u_u(l_1358, (l_1246 ^= ((***g_414) = ((((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s((*l_1285), (l_1363 == (((l_1366 = ((g_462 == p_31.f0) , p_31.f0)) , l_1224) , &l_1364)))) , l_1366), l_1358)) <= (*g_127)) && 0x4AL) >= 249UL)))))) || p_30);
                    (*l_1285) = ((p_31.f0 != (0xCC647AE3L == (safe_div_func_uint32_t_u_u(4294967295UL, (safe_mod_func_int16_t_s_s(((*l_1334) = (safe_lshift_func_uint8_t_u_u((l_1352[3][0][4] & (((p_31.f0 && (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_30, 7)), (safe_mod_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(((+((**g_999) != l_1383)) || 0x12L), (**g_415))) , g_1384) , 18446744073709551611UL) >= (*g_1333)), l_1385[1][0][0]))))) == p_31.f0) <= 8UL)), l_1366))), (*l_1285))))))) && 0UL);
                    p_31.f0 = (p_31.f0 || ((*l_1351) = ((0UL != (p_31.f0 < p_30)) | ((+(safe_rshift_func_int8_t_s_s((l_1391 = 0xD2L), 7))) > (((safe_div_func_uint32_t_u_u(((***g_414) ^ l_1358), 0xF86CF31EL)) && (**g_999)) < 0x72L)))));
                }
            }
            else
            { 
                g_1395 = l_1394;
            }
            for (p_31.f0 = 3; (p_31.f0 >= 0); p_31.f0 -= 1)
            { 
                int64_t l_1398[5][4][4] = {{{(-1L),(-1L),0x250C90F3EC42EBB5LL,0x250C90F3EC42EBB5LL},{(-1L),(-1L),(-3L),(-4L)},{1L,(-7L),1L,(-1L)},{(-10L),0x26F172A00B1F644CLL,(-1L),1L}},{{(-4L),0x26F172A00B1F644CLL,0x2DCE44710FD8838ELL,(-1L)},{0x26F172A00B1F644CLL,(-7L),0x09480B4ADD601969LL,(-4L)},{0x250C90F3EC42EBB5LL,(-1L),(-1L),0x250C90F3EC42EBB5LL},{0x442B2D2244746261LL,(-1L),1L,0x213879B95BB879BBLL}},{{0x26F172A00B1F644CLL,0x250C90F3EC42EBB5LL,(-10L),0x19F4C4E10526CFB1LL},{(-1L),(-3L),(-1L),0L},{(-1L),0x442B2D2244746261LL,0x5B387CC0B60FB25ELL,0x213879B95BB879BBLL},{1L,0xCF6BD5356D4774BBLL,0x250C90F3EC42EBB5LL,0x442B2D2244746261LL}},{{(-1L),(-1L),0x250C90F3EC42EBB5LL,(-1L)},{1L,0L,0x5B387CC0B60FB25ELL,(-1L)},{(-1L),1L,(-1L),0x26F172A00B1F644CLL},{(-1L),0x26F172A00B1F644CLL,(-10L),0xCF6BD5356D4774BBLL}},{{0x26F172A00B1F644CLL,0L,1L,(-4L)},{0x442B2D2244746261LL,(-1L),(-1L),0x442B2D2244746261LL},{0x250C90F3EC42EBB5LL,(-1L),0x09480B4ADD601969LL,0x7F6482AD9AD1CE0FLL},{0x26F172A00B1F644CLL,0x442B2D2244746261LL,0x2DCE44710FD8838ELL,0x19F4C4E10526CFB1LL}}};
                int16_t *l_1399 = &g_973;
                int32_t l_1400 = 0x4C119384L;
                int i, j, k;
                l_1400 = (((void*)0 == l_1281[3][0][1]) ^ ((*l_1399) = l_1398[1][3][0]));
                (*g_610) = (*g_610);
                for (g_126 = 3; (g_126 >= 0); g_126 -= 1)
                { 
                    int32_t *l_1401 = &l_1246;
                    const int8_t * const **l_1404[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1404[i][j] = (void*)0;
                    }
                    l_1401 = ((*g_610) = l_1401);
                    (*g_611) = g_105[p_31.f0][(p_31.f0 + 1)];
                    (*l_1401) &= (0x22L <= (l_1402 != (g_1403 = g_1403)));
                    l_1216 = &l_1400;
                }
            }
        }
        else
        { 
            uint32_t l_1407 = 0x5EFDE0E5L;
            int32_t *l_1415 = &g_1302;
            (*g_611) |= p_30;
            (*g_611) |= (((((p_30 > ((safe_mod_func_uint16_t_u_u((*g_1000), (g_974 || p_31.f0))) , ((((p_30 <= l_1407) >= (((g_1384 |= (l_1408 , 0x0E39400CL)) > l_1409[3]) , p_31.f0)) | (*g_1333)) || 0L))) | 18446744073709551607UL) <= (*g_1000)) , g_531) < (*g_1333));
            for (g_220.f5 = 0; (g_220.f5 > 25); g_220.f5 = safe_add_func_uint8_t_u_u(g_220.f5, 3))
            { 
                union U1 *l_1414 = &g_1134[4];
                union U1 **l_1413 = &l_1414;
                const int32_t *****l_1419 = &l_1418;
                int32_t ***l_1421 = (void*)0;
                int32_t ****l_1420 = &l_1421;
                int32_t *****l_1422 = &l_1420;
                int8_t *l_1425 = &l_1185;
                struct S0 *l_1428[3][3][6] = {{{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0}},{{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0}},{{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0},{&g_220,(void*)0,(void*)0,&g_220,(void*)0,(void*)0}}};
                int32_t l_1441 = (-2L);
                int i, j, k;
                (*g_611) ^= (l_1412 == &l_1402);
                (*l_1413) = &g_1134[4];
                l_1216 = l_1415;
                if ((((((safe_mod_func_uint64_t_u_u((((*l_1419) = l_1418) != ((*l_1422) = l_1420)), (safe_add_func_int32_t_s_s(p_31.f0, (l_1425 != l_1425))))) > ((safe_rshift_func_int16_t_s_u(((g_220.f0 <= (l_1428[0][0][0] != l_1429)) <= 0UL), 2)) ^ p_31.f0)) != (**g_415)) && (*l_1415)) || 0xF2C08F6AA0259FA2LL))
                { 
                    int32_t *l_1430[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1430[i] = &g_220.f2;
                    (*g_610) = l_1430[2];
                    (*l_1415) ^= (**g_610);
                }
                else
                { 
                    int32_t l_1431 = 0x7E72D935L;
                    int32_t l_1436 = 0x1360F7AFL;
                    uint32_t ***l_1440 = &g_850;
                    (*g_610) = (*g_610);
                    if (p_31.f0)
                        break;
                    if ((*l_1415))
                        continue;
                    (**g_610) = ((((**l_1364) = (*l_1365)) == (*l_1412)) & (l_1431 <= (safe_mod_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(((&g_643 != (void*)0) && (l_1436 ^= 0L)), (((safe_add_func_int8_t_s_s(p_31.f0, (*l_1415))) <= p_31.f0) || p_30))) <= p_31.f0) == (*l_1415)), p_30))));
                    (*l_1440) = l_1439;
                }
                return l_1441;
            }
        }
    }
    p_31.f0 ^= 0x4F671852L;
    return g_248;
}



static int16_t  func_32(union U1  p_33, uint64_t  p_34)
{ 
    uint16_t l_1100 = 65535UL;
    int32_t * const *l_1103 = (void*)0;
    int32_t * const **l_1104 = (void*)0;
    int32_t * const **l_1105 = (void*)0;
    int32_t * const **l_1106 = (void*)0;
    int32_t * const **l_1107[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_1111 = &g_45.f0;
    int32_t *l_1117 = &g_531;
    int32_t *l_1119 = &g_531;
    int32_t *l_1120 = &g_220.f2;
    int32_t *l_1121 = &g_220.f2;
    int32_t *l_1122 = &g_220.f5;
    int32_t *l_1123 = (void*)0;
    int32_t *l_1124 = (void*)0;
    int32_t *l_1125 = &g_531;
    int32_t *l_1126 = &g_531;
    int32_t *l_1127 = &g_220.f5;
    int32_t *l_1128 = &g_45.f0;
    int32_t *l_1129[2];
    uint32_t l_1131[7];
    int i;
    for (i = 0; i < 2; i++)
        l_1129[i] = &g_220.f5;
    for (i = 0; i < 7; i++)
        l_1131[i] = 0x1229CF7CL;
    p_33.f0 &= l_1100;
    if (l_1100)
        goto lbl_1118;
lbl_1118:
    (*l_1117) ^= ((safe_div_func_int32_t_s_s(((((g_1108[4] = l_1103) == (((*l_1111) = l_1100) , &g_1109)) ^ (g_220.f0 > ((safe_mul_func_int8_t_s_s(((!((**g_415) = p_33.f0)) & ((safe_sub_func_int64_t_s_s((-7L), ((((0L & p_33.f0) & l_1100) == p_34) > l_1100))) ^ 0UL)), p_33.f0)) && p_33.f0))) <= 0xC53779A257CCBFF6LL), (-9L))) , (*l_1111));
    l_1131[4]--;
    return (*l_1117);
}



static struct S0  func_40(int32_t  p_41, union U1  p_42, uint64_t  p_43, const uint8_t  p_44)
{ 
    int32_t l_46[1];
    struct S0 l_62[4][6] = {{{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L},{0xBC68L,65535UL,-1L,1UL,0xC011L,0x45B4E60DL,-4L,7UL},{2L,0x0996L,0xD0C7F122L,0x7EEBDC1AL,0xBB77L,0L,0xB3F0F592L,0UL},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L}},{{0xBC68L,65535UL,-1L,1UL,0xC011L,0x45B4E60DL,-4L,7UL},{2L,0x0996L,0xD0C7F122L,0x7EEBDC1AL,0xBB77L,0L,0xB3F0F592L,0UL},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L},{2L,0x0996L,0xD0C7F122L,0x7EEBDC1AL,0xBB77L,0L,0xB3F0F592L,0UL},{0xBC68L,65535UL,-1L,1UL,0xC011L,0x45B4E60DL,-4L,7UL},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L}},{{2L,0x0996L,0xD0C7F122L,0x7EEBDC1AL,0xBB77L,0L,0xB3F0F592L,0UL},{0xBC68L,65535UL,-1L,1UL,0xC011L,0x45B4E60DL,-4L,7UL},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L},{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L}},{{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{2L,0UL,-8L,1UL,0x4A03L,9L,0x2AFEDDD8L,0x7CD1L},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L},{0xBC68L,65535UL,-1L,1UL,0xC011L,0x45B4E60DL,-4L,7UL},{2L,0x0996L,0xD0C7F122L,0x7EEBDC1AL,0xBB77L,0L,0xB3F0F592L,0UL},{0L,0UL,0xE8EE72C9L,0UL,65526UL,0L,-1L,0x7940L}}};
    int32_t **l_1079 = &g_611;
    int32_t *** const *l_1095 = (void*)0;
    int8_t *l_1096 = &g_181;
    int8_t l_1097 = 0xCFL;
    int32_t *l_1098[3];
    int i, j;
    for (i = 0; i < 1; i++)
        l_46[i] = 1L;
    for (i = 0; i < 3; i++)
        l_1098[i] = &g_45.f0;
    for (p_42.f0 = 0; (p_42.f0 >= 0); p_42.f0 -= 1)
    { 
        uint32_t l_47 = 18446744073709551612UL;
        l_47++;
        if (p_41)
            break;
    }
    p_41 &= (func_50(p_43, func_54(((-1L) ^ (safe_sub_func_int64_t_s_s((l_62[1][1] , (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((l_62[1][1].f1 ^ l_62[1][1].f7), (l_62[1][1].f3 && (safe_add_func_uint16_t_u_u((0x1F86L | 65535UL), 0UL))))), 1L))), (-1L)))), g_45, l_62[1][1].f4, p_43, p_43), l_62[1][1].f1) , l_62[1][1].f7);
    g_220.f2 |= ((safe_lshift_func_uint8_t_u_s((((void*)0 == l_1079) && (safe_mod_func_uint8_t_u_u(((*g_127) |= (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_44, (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((((((*l_1096) = (safe_div_func_uint16_t_u_u(4UL, (safe_rshift_func_int8_t_s_u(((1L | (((!l_62[1][1].f3) && ((((p_43 | p_42.f0) & 1UL) , (void*)0) == l_1095)) ^ 0x82F6FCA6L)) < g_531), p_41))))) && p_44) , p_44) | p_41), l_46[0])), 0x71F4D66A5B1D894CLL)))), l_1097))), 0x22L))), 0)) || p_43);
    return l_62[1][1];
}



static uint32_t  func_50(int32_t  p_51, const uint32_t  p_52, uint32_t  p_53)
{ 
    int8_t l_822 = 0xEFL;
    uint8_t *****l_827 = &g_781;
    uint32_t *l_849 = &g_208;
    uint32_t **l_848 = &l_849;
    int32_t l_894[6][1][1] = {{{0x0A14673DL}},{{(-7L)}},{{0x0A14673DL}},{{(-7L)}},{{0x0A14673DL}},{{(-7L)}}};
    int32_t l_918 = (-10L);
    int32_t *l_1030 = (void*)0;
    int32_t **l_1029 = &l_1030;
    int32_t ***l_1028 = &l_1029;
    int32_t ****l_1027 = &l_1028;
    int32_t l_1036 = 1L;
    int8_t l_1058 = (-8L);
    int32_t *l_1059 = &l_894[1][0][0];
    int32_t *l_1060 = &g_531;
    int32_t *l_1061 = (void*)0;
    int32_t *l_1062 = &g_220.f5;
    int32_t *l_1063 = &g_220.f5;
    int32_t *l_1064 = &l_894[3][0][0];
    int32_t *l_1065 = &l_918;
    int32_t *l_1066 = &l_894[3][0][0];
    int32_t *l_1067 = &g_220.f2;
    int32_t *l_1068 = &l_894[3][0][0];
    int32_t *l_1069 = (void*)0;
    int64_t l_1070 = 1L;
    int32_t *l_1071 = &g_220.f2;
    int32_t *l_1072[5][4][5] = {{{&l_918,&l_894[1][0][0],&g_220.f2,&l_894[1][0][0],&l_894[1][0][0]},{&l_918,&l_918,&g_220.f5,(void*)0,&l_918},{&l_918,&l_918,&l_894[3][0][0],&l_894[1][0][0],(void*)0},{&l_894[1][0][0],&l_918,&g_220.f5,&l_918,&l_894[1][0][0]}},{{&l_894[3][0][0],&l_918,&l_918,&g_220.f2,&l_894[3][0][0]},{&l_894[3][0][0],&l_894[3][0][0],(void*)0,&g_220.f5,&l_894[1][0][0]},{&l_894[3][0][0],&g_220.f2,&l_894[1][0][0],&l_894[3][0][0],&l_894[3][0][0]},{(void*)0,&g_220.f5,&g_220.f5,&g_220.f5,&g_220.f5}},{{&l_894[3][0][0],&l_894[1][0][0],&g_220.f5,&l_918,(void*)0},{&g_220.f2,&l_894[3][0][0],&l_894[1][0][0],(void*)0,&l_918},{&g_220.f2,&l_894[3][0][0],(void*)0,(void*)0,&g_220.f5},{&g_220.f2,(void*)0,&l_894[3][0][0],&g_220.f5,&l_894[3][0][0]}},{{&l_894[3][0][0],&l_894[3][0][0],&l_894[3][0][0],&g_220.f5,&g_45.f0},{(void*)0,&g_220.f2,&l_894[1][0][0],(void*)0,&l_894[3][0][0]},{&l_894[3][0][0],&g_220.f2,&g_220.f5,(void*)0,&g_220.f2},{&l_894[3][0][0],&g_220.f2,&l_918,&l_918,&l_918}},{{&l_894[1][0][0],&l_894[3][0][0],&l_894[1][0][0],&g_220.f5,&l_918},{&g_220.f5,(void*)0,(void*)0,&l_894[3][0][0],&g_220.f2},{&g_220.f2,&l_894[3][0][0],(void*)0,&g_220.f5,&l_894[3][0][0]},{&l_894[3][0][0],&l_894[3][0][0],(void*)0,&g_220.f2,&g_45.f0}}};
    int16_t l_1073[5][5][3] = {{{0xF3EFL,6L,6L},{(-1L),0x1A95L,0xFE7DL},{0xA66CL,0xF3EFL,1L},{(-1L),(-1L),0x8FE3L},{0xF3EFL,0xA66CL,0x3996L}},{{0x1A95L,(-1L),0x1A95L},{6L,0xF3EFL,0x0589L},{6L,0x1A95L,0x1A95L},{0x0589L,6L,0x3996L},{1L,6L,0x8FE3L}},{{0x0589L,0x0589L,1L},{6L,1L,0xFE7DL},{6L,0x0589L,6L},{0x1A95L,6L,(-1L)},{0xF3EFL,6L,6L}},{{(-1L),0x1A95L,0xFE7DL},{0xA66CL,0xF3EFL,1L},{(-1L),(-1L),0x8FE3L},{0xF3EFL,0xA66CL,0x3996L},{0x1A95L,(-1L),0x1A95L}},{{6L,0xF3EFL,0x0589L},{6L,0x1A95L,0x1A95L},{0x0589L,6L,0x3996L},{1L,6L,0x8FE3L},{0x0589L,0x0589L,1L}}};
    int i, j, k;
    for (g_220.f3 = 0; (g_220.f3 == 53); g_220.f3 = safe_add_func_int64_t_s_s(g_220.f3, 5))
    { 
        int8_t l_799 = 0x71L;
        int32_t l_806[2][3][6] = {{{0xAFEE51C7L,1L,0x214CD3E9L,1L,1L,(-1L)},{0x54FDF01BL,(-1L),0x214CD3E9L,0xAFEE51C7L,(-8L),(-8L)},{(-1L),(-1L),(-1L),(-1L),1L,0xBDD3507BL}},{{(-1L),1L,0xBDD3507BL,0xAFEE51C7L,(-1L),0xBDD3507BL},{0x54FDF01BL,(-8L),(-1L),1L,(-1L),(-8L)},{0xAFEE51C7L,1L,0x214CD3E9L,1L,1L,(-1L)}}};
        uint64_t l_834 = 2UL;
        uint8_t *l_843 = (void*)0;
        uint64_t l_880[3][3] = {{18446744073709551611UL,0x14E9EC9C730A3CBFLL,18446744073709551611UL},{0x763CDA39CE5FC90FLL,0x763CDA39CE5FC90FLL,0x763CDA39CE5FC90FLL},{18446744073709551611UL,0x14E9EC9C730A3CBFLL,18446744073709551611UL}};
        uint32_t *l_991 = &g_208;
        uint16_t **l_1002[4];
        int32_t l_1049 = 0xDF1B7960L;
        int64_t *l_1057 = &g_107;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1002[i] = &g_1000;
        for (g_179 = (-24); (g_179 >= 28); g_179++)
        { 
            uint32_t l_844[5][7] = {{0x6E6DBF25L,0x6E6DBF25L,1UL,1UL,0x6E6DBF25L,0x6E6DBF25L,1UL},{2UL,18446744073709551615UL,2UL,18446744073709551615UL,2UL,18446744073709551615UL,2UL},{0x6E6DBF25L,1UL,1UL,0x6E6DBF25L,0x6E6DBF25L,1UL,1UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x6E6DBF25L,0x6E6DBF25L,1UL,1UL,0x6E6DBF25L,0x6E6DBF25L,1UL}};
            int32_t l_853 = 0x70C8281FL;
            int32_t *l_864 = &g_248;
            int32_t **l_863 = &l_864;
            int8_t l_883 = 0xB2L;
            int32_t l_896 = (-1L);
            uint8_t ****l_903 = (void*)0;
            int64_t *l_959[4] = {&g_107,&g_107,&g_107,&g_107};
            uint64_t *l_960 = &g_105[2][1];
            uint64_t *l_961 = &g_113[0][0];
            int64_t l_962 = 0xD91926ED850F8883LL;
            int8_t ***l_986 = &g_327;
            int8_t *** const *l_985[7] = {&l_986,&l_986,&l_986,&l_986,&l_986,&l_986,&l_986};
            uint16_t l_994 = 8UL;
            int i, j;
            for (g_208 = 11; (g_208 < 3); --g_208)
            { 
                uint64_t *l_807 = &g_104;
                int8_t *l_819 = &l_799;
                int8_t **l_818 = &l_819;
                uint64_t l_823 = 18446744073709551610UL;
                const int32_t *l_824 = &l_806[1][1][1];
                uint8_t *****l_828 = &g_781;
                const int32_t **l_858 = (void*)0;
                const int32_t ***l_859[2][2];
                uint16_t *l_870 = (void*)0;
                int32_t l_871 = 0xCBF37113L;
                int32_t l_895[6] = {1L,1L,1L,1L,1L,1L};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_859[i][j] = &l_858;
                }
                l_824 = ((l_799 && (safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_52, (((*l_807)++) && (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((-1L), ((l_806[0][0][0] <= ((l_818 != &l_819) > ((((safe_mod_func_int8_t_s_s(p_53, p_52)) , (void*)0) == (void*)0) <= l_822))) >= l_823))), 1)), (-9L))), p_52))))), l_822)), 0xD3DC4091B0F41AD0LL))) , (void*)0);
                for (g_246 = 14; (g_246 != 8); g_246 = safe_sub_func_int16_t_s_s(g_246, 2))
                { 
                    int64_t l_831 = 0x9D827DC6FC2EF80ALL;
                    int16_t l_835 = 0x9FB3L;
                    uint8_t *l_841 = &g_128;
                    uint8_t **l_842[5][5][2] = {{{&l_841,&g_127},{&g_127,&g_127},{&g_127,&g_127},{&l_841,&l_841},{&g_127,&l_841}},{{&l_841,&g_127},{&g_127,&g_127},{&g_127,&g_127},{&l_841,&l_841},{&g_127,&l_841}},{{&l_841,&g_127},{&g_127,&g_127},{&g_127,&g_127},{&l_841,&l_841},{&g_127,&l_841}},{{&l_841,&g_127},{&g_127,&g_127},{&g_127,&g_127},{&l_841,&l_841},{&g_127,&l_841}},{{&l_841,&g_127},{&g_127,&g_127},{&g_127,&g_127},{&l_841,&l_841},{&g_127,&l_841}}};
                    int16_t *l_845 = &g_85;
                    int32_t *l_852[6];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_852[i] = &g_220.f6;
                    l_828 = l_827;
                    l_835 = (safe_div_func_int16_t_s_s((g_220 , (((l_831 == (l_822 & l_822)) || p_53) | (l_834 != (l_834 < 0xFE25C1EED36293AFLL)))), p_52));
                    if (p_53)
                        break;
                    l_853 |= (safe_add_func_int16_t_s_s((-5L), (+(safe_lshift_func_int8_t_s_s((((((*g_415) == (l_843 = l_841)) , ((*l_845) |= l_844[4][3])) || ((l_806[0][0][0] = ((safe_mul_func_uint16_t_u_u(l_831, (((l_848 != g_850) , 7UL) , 1UL))) && p_53)) , p_51)) >= p_51), 2)))));
                }
                if ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((g_860 = l_858) != l_863), ((!(p_52 >= (((*l_807) &= 0UL) , (safe_mod_func_int16_t_s_s(l_806[0][0][3], ((65535UL && (l_871 = ((safe_add_func_int32_t_s_s(p_53, (-1L))) == p_53))) | p_53)))))) > g_113[0][0]))) && p_51), l_806[0][0][0])))
                { 
                    int32_t *l_884[2];
                    uint32_t l_885 = 1UL;
                    union U1 l_893 = {0x227A5B3BL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_884[i] = &g_531;
                    l_853 = ((((**l_818) = 0xEDL) , (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((+((safe_lshift_func_int8_t_s_u(p_53, ((**g_415) = (((~((l_880[2][2] < ((((**l_818) = (safe_lshift_func_uint16_t_u_u((0xFA6D2BA109C88294LL != ((l_885 = ((p_53 <= ((-4L) > (((p_53 , (-8L)) <= 1L) | l_883))) == 0x2BA2L)) ^ l_822)), 0))) != l_844[4][3]) < p_52)) != 0UL)) , p_51) == 0xFB012156L)))) && 1UL)), 0x7EB99B6FL)), 0xAB45A121L))) ^ 0xDFL);
                    l_896 |= ((l_853 &= g_208) , (p_53 ^ ((p_51 != ((*l_807)++)) || (((safe_mul_func_int32_t_s_s(l_880[2][2], ((((l_806[1][2][0] = (l_894[3][0][0] = (0xD7L >= (safe_add_func_int16_t_s_s(p_51, ((!((l_893 , 0xB999BBFC301C4CB7LL) , p_51)) == g_220.f5)))))) <= l_895[1]) , 0UL) >= 65535UL))) , (void*)0) == &g_327))));
                }
                else
                { 
                    uint8_t ***l_902 = (void*)0;
                    uint8_t ****l_901[3][7] = {{&l_902,&l_902,&l_902,&l_902,&l_902,&l_902,&l_902},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_902,&l_902,&l_902,&l_902,&l_902,&l_902,&l_902}};
                    int32_t *l_916 = (void*)0;
                    int32_t *l_917[7][6] = {{&l_896,&g_531,&g_531,&g_220.f5,&l_806[0][1][3],&l_806[0][1][3]},{&g_220.f5,&g_220.f5,&g_220.f5,&g_220.f5,&l_894[3][0][0],&g_220.f5},{&l_806[0][1][3],&l_896,&l_806[0][2][4],&l_895[1],&l_806[1][1][0],&g_531},{&l_806[0][2][4],&l_896,&l_896,&g_531,&l_806[1][1][0],&g_531},{(void*)0,&l_896,(void*)0,&l_894[3][0][0],&l_894[3][0][0],&l_896},{&g_220.f5,&g_220.f5,&g_531,&g_531,&l_806[0][1][3],&l_894[3][0][0]},{&l_895[1],&g_531,&l_894[3][0][0],&g_531,&g_531,&l_894[3][0][0]}};
                    int16_t *l_927 = &g_85;
                    int i, j;
                    l_918 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((l_901[1][6] = (*l_828)) != l_903) ^ ((((p_51 || ((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((((safe_mul_func_int8_t_s_s(l_806[0][2][0], ((safe_rshift_func_int16_t_s_u((l_822 ^ ((1L == p_53) > l_894[2][0][0])), p_52)) , l_880[2][2]))) < (-1L)) <= l_806[0][0][0]))), 2)) <= p_53) && p_51) != 65527UL), g_915)) || 0x47D9L)) > l_822) , l_916) == (*l_863))), 13)), 2));
                    (*g_610) = &l_894[5][0][0];
                    (*g_611) &= (safe_add_func_int16_t_s_s(p_52, g_220.f5));
                    (*g_610) = &p_51;
                    l_896 &= ((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(7UL, p_53)) , ((safe_lshift_func_int16_t_s_s(((*l_927) |= 0xB96AL), (((***g_414) && ((g_149 , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((((l_880[2][1] , (l_853 = (safe_sub_func_int64_t_s_s(g_113[0][0], 5UL)))) <= g_208) , (void*)0) != (void*)0) < l_844[3][3]), p_51)), l_883))) > 18446744073709551611UL)) , (-1L)))) || 249UL)), p_51)) == 0xA4L);
                }
            }
            if ((safe_rshift_func_int16_t_s_u(((g_181 = p_51) ^ l_880[2][2]), ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_445 , (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((((g_107 = (l_853 = ((0x11L && (*g_127)) == (((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((*l_849) &= (l_894[3][0][0] ^ ((safe_unary_minus_func_uint16_t_u((safe_mod_func_int64_t_s_s((((*l_961) = ((*l_960) ^= ((((safe_sub_func_uint32_t_u_u(((l_806[1][1][2] &= l_880[2][2]) , p_52), p_52)) < l_799) != p_52) >= (*g_127)))) & l_894[0][0][0]), l_896)))) == l_799))) < 0x95F855CEL) , 0x2F2F7CCAL) , l_962), l_822)), p_53)) == 0xCBL) || p_51) ^ 2L) <= p_51)))) , (**g_415)) & p_51), 7)) || l_799), p_52)), 0xA8L)) , g_179), 0xEFA5L))), p_51)), 2)) != 1UL))))
            { 
                int32_t *l_963 = &g_531;
                int32_t *l_964 = &l_853;
                int32_t *l_965 = &g_531;
                int32_t *l_966 = (void*)0;
                int32_t *l_967 = (void*)0;
                int32_t *l_968 = &l_806[0][0][0];
                int32_t *l_969 = &l_894[2][0][0];
                int32_t *l_970 = &g_531;
                int32_t *l_971 = &l_918;
                int32_t *l_972[5] = {&l_896,&l_896,&l_896,&l_896,&l_896};
                int i;
                g_974++;
                if ((safe_mul_func_int8_t_s_s(p_51, 0x78L)))
                { 
                    int8_t ** const ***l_984 = &g_982[5][2][0];
                    int16_t *l_992 = &g_973;
                    int32_t l_993 = 0L;
                    (*l_963) = (((((+(0xE70D10C6L != ((((safe_add_func_int16_t_s_s(((((*l_984) = g_982[3][0][1]) == l_985[3]) >= (safe_div_func_uint8_t_u_u(l_880[2][2], ((((((safe_div_func_int8_t_s_s((((*l_992) = (l_991 == l_965)) ^ l_894[3][0][0]), l_993)) | l_994) == 0x7AACAB4BL) & 0x71ACCA1C224459FCLL) | l_806[0][0][0]) && 0x5F9CB2C1L)))), l_993)) < 4294967295UL) || p_52) != 0xC7L))) ^ p_53) , 0xF943292555541E7DLL) | g_106) > l_993);
                    (*l_964) &= (p_52 , (safe_lshift_func_int16_t_s_s(l_993, 8)));
                }
                else
                { 
                    return p_51;
                }
                p_51 ^= (l_918 == (((-1L) && 0xCE44F7A02279B2AELL) < 1UL));
                l_853 &= ((*l_963) = 0xCF66B113L);
            }
            else
            { 
                int16_t l_1004 = 0L;
                int64_t **l_1040 = &l_959[3];
                int64_t ***l_1039 = &l_1040;
                if (l_880[0][1])
                { 
                    uint16_t ***l_1001[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int32_t l_1003 = (-1L);
                    int32_t *l_1006 = &l_896;
                    int32_t **l_1005 = &l_1006;
                    int i, j;
                    l_1002[1] = g_999;
                    l_1004 = l_1003;
                    (*l_1005) = ((*g_610) = &l_806[0][0][0]);
                }
                else
                { 
                    int16_t l_1017 = (-1L);
                    int32_t ***l_1025 = &l_863;
                    int32_t ****l_1024[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1025,&l_1025},{(void*)0,(void*)0,&l_1025},{&l_1025,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int32_t *****l_1026[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j;
                    p_51 = (((~((**g_999) = 0x79A7L)) && (l_894[3][0][0] ^= ((*g_1000) |= ((void*)0 != &l_994)))) > (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint64_t_u_u(g_973, (+0xAFL))))));
                    g_531 = (safe_mod_func_int64_t_s_s((((safe_div_func_int16_t_s_s(l_880[2][2], ((+0UL) , p_53))) == (l_1017 == (safe_add_func_uint32_t_u_u(l_880[2][2], (0xA1L != (safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((l_844[3][0] < l_806[0][0][0]), p_52)), p_53))))))) | l_1004), g_709));
                    l_1027 = l_1024[0][2];
                    if (p_51)
                        break;
                }
                (*l_1039) = (((safe_add_func_uint16_t_u_u((p_52 , (g_220.f5 > (+g_248))), ((safe_rshift_func_int8_t_s_s((p_51 || l_1036), 2)) & p_53))) | (safe_mul_func_int16_t_s_s((l_918 || l_1036), (*g_1000)))) , (void*)0);
            }
            for (g_445 = 0; (g_445 <= 3); g_445 += 1)
            { 
                int32_t *l_1041 = (void*)0;
                int32_t *l_1042 = &g_220.f2;
                int32_t *l_1043 = (void*)0;
                int32_t *l_1044 = &l_896;
                int32_t *l_1045[3][2][6] = {{{&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918},{&l_853,&l_918,&l_918,&l_918,&l_853,&l_918}},{{&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918},{&l_853,&l_918,&l_918,&l_918,&l_853,&l_918}},{{&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918,&l_806[0][1][5],&l_918},{&l_853,&l_918,&l_918,&l_918,&l_853,&l_918}}};
                int32_t l_1050 = 4L;
                int i, j, k;
                ++g_1046;
                if (g_105[g_445][(g_445 + 1)])
                    break;
                if (l_1049)
                    continue;
                if (l_806[1][2][0])
                    break;
                if (l_1050)
                    continue;
            }
        }
        l_1036 |= ((((*l_1057) = ((safe_div_func_int64_t_s_s((((g_45 , ((((safe_lshift_func_uint8_t_u_s(7UL, (0x2627F46928D9D001LL >= ((p_53 , (safe_add_func_int64_t_s_s(p_51, g_974))) & ((**g_999) = (l_918 | g_220.f0)))))) <= l_806[0][0][0]) , 0UL) , l_894[3][0][0])) | g_445) || 18446744073709551611UL), g_915)) || (*g_1000))) && 0L) ^ 65532UL);
    }
    ++g_1074;
    return p_53;
}



static const uint32_t  func_54(uint32_t  p_55, union U1  p_56, uint64_t  p_57, int8_t  p_58, uint32_t  p_59)
{ 
    uint16_t l_74[7];
    int32_t *l_83[7][6][3] = {{{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,(void*)0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,(void*)0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,(void*)0,(void*)0},{&g_45.f0,&g_45.f0,&g_45.f0},{(void*)0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,(void*)0,(void*)0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,(void*)0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,(void*)0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0}},{{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,&g_45.f0,&g_45.f0},{&g_45.f0,(void*)0,&g_45.f0},{&g_45.f0,(void*)0,(void*)0},{&g_45.f0,&g_45.f0,&g_45.f0},{(void*)0,&g_45.f0,&g_45.f0}}};
    int16_t *l_84[2][1];
    int32_t l_152[3][3][7] = {{{3L,1L,(-1L),1L,0x1A805FECL,(-1L),9L},{0x3C22A316L,(-1L),2L,0L,3L,3L,0L},{0L,0xD993EA59L,0L,0xDDB0FC3FL,1L,0x592F48CFL,1L}},{{1L,0x6FCCE82BL,1L,0x14431040L,(-1L),(-4L),0x00861F81L},{2L,1L,0x445F9DABL,0x7F640A0AL,3L,0x592F48CFL,2L},{0x2BEE2193L,0x7F640A0AL,1L,3L,0x00861F81L,3L,1L}},{{0x7F640A0AL,0x7F640A0AL,(-4L),1L,0x6FCCE82BL,1L,0x14431040L},{(-1L),1L,(-1L),(-1L),0xDDB0FC3FL,1L,1L},{0L,0x6FCCE82BL,0xDDB0FC3FL,3L,0x6FCCE82BL,0x2BEE2193L,(-1L)}}};
    int32_t l_165 = 0x7ECDA51EL;
    uint64_t *l_169 = &g_105[3][2];
    uint64_t *l_170[1];
    uint32_t l_173[1][2][4];
    uint32_t l_174 = 0xEF6BDF93L;
    struct S0 l_184 = {0x820BL,65526UL,0x3F7F670FL,0UL,65530UL,-6L,0L,8UL};
    uint16_t l_410 = 0x733CL;
    int8_t *l_437 = &g_179;
    uint8_t **l_597[1][5][2] = {{{&g_127,&g_127},{(void*)0,&g_127},{&g_127,(void*)0},{&g_127,&g_127},{&g_127,(void*)0}}};
    uint8_t ***l_596 = &l_597[0][1][0];
    int32_t ** const * const l_613 = &g_610;
    union U1 * const l_774 = (void*)0;
    union U1 * const *l_773 = &l_774;
    uint8_t ****l_779 = &l_596;
    uint8_t *****l_778 = &l_779;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_74[i] = 0x8DBEL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_84[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_170[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_173[i][j][k] = 0x99DA1B10L;
        }
    }
    if ((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((+(g_17 & (l_74[0] || ((l_74[3] == g_17) && (g_85 = (((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s(((((g_45.f0 = p_55) > ((void*)0 == l_83[2][5][1])) , p_57) <= g_17), 9)) >= p_55) | g_17), 5)), p_58)) , p_56.f0), 0x87DEL)) > p_56.f0) & 5UL)))))) , p_58), p_56.f0)), 0x394FL)))
    { 
        uint8_t l_97[4];
        int32_t *l_103 = (void*)0;
        int32_t l_112 = (-3L);
        int16_t *l_125[5];
        int32_t l_141 = 0xB51E1822L;
        int32_t l_145 = 0xFE63FC95L;
        int32_t l_146[1];
        int i;
        for (i = 0; i < 4; i++)
            l_97[i] = 3UL;
        for (i = 0; i < 5; i++)
            l_125[i] = &g_126;
        for (i = 0; i < 1; i++)
            l_146[i] = 0x435A66D9L;
        g_107 = (g_106 |= (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((g_105[2][1] = ((((p_58 , ((void*)0 != g_92[0])) ^ 65534UL) > ((-1L) | ((safe_add_func_uint8_t_u_u(((g_45.f0 = (safe_mul_func_int16_t_s_s((l_97[1] ^= g_85), (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((!(l_103 == l_83[4][1][1])), g_17)), g_17)) < p_58) > 6UL)))) , g_85), 3L)) | g_85))) , g_104)) == g_17), p_55)), 0L)), (-9L))));
        for (g_106 = 0; (g_106 <= 41); ++g_106)
        { 
            uint8_t *l_110 = &l_97[0];
            int32_t l_111 = 3L;
            int32_t l_143 = 0x8C29A95CL;
            int32_t l_147 = 0x6F44E097L;
            int32_t l_148 = 0x47370D03L;
            p_56.f0 |= (((*l_110) = g_105[1][3]) | 0x66L);
            g_45.f0 ^= l_111;
            if (p_55)
                continue;
            --g_113[0][0];
            for (l_112 = 0; (l_112 >= 0); l_112 -= 1)
            { 
                int32_t l_142 = 0xD32DC010L;
                int32_t l_144 = 0x0A1C03B6L;
                int i, j;
                p_56.f0 = g_113[l_112][l_112];
                for (p_58 = 2; (p_58 >= 0); p_58 -= 1)
                { 
                    uint32_t l_123 = 18446744073709551615UL;
                    uint16_t *l_137[4] = {&l_74[2],&l_74[2],&l_74[2],&l_74[2]};
                    int32_t l_139 = 2L;
                    int32_t l_140[2][4][3] = {{{0x53A53F0CL,0x53A53F0CL,0x53A53F0CL},{0L,0x299C26CAL,0L},{0x53A53F0CL,0x53A53F0CL,0x53A53F0CL},{0L,0x299C26CAL,0L}},{{0x53A53F0CL,0x53A53F0CL,0x53A53F0CL},{0L,0x299C26CAL,0L},{0x53A53F0CL,0x53A53F0CL,0x53A53F0CL},{0L,0x299C26CAL,0L}}};
                    int i, j, k;
                    l_111 = ((safe_mul_func_int16_t_s_s((g_85 = (safe_mul_func_int16_t_s_s(g_105[2][1], g_45.f0))), 5L)) == (((((0xFE60FC580C8C66A0LL | ((safe_unary_minus_func_int64_t_s(((((safe_lshift_func_int8_t_s_s((p_57 <= (p_56.f0 = l_123)), 3)) <= (-3L)) > 252UL) != l_123))) != l_123)) , g_124) == l_125[1]) , (void*)0) == g_127));
                    g_45.f0 ^= p_59;
                    p_56.f0 = ((g_17 ^ ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(0UL, 1)) || p_57) & (g_138 = (safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0xBC64L, ((&g_128 != &l_97[1]) == ((1L > 0x04A808FEL) == 0x3E814EA1F162AC31LL)))), 18446744073709551615UL)))), 0x6F017B851E10200DLL)) & p_57)) != 0x0F32L);
                    --g_149;
                }
            }
        }
    }
    else
    { 
lbl_371:
        g_153 ^= (g_45.f0 = l_152[0][2][3]);
    }
    if ((((((((safe_div_func_int16_t_s_s((+(safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((!(p_57 >= (safe_div_func_uint16_t_u_u((~(l_165 < (safe_mod_func_uint32_t_u_u(((*g_127) > (((g_113[0][0] = ((*l_169) = (~0x51E51D77L))) != (&l_152[0][2][3] != &l_152[1][0][0])) ^ ((((safe_lshift_func_int16_t_s_s((((&p_57 == (void*)0) ^ 4294967291UL) , p_59), 3)) < 0x61DA3FA16DD20EC9LL) & p_56.f0) , l_173[0][0][2]))), p_55)))), l_174)))), g_17)), p_59))), g_85)) == 252UL) == g_149) , (void*)0) != l_84[1][0]) , p_59) <= (*g_127)))
    { 
        uint16_t l_175 = 0xAEECL;
        int8_t *l_178 = &g_179;
        int8_t *l_180 = &g_181;
        uint16_t * const l_185 = &l_175;
        int32_t l_244[2][6] = {{(-1L),0x27886430L,(-1L),(-1L),0x27886430L,(-1L)},{(-1L),0x27886430L,(-1L),(-1L),0x27886430L,(-1L)}};
        const int32_t **l_283 = &g_92[1];
        uint32_t l_480 = 0x1CC625B7L;
        int8_t **l_508 = &l_180;
        int8_t l_599[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
        uint8_t l_600 = 255UL;
        union U1 l_605 = {0xD4C58C74L};
        uint32_t l_728[6][6] = {{0x4ECBA330L,9UL,4294967295UL,4294967295UL,9UL,0x4ECBA330L},{0x4ECBA330L,4294967295UL,0xBA8CE425L,9UL,9UL,0xBA8CE425L},{9UL,9UL,0xBA8CE425L,4294967295UL,0x4ECBA330L,0x4ECBA330L},{9UL,4294967295UL,4294967295UL,9UL,0x4ECBA330L,0xBA8CE425L},{0x4ECBA330L,9UL,4294967295UL,4294967295UL,9UL,0x4ECBA330L},{0x4ECBA330L,4294967295UL,0xBA8CE425L,9UL,9UL,0xBA8CE425L}};
        int32_t ****l_748 = &g_439;
        uint8_t ****l_777 = &l_596;
        uint8_t *****l_776 = &l_777;
        int i, j;
        l_175 = ((void*)0 != &g_105[2][1]);
        if (((((*l_180) = ((*l_178) = (safe_rshift_func_int16_t_s_u(1L, 15)))) ^ (safe_add_func_int16_t_s_s(((((((2L == p_57) , g_124) == (l_184 , l_185)) , (0xCFF1D986L && p_55)) == l_175) | l_175), 0UL))) | 0x6397L))
        { 
            int32_t l_200 = 0x4F4C6892L;
            int16_t l_209 = 0x17E7L;
            uint32_t l_257 = 4294967295UL;
            int32_t *l_258 = &l_152[0][2][3];
            uint8_t *l_276 = &g_153;
            uint16_t l_277 = 0x3CCDL;
            int32_t l_279[7] = {0x42704B46L,0x42704B46L,0x42704B46L,0x42704B46L,0x42704B46L,0x42704B46L,0x42704B46L};
            const int8_t *l_290 = &g_179;
            int8_t *l_292[2];
            int i;
            for (i = 0; i < 2; i++)
                l_292[i] = &g_246;
            for (g_138 = 0; (g_138 == (-29)); g_138 = safe_sub_func_uint64_t_u_u(g_138, 1))
            { 
                const int32_t *l_190 = &l_184.f2;
                int64_t *l_275 = &g_107;
                uint32_t *l_278 = &g_208;
                for (g_153 = 0; (g_153 == 35); g_153++)
                { 
                    int32_t l_197 = (-3L);
                    uint64_t l_207 = 0xC7A937C5BF4ECCA7LL;
                    g_92[1] = l_190;
                    if (p_57)
                        continue;
                    p_56.f0 = (g_208 &= ((g_45.f0 = 0xC7996841L) && (safe_add_func_int8_t_s_s(((*l_178) |= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((0x46L & (((p_56 , ((l_197 < (*g_127)) , (safe_sub_func_int32_t_s_s(l_200, (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((l_175 && p_55), l_175)), 10)), 13)))))) && p_58) < (-4L))), 7)), l_207))), 0x7FL))));
                }
                p_56.f0 = l_209;
                for (g_149 = (-1); (g_149 > 57); g_149 = safe_add_func_int32_t_s_s(g_149, 4))
                { 
                    int8_t *l_245 = &g_246;
                    int32_t l_247 = 0x30D3ADD6L;
                    g_248 &= ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(p_58, (safe_lshift_func_uint16_t_u_s((g_220 , (l_209 ^ (((safe_div_func_int8_t_s_s(((!l_175) , ((((safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((!(safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s((((*l_169) &= (safe_div_func_int16_t_s_s(p_55, (((*l_245) = ((safe_mul_func_int8_t_s_s(p_58, (l_244[0][0] = ((((*l_180) ^= (g_179 = (g_45 , l_209))) != 1L) > 1L)))) >= 255UL)) & g_220.f4)))) == g_107))) ^ 0UL) >= 0xA3BF34E4L), g_220.f3)) >= 255UL), (*g_127))) <= 0xA6L) , l_209) >= (*g_127)) || p_55) && p_56.f0), 0xB2L)), l_175))) | p_58) | g_113[0][0]), p_57)) != p_58), 0xB976E15896433254LL)) == l_209) || p_57) && p_55)), 248UL)) ^ l_247) >= p_56.f0))), p_56.f0)))) & g_106), 1)), p_56.f0)) , p_57);
                    g_45.f0 = (2UL && (safe_mod_func_int8_t_s_s(g_179, ((((void*)0 == g_92[0]) < (safe_rshift_func_uint8_t_u_u(((*g_127) = l_200), ((g_104 ^= 18446744073709551606UL) == ((((((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((0x595CL < (*l_190)) & l_175), p_58)), g_220.f1)) , l_257) != p_55) , l_258) != (void*)0) <= p_59))))) && 18446744073709551615UL))));
                }
                g_45.f0 &= ((*l_190) , ((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((*l_278) = ((safe_add_func_int32_t_s_s((l_277 ^= (!(((((safe_sub_func_uint32_t_u_u(1UL, ((((&g_128 != (((((p_55 || (((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s((l_184 , ((safe_div_func_int64_t_s_s(((*l_275) = ((*g_127) ^ 0xB4L)), p_57)) ^ p_57)))) <= g_246) , 65532UL), (-1L))) != (*l_258)) <= p_56.f0)) , p_59) && l_244[1][5]) && g_179) , l_276)) & 0x67L) != 4L) >= (*l_190)))) & 0UL) & g_220.f0) <= g_153) == p_58))), 0x458E618EL)) != (*l_258))) > (*l_258)), p_55)), p_56.f0)), p_58)) < p_59) | 9UL) , (*l_190)));
            }
            if ((1L >= (p_56.f0 = ((*l_258) = (-10L)))))
            { 
                uint8_t l_280 = 3UL;
                int8_t **l_291[6] = {&l_180,&l_180,&l_180,&l_180,&l_180,&l_180};
                int32_t l_328 = 0xD8DC617FL;
                int i;
                l_280++;
                l_283 = &g_92[0];
                for (g_208 = 0; (g_208 == 60); g_208 = safe_add_func_uint64_t_u_u(g_208, 9))
                { 
                    return g_104;
                }
                (*l_258) = p_59;
                if (((safe_mod_func_int32_t_s_s(p_56.f0, (safe_sub_func_uint8_t_u_u((0xF9083A5CL || ((l_290 == (l_292[0] = &g_179)) , p_59)), (safe_mod_func_uint16_t_u_u((((**l_283) & 8UL) <= 8L), g_179)))))) != 255UL))
                { 
                    (*l_283) = g_92[0];
                }
                else
                { 
                    int32_t l_296 = 4L;
                    int32_t **l_302[4][3][4] = {{{&l_83[3][0][2],(void*)0,&l_83[3][0][2],&l_83[3][0][0]},{&l_83[3][0][2],&l_83[3][0][0],&l_83[1][4][0],&l_83[1][4][0]},{&l_83[1][4][0],&l_83[3][0][0],&l_83[1][4][0],&l_83[3][0][0]}},{{&l_83[1][4][0],(void*)0,&l_83[1][4][0],(void*)0},{&l_83[1][4][0],&l_258,&l_83[1][4][0],(void*)0},{&l_83[3][0][2],(void*)0,&l_83[3][0][2],&l_83[3][0][0]}},{{&l_83[3][0][2],&l_83[3][0][0],&l_83[1][4][0],&l_83[1][4][0]},{&l_83[1][4][0],&l_83[3][0][0],&l_83[1][4][0],&l_83[3][0][0]},{&l_83[1][4][0],&l_258,(void*)0,(void*)0}},{{&l_83[1][4][0],&l_83[3][0][0],&l_83[3][0][2],(void*)0},{&l_83[1][4][0],&l_258,&l_83[1][4][0],&l_83[1][4][0]},{&l_83[1][4][0],&l_83[1][4][0],&l_83[3][0][2],(void*)0}}};
                    int32_t ***l_301 = &l_302[3][2][2];
                    int64_t *l_326[1][1][2];
                    uint32_t *l_329 = &g_106;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_326[i][j][k] = &g_107;
                        }
                    }
                    (*l_258) = 0x6452AC40L;
                    (*l_258) &= p_55;
                    l_244[0][1] = ((*l_258) &= (safe_unary_minus_func_uint32_t_u(((l_296 == ((safe_lshift_func_int8_t_s_u(0x2CL, (safe_lshift_func_int16_t_s_u(p_55, 14)))) < ((((&g_92[0] != ((*l_301) = &l_258)) & ((*g_127)--)) <= (safe_sub_func_uint32_t_u_u(4294967286UL, 3UL))) != 0xE0L))) <= p_57))));
                    g_220.f2 = (((*l_169) = (((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(p_58, 3)) || ((*l_329) |= ((safe_mul_func_uint16_t_u_u(((*l_185)++), (safe_mod_func_uint8_t_u_u(250UL, ((safe_mul_func_uint16_t_u_u(p_55, (l_328 = ((g_246 >= (safe_rshift_func_int16_t_s_s((((*g_127) > (&l_180 != ((safe_unary_minus_func_uint16_t_u((safe_mod_func_int64_t_s_s((l_244[0][2] = ((p_55 || g_246) > 1UL)), g_113[0][0])))) , g_327))) < 0L), (**l_283)))) > g_220.f7)))) || 0x73C4L))))) , g_248))), (*g_127))) , g_220.f6) , p_59)) && (**l_283));
                    g_92[0] = (void*)0;
                }
            }
            else
            { 
                uint8_t **l_331 = (void*)0;
                uint8_t ***l_330 = &l_331;
                int32_t l_345 = 1L;
                (*l_330) = &g_127;
                for (g_220.f6 = 0; (g_220.f6 <= 1); g_220.f6 += 1)
                { 
                    int8_t **l_336 = &l_292[g_220.f6];
                    int32_t l_349 = (-4L);
                    int32_t *l_350 = (void*)0;
                    int32_t *l_351 = (void*)0;
                    int32_t *l_352[2][3][1] = {{{(void*)0},{(void*)0},{&l_165}},{{(void*)0},{(void*)0},{&l_165}}};
                    int i, j, k;
                    (*l_258) ^= (0L | ((0x85FCDEA7L > g_220.f4) != ((*l_185) ^= (safe_mod_func_uint32_t_u_u((((*l_336) = l_292[g_220.f6]) == l_276), ((safe_mod_func_uint16_t_u_u(((((*l_169) |= p_56.f0) != 18446744073709551615UL) <= p_59), 0x8510L)) ^ 4UL))))));
                    (*l_258) = (g_220.f2 = ((((**l_336) = ((safe_div_func_int16_t_s_s(g_106, g_208)) , (((g_248 = (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((l_345 == ((((((((safe_mul_func_uint16_t_u_u(((*l_185) = (+((*l_169) = 0UL))), ((g_45 , ((p_56.f0 < (((((l_349 != p_59) ^ (*g_127)) >= (*g_127)) , g_126) || p_58)) <= p_56.f0)) > 0xFCL))) ^ p_59) || l_349) && p_59) && 0xCC0BL) ^ (*l_258)) , l_349) || (-9L))), (**l_283))) ^ (*l_258)), (*l_258)))) , 0x4C1B842B95C57823LL) && g_220.f6))) < l_349) == 0xC2BE2462C373FF6ALL));
                    (*l_283) = g_92[0];
                    if (p_55)
                        break;
                    g_220.f2 = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((!((safe_add_func_uint64_t_u_u((18446744073709551615UL | (l_349 || (safe_rshift_func_int8_t_s_u(0x52L, ((safe_rshift_func_int16_t_s_u((2UL && ((0x19B112354786F5E0LL < (g_138 , ((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((0xA9F9L >= p_56.f0) , p_57), (*l_258))), (*g_127))) ^ 0x933CL) ^ l_349) | p_55))) | p_58)), p_55)) <= p_57))))), 0x216A5DE5303EFB8DLL)) , 254UL)), l_345)) , (void*)0) == (void*)0) , p_58), 3)), g_220.f1));
                }
            }
            (*l_258) ^= (~0x01C4E1B6L);
        }
        else
        { 
            uint32_t l_380 = 0x4F1BE709L;
            int64_t *l_381 = &g_107;
            int32_t l_382 = 0x5A1C4B35L;
            int32_t l_411 = 1L;
            uint32_t l_420 = 0x00632BCCL;
            int32_t l_481[5];
            uint32_t l_501 = 0x3F59EA7CL;
            int i;
            for (i = 0; i < 5; i++)
                l_481[i] = 0x054940DDL;
            if (g_138)
                goto lbl_371;
            if ((((safe_add_func_int8_t_s_s(p_58, ((void*)0 != &g_208))) | ((((((safe_lshift_func_uint16_t_u_u((((l_382 = ((*l_381) ^= ((*g_127) , (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(g_246, l_380)), ((*g_127) = (*g_127))))))) && p_57) > p_58), 13)) , 18446744073709551615UL) | 0xAA068F2FC80797C9LL) & p_57) < p_56.f0) | (**l_283))) != g_85))
            { 
                int32_t *l_385 = &g_220.f5;
                g_220.f5 = (safe_rshift_func_int16_t_s_u(p_55, (((void*)0 != &g_208) | g_85)));
                (*l_283) = l_385;
            }
            else
            { 
                int32_t l_409[7] = {4L,4L,4L,4L,4L,4L,4L};
                int i;
                l_411 &= (p_56.f0 = (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((**l_283) || (((safe_sub_func_int64_t_s_s((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_57, 0xEFL)) > ((((p_57 , ((safe_sub_func_uint8_t_u_u((g_124 != (void*)0), ((*g_127)++))) , (~((((l_380 , 0x3F266FB2199A37B8LL) > g_113[0][0]) < l_382) != g_104)))) , l_409[3]) & (-3L)) != p_55)), l_410)))) || p_56.f0))), p_56.f0)), g_85)) ^ l_409[3]) >= 0x9261BB64D7C8FA31LL)), l_409[1])), g_220.f4)), 0xD0L)), p_57)));
            }
            if ((safe_mod_func_uint16_t_u_u((((p_59 >= ((((**l_283) || (g_414 != &g_415)) ^ (-1L)) , (0x264237AA7128780CLL != ((safe_add_func_uint8_t_u_u(((*g_127) &= ((safe_sub_func_int16_t_s_s((1L >= 0xCDL), (**l_283))) && p_56.f0)), 0L)) ^ (-9L))))) , g_220) , l_420), (-7L))))
            { 
                uint32_t l_421 = 0x82229E3DL;
                int8_t **l_434 = &l_180;
                int32_t l_441 = 0x1A0AEC7CL;
                int32_t l_442 = 0x9371CF61L;
                int32_t l_443[2][6][2] = {{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}}};
                int16_t l_449 = 0x1CFFL;
                int i, j, k;
                --l_421;
                if (g_107)
                    goto lbl_448;
                p_56.f0 |= (safe_div_func_uint32_t_u_u(((((g_220 , p_58) , (((safe_mod_func_uint16_t_u_u((g_220 , g_45.f0), ((+g_246) | 0x0C20C84641AE8198LL))) && p_58) && p_59)) , g_107) < 0xC9B942FDE634C925LL), 0x34DA7758L));
                for (p_56.f0 = 0; (p_56.f0 > (-10)); p_56.f0 = safe_sub_func_uint16_t_u_u(p_56.f0, 1))
                { 
                    int32_t *l_431 = (void*)0;
                    g_92[0] = l_431;
                }
                if ((((p_57 >= ((*l_185) = (((*l_169) = (g_113[0][0] = l_420)) > p_57))) && l_421) > (safe_div_func_uint16_t_u_u((((&p_58 == ((*l_434) = (void*)0)) | p_58) > 0xA42BA53DL), l_411))))
                { 
                    int32_t *****l_440 = &g_438;
                    int32_t l_444[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_444[i] = 0x3CABC87AL;
                    (*l_440) = ((l_421 && (0xF2AC9A69L && (safe_rshift_func_uint16_t_u_s(((*l_434) == (l_437 = ((l_180 != (void*)0) , &p_58))), 5)))) , g_438);
                    g_445++;
                }
                else
                { 
lbl_448:
                    (*l_283) = &l_442;
                    l_449 = p_58;
                    p_56.f0 |= (p_55 <= (safe_div_func_int32_t_s_s(((void*)0 != &g_438), (safe_div_func_uint32_t_u_u(l_382, (safe_add_func_uint8_t_u_u((**g_415), (((-5L) == (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((l_411 || 9L), 4)) == g_220.f7), l_420)) , 0x0628L), 5))) & 0x3947L))))))));
                    p_56.f0 |= (0L > 0x6835L);
                }
            }
            else
            { 
                int16_t l_467[4][7];
                uint32_t *l_497 = &l_420;
                uint16_t *l_498[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t *l_499[5];
                int32_t l_500 = 0xE6E4EF25L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_467[i][j] = 0xF275L;
                }
                for (i = 0; i < 5; i++)
                    l_499[i] = &g_106;
                g_462--;
                p_56.f0 ^= (p_59 <= 6L);
                l_411 &= ((g_105[2][1] == (0UL & (safe_rshift_func_uint8_t_u_u(l_467[3][1], (safe_rshift_func_uint16_t_u_s(((g_45 , (g_107 = (((((p_56.f0 = (g_220.f2 &= (**l_283))) == g_248) && (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_int64_t_s_s(((safe_div_func_int8_t_s_s((((p_56.f0 = ((0xD49EFBB6DA1A4E36LL > (-5L)) < l_480)) >= (**l_283)) | g_149), 0x35L)) | (**l_283)), g_220.f0)) && 0x15C6L), p_58)), 5L)), g_138))) < (**l_283)) ^ l_481[4]))) , 0xDD2FL), 9)))))) > 0UL);
                if (l_382)
                    goto lbl_371;
                l_244[1][2] &= (safe_lshift_func_uint16_t_u_s((p_57 && (safe_add_func_uint32_t_u_u((l_500 ^= ((((g_45 , (((*l_497) = (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(p_55, (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((0x2CE6L >= ((((safe_lshift_func_int8_t_s_u(g_113[0][0], 7)) > g_220.f5) | (!(**l_283))) && 0x38C3L)) || p_56.f0) < p_59) < 0x62L), 0xA2L)), p_57)))) || p_57) > 4294967295UL), l_411))) != 0x414D7540L)) , l_498[4]) == g_124) | 0x7E81L)), l_501))), l_467[3][1]));
            }
        }
        l_83[3][4][1] = &l_244[0][0];
        if (((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((((p_59 , (((((safe_mul_func_int8_t_s_s(((l_184 , &g_179) == (g_45 , &p_58)), g_138)) ^ (((*l_508) = l_180) != &p_58)) >= 1L) < 0xF4L) & p_55)) && g_113[0][0]) || p_59) <= 4294967288UL), p_56.f0)) == p_55), p_57)) < p_59))
        { 
            int8_t ***l_510 = (void*)0;
            int8_t ****l_509 = &l_510;
            int32_t ****l_513 = &g_439;
            int32_t *****l_514[6] = {&l_513,&l_513,&g_438,&l_513,&l_513,&g_438};
            uint8_t l_529 = 0UL;
            uint16_t *l_539[1];
            uint16_t *l_541 = &l_175;
            int64_t l_548[4][6] = {{0x0DF496ADD58D6CB4LL,0x0DF496ADD58D6CB4LL,0xADE2B61A82ABD4E1LL,0x858962469883E8B3LL,0xADE2B61A82ABD4E1LL,0x0DF496ADD58D6CB4LL},{0xADE2B61A82ABD4E1LL,0x61F93E09AF12FD12LL,0x858962469883E8B3LL,0x858962469883E8B3LL,0x61F93E09AF12FD12LL,0xADE2B61A82ABD4E1LL},{0x0DF496ADD58D6CB4LL,0xADE2B61A82ABD4E1LL,0x858962469883E8B3LL,0xADE2B61A82ABD4E1LL,0x0DF496ADD58D6CB4LL,0x0DF496ADD58D6CB4LL},{(-10L),0xADE2B61A82ABD4E1LL,0xADE2B61A82ABD4E1LL,(-10L),0x61F93E09AF12FD12LL,(-10L)}};
            union U1 l_625[4] = {{-1L},{-1L},{-1L},{-1L}};
            int64_t l_626[6][4];
            int i, j;
            for (i = 0; i < 1; i++)
                l_539[i] = (void*)0;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 4; j++)
                    l_626[i][j] = 8L;
            }
            (*l_283) = &l_152[0][2][3];
            (*l_509) = &l_508;
            if ((safe_mul_func_int8_t_s_s(((&g_439 != (g_438 = l_513)) <= (g_439 == (((0xD9L >= (p_58 <= p_57)) != ((1UL != g_445) != 0UL)) , g_439))), (**g_415))))
            { 
                int32_t l_538[1];
                int32_t l_547 = 0x1CA3E671L;
                int i;
                for (i = 0; i < 1; i++)
                    l_538[i] = 0x526EBEF5L;
                for (l_184.f5 = 0; (l_184.f5 <= 1); l_184.f5 += 1)
                { 
                    union U1 **l_515 = (void*)0;
                    union U1 *l_517 = &g_45;
                    union U1 **l_516 = &l_517;
                    int32_t l_518 = 0x89607EE1L;
                    int32_t ****l_530 = &g_439;
                    uint16_t **l_540 = &l_539[0];
                    uint32_t *l_546[5][1];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_546[i][j] = &g_208;
                    }
                    (*l_516) = &g_45;
                    if (l_518)
                        break;
                    g_220.f5 = ((((safe_div_func_uint8_t_u_u(l_175, p_56.f0)) & g_126) != ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((void*)0 != &g_439), ((0UL == (safe_rshift_func_int16_t_s_u((((l_529 == p_58) , l_530) == l_530), p_59))) || g_153))), 0x0DBBL)), p_57)) == g_531)) | 0xA647E094L);
                    l_548[1][5] &= (((safe_sub_func_uint32_t_u_u(p_58, 0UL)) != ((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_55, (l_538[0] <= ((((*l_540) = l_539[0]) == l_541) >= (safe_mod_func_uint32_t_u_u((l_547 = (safe_lshift_func_int8_t_s_u(((0x7F434440L == g_138) & p_59), l_538[0]))), (-1L))))))), p_59)) <= p_59)) <= g_220.f7);
                }
            }
            else
            { 
                int32_t *l_554 = &g_220.f2;
                const union U1 l_641 = {0x51F7AB71L};
lbl_607:
                (*l_283) = &l_152[1][0][0];
                for (p_59 = 0; (p_59 == 29); ++p_59)
                { 
                    uint8_t l_551 = 9UL;
                    uint32_t **l_577 = (void*)0;
                    uint32_t *l_579 = &g_208;
                    uint32_t **l_578 = &l_579;
                    const uint32_t *l_581 = &g_582;
                    const uint32_t **l_580 = &l_581;
                    uint8_t ****l_598 = &l_596;
                    int8_t l_606 = (-8L);
                    ++l_551;
                    g_92[0] = l_554;
                    (*l_554) &= (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((p_56.f0 && (safe_mul_func_int16_t_s_s(p_56.f0, ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((1L == (((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(249UL, (safe_lshift_func_uint8_t_u_s(((((*l_578) = &g_106) != ((*l_580) = &g_208)) != 1UL), 7)))) != 1L), p_56.f0)) > 0x0CA4C5633289BB32LL), 0xA6F4L)) >= 18446744073709551612UL), p_57)) != p_55) >= 0x546160F0D914CC25LL)) > g_246), 7)), p_56.f0)) > p_55)))) >= (**g_415)), 0xDCL)), p_57)), (**g_415)));
                    g_220.f5 |= (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(g_153, (((void*)0 == l_554) != (safe_add_func_uint8_t_u_u((***g_414), (((l_184 , g_149) > (safe_unary_minus_func_uint32_t_u(((((((*l_554) = (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((((*l_598) = l_596) != &g_415), g_179)) ^ 0UL), l_599[4])), p_55))) & 0x2224L) ^ p_58) >= p_55) == g_128)))) ^ l_600)))))) & p_59), l_551));
                    (*l_554) = (safe_rshift_func_uint8_t_u_s(((*g_127) ^= 0UL), ((safe_mod_func_uint8_t_u_u((g_17 > (g_220.f4 = (((l_605 , (((p_56 , (void*)0) != (void*)0) == g_113[0][0])) < l_606) ^ p_55))), p_59)) , p_57)));
                }
                if (l_410)
                    goto lbl_607;
                if (((((safe_lshift_func_uint16_t_u_s(((void*)0 == &g_107), (*l_554))) & ((&l_83[1][4][0] == (g_612 = g_610)) & ((&l_283 == l_613) , p_55))) , (***l_613)) > g_445))
                { 
                    int32_t ***l_622 = &g_610;
                    union U1 l_623 = {0x92F6809EL};
                    union U1 *l_624 = &l_605;
                    p_56.f0 |= (safe_lshift_func_uint8_t_u_u(((((*g_127) |= ((0xD2L & (safe_rshift_func_int8_t_s_s(((*l_554) > (safe_div_func_uint16_t_u_u((g_220.f7 = (safe_add_func_int8_t_s_s((l_622 != (*l_513)), ((((((*l_624) = l_623) , l_625[0]) , &l_622) != &g_439) || 0x33L)))), 0xE155L))), 0))) != l_626[2][2])) | 6L) , (***l_613)), 4));
                    (*l_554) ^= ((**g_610) = (((safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint32_t_u_u((((((((safe_mod_func_int64_t_s_s(0xBE693E5A8500BBFCLL, (***l_613))) , &l_185) != (void*)0) | (safe_unary_minus_func_int8_t_s(p_57))) != (safe_mod_func_uint16_t_u_u(p_59, g_113[0][0]))) && 0xA3A8L) || 0x61E7E0BCA16BB590LL), p_59)) >= p_59) == p_57) ^ p_55), p_57)) && p_59) > g_128));
                }
                else
                { 
                    int32_t l_636 = 4L;
                    int32_t *l_652 = &g_45.f0;
                    const int32_t *** const *l_659 = &g_643;
                    const int32_t *** const **l_658 = &l_659;
                    (***l_613) ^= (l_636 < (5UL == (safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(l_636, ((*g_610) != l_554))) , (l_641 , 0x91L)), g_153))));
                    (**g_610) = (p_57 < ((((g_642 = g_642) == &g_439) > ((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((0xB4L != ((safe_mod_func_uint64_t_u_u((1UL >= ((*l_554) ^= ((safe_rshift_func_int16_t_s_s(((-4L) == (l_554 == (**l_613))), 10)) == 0x38708149L))), p_59)) , 0x9EL)), 0x4F75L)), 0xD7ACL)) == g_220.f7)) != p_57));
                    (*g_612) = l_652;
                    p_56.f0 = (safe_div_func_uint64_t_u_u((0xFC3F0E1A78ACB78ELL <= (g_104 |= (((*l_437) = p_58) ^ (+((safe_add_func_int8_t_s_s(((((((void*)0 != l_658) , 8UL) > (g_220 , (!(safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((*l_169)++), ((((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_652) = ((safe_sub_func_int32_t_s_s(0L, g_208)) <= p_55)), 9)), p_59)) || 1UL), (*l_554))) , p_55) == 7L) > 0x77CB2F56605E3675LL))), p_59))))) , &g_181) != (*l_508)), 4L)) != 0xC66BE875L))))), g_220.f0));
                    (**l_613) = (**l_613);
                }
            }
        }
        else
        { 
            int32_t l_688 = 0xC6C37D7BL;
            int32_t l_729[4] = {0x3DA883B8L,0x3DA883B8L,0x3DA883B8L,0x3DA883B8L};
            uint64_t l_743 = 0x7E12FFE4FF951960LL;
            int32_t l_744[3][5] = {{0x7542D5A4L,5L,0x837A16BEL,5L,0x7542D5A4L},{0x7542D5A4L,5L,0x837A16BEL,5L,0x7542D5A4L},{0x7542D5A4L,5L,0x837A16BEL,5L,0x7542D5A4L}};
            int16_t l_783[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_783[i] = 0xDD53L;
            if ((safe_add_func_uint8_t_u_u(((((g_113[0][0] , ((g_220 , (safe_sub_func_int32_t_s_s((+0xAAF8EA58L), (p_57 != (((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((g_531 != (safe_div_func_uint16_t_u_u(((g_107 > g_246) , 0x2BB6L), p_55))), g_106)) >= 2L), 0L)) && g_128) ^ p_59) > l_688), p_56.f0)) | 0xD409L) > p_56.f0))))) , p_56)) , 0xF69EDDB6L) && p_59) , 0xEFL), (***g_414))))
            { 
                int32_t *l_698 = &l_688;
                int32_t **l_697 = &l_698;
                int32_t *l_700 = &g_220.f6;
                int32_t **l_699 = &l_700;
                uint32_t *l_703 = &g_208;
                int32_t l_704[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_704[i] = 0x4B54BD4BL;
                (*g_611) |= (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((*l_703) = (g_85 ^ ((p_55 < (((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*l_697) = (void*)0) == ((*l_699) = &l_165)), (((safe_mul_func_uint8_t_u_u(((void*)0 != &l_244[0][2]), 1L)) && p_58) > p_55))), 0UL)) , p_58) == l_688)) && p_55))), 0x1570682FL)) , 0UL), l_704[2]));
                for (g_220.f0 = 18; (g_220.f0 > 15); g_220.f0--)
                { 
                    int32_t *l_707 = &l_244[0][0];
                    int32_t l_708[6] = {0L,0L,0L,0L,0L,0L};
                    int i;
                    (**l_613) = l_707;
                    if ((*l_707))
                        break;
                    if (p_55)
                        break;
                    ++g_709;
                }
            }
            else
            { 
                return p_57;
            }
            if ((((safe_add_func_uint64_t_u_u(((++(**g_415)) , (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(g_149, p_57)), ((safe_div_func_uint8_t_u_u(255UL, (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((***l_613) <= 0xC23CAF97A20D50B5LL), ((l_729[3] = l_728[5][3]) | (7L == p_56.f0)))) & l_688), l_688)))) , 1L))), l_688))), p_56.f0)) , (void*)0) != (**l_613)))
            { 
                union U1 l_733 = {0L};
                l_744[1][0] ^= (((safe_sub_func_int8_t_s_s((((*l_178) ^= p_57) != l_729[3]), g_732)) , l_733) , ((safe_unary_minus_func_int64_t_s((l_599[2] , ((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(g_126, (((safe_div_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((**g_415), 0xA4L)) > 0xC73475F9A243E83BLL) >= p_55) , p_55), l_743)) == g_248) > p_57))) == l_729[3]), p_56.f0)) <= 0L)))) & g_220.f5));
            }
            else
            { 
                uint64_t l_770 = 1UL;
                for (g_126 = 11; (g_126 <= (-13)); --g_126)
                { 
                    uint64_t l_747 = 18446744073709551612UL;
                    int32_t *** const l_751 = (void*)0;
                    int32_t *** const *l_750 = &l_751;
                    int32_t *** const **l_749 = &l_750;
                    (***l_613) &= l_747;
                    (*g_611) = (l_748 != ((*l_749) = &g_439));
                    if (l_729[3])
                        continue;
                    if (l_743)
                        break;
                }
                for (g_45.f0 = 0; (g_45.f0 >= 23); g_45.f0 = safe_add_func_uint32_t_u_u(g_45.f0, 7))
                { 
                    int32_t l_754 = 0xE54420F2L;
                    const uint8_t ** const **l_755[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_755[i] = (void*)0;
                    (*l_283) = &l_729[3];
                    if (l_754)
                        break;
                    if (p_58)
                        continue;
                    (**g_610) = (l_755[0] == &g_414);
                }
                if (p_56.f0)
                { 
                    uint8_t **l_756[3];
                    uint32_t *l_757 = &l_728[5][3];
                    uint8_t ** const **l_771 = &g_414;
                    const int32_t l_772 = 0xA322DBA7L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_756[i] = &g_127;
                    p_56.f0 = ((*g_611) = (((g_128 <= l_744[1][0]) > (8UL && (g_105[0][6] |= g_220.f5))) , ((*g_414) != ((*l_596) = l_756[1]))));
                    l_744[0][2] &= ((((*l_757) = 0x948ECBC2L) <= ((safe_sub_func_uint32_t_u_u(p_58, 0x06790BA2L)) & ((*g_127) < ((p_56 , (safe_div_func_uint64_t_u_u(18446744073709551615UL, ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((p_57 <= p_59), (**g_415))), p_57)), 12)), 12)) ^ 0L)))) || l_770)))) , (**g_610));
                    (*l_771) = &g_415;
                    (***l_613) &= l_772;
                }
                else
                { 
                    union U1 * const **l_775 = &l_773;
                    (*l_775) = l_773;
                }
            }
            for (l_600 = 0; (l_600 <= 2); l_600 += 1)
            { 
                int32_t *l_782 = (void*)0;
            }
        }
    }
    else
    { 
        int16_t l_788 = 0L;
        p_56.f0 ^= ((safe_add_func_uint64_t_u_u((l_788 && ((***l_613) <= ((g_220.f0 |= (safe_mod_func_int8_t_s_s(g_181, (safe_mul_func_uint8_t_u_u(251UL, 1UL))))) & (***l_613)))), (g_104 = 9UL))) <= g_220.f1);
    }
    return g_149;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_105[i][j], "g_105[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    transparent_crc(g_220.f5, "g_220.f5", print_hash_value);
    transparent_crc(g_220.f6, "g_220.f6", print_hash_value);
    transparent_crc(g_220.f7, "g_220.f7", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1134[i].f0, "g_1134[i].f0", print_hash_value);

    }
    transparent_crc(g_1191, "g_1191", print_hash_value);
    transparent_crc(g_1252, "g_1252", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1287[i], "g_1287[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1296[i][j][k], "g_1296[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1305, "g_1305", print_hash_value);
    transparent_crc(g_1384, "g_1384", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1510[i], "g_1510[i]", print_hash_value);

    }
    transparent_crc(g_1534, "g_1534", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1820, "g_1820", print_hash_value);
    transparent_crc(g_1837, "g_1837", print_hash_value);
    transparent_crc(g_1955, "g_1955", print_hash_value);
    transparent_crc(g_1997, "g_1997", print_hash_value);
    transparent_crc(g_2322, "g_2322", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
