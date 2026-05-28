// SPDX-License-Identifier: MIT
// cctest_csmith_23f07668.c --- cctest case csmith_23f07668 (csmith seed 602961512)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4635eadb */
/* @exp_ticks 0x3ca5 */

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

// Options:   -s 602961512 -o /tmp/csmith_gen_b4sb8d8f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
};

union U1 {
   const int32_t  f0;
   uint64_t  f1;
   const uint16_t  f2;
};

union U2 {
   int64_t  f0;
   struct S0  f1;
};

union U3 {
   uint32_t  f0;
   const int32_t  f1;
   int64_t  f2;
   int32_t  f3;
};


static uint32_t g_22 = 1UL;
static uint32_t g_24 = 18446744073709551615UL;
static int64_t g_27[4][4] = {{1L,4L,2L,2L},{5L,5L,1L,2L},{1L,4L,1L,1L},{1L,1L,1L,1L}};
static union U3 g_39[2][1] = {{{18446744073709551615UL}},{{18446744073709551615UL}}};
static int16_t g_48[1] = {0x7519L};
static int64_t g_59 = (-6L);
static union U2 g_62 = {1L};
static uint16_t g_90 = 7UL;
static uint8_t g_93 = 1UL;
static struct S0 g_94[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
static uint32_t g_143 = 0xD1021D52L;
static uint32_t g_145[4][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
static int64_t g_162 = 0x9696208B9B0A51E9LL;
static int16_t g_171 = 0xA4E8L;



static int32_t  func_1(void);
static const uint32_t  func_7(uint16_t  p_8, int8_t  p_9);
static const union U1  func_10(uint32_t  p_11, struct S0  p_12, int32_t  p_13, uint8_t  p_14);
static uint32_t  func_15(uint32_t  p_16);




static int32_t  func_1(void)
{ 
    int32_t l_4 = (-5L);
    union U2 l_21 = {0x799333C7D24B5E49LL};
    int32_t l_181[4][5][5] = {{{0L,0x59E5908BL,0x59E5908BL,0L,0L},{0xA41A2CE7L,0L,0xA41A2CE7L,0L,0xA41A2CE7L},{0L,0L,0x59E5908BL,0x59E5908BL,0L},{0x98B9DDC8L,0L,0x98B9DDC8L,0L,0x98B9DDC8L},{0L,0x59E5908BL,0x59E5908BL,0L,0L}},{{0xA41A2CE7L,0L,0xA41A2CE7L,0L,0xA41A2CE7L},{0L,0L,0x59E5908BL,0x59E5908BL,0L},{0x98B9DDC8L,0L,0x98B9DDC8L,0L,0x98B9DDC8L},{0L,0x59E5908BL,0x59E5908BL,0L,0L},{0xA41A2CE7L,0L,0xA41A2CE7L,0L,0xA41A2CE7L}},{{0L,0L,0x59E5908BL,0x59E5908BL,0L},{0x98B9DDC8L,0L,0x98B9DDC8L,0L,0x98B9DDC8L},{0L,0x59E5908BL,0x59E5908BL,0L,0L},{0xA41A2CE7L,0L,0xA41A2CE7L,0L,0xA41A2CE7L},{0L,0L,0x59E5908BL,0x59E5908BL,0L}},{{0x98B9DDC8L,0L,0x98B9DDC8L,0L,0x98B9DDC8L},{0L,0x59E5908BL,0x59E5908BL,0L,0L},{0xA41A2CE7L,0L,0xA41A2CE7L,0L,0xA41A2CE7L},{0L,0L,0x59E5908BL,0x59E5908BL,0L},{0x98B9DDC8L,0L,0x98B9DDC8L,0L,0x98B9DDC8L}}};
    int i, j, k;
    l_181[1][4][0] &= (safe_mul_func_uint16_t_u_u(l_4, ((safe_add_func_uint16_t_u_u(l_4, (((((func_7((func_10((g_93 = func_15((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((0L && (l_21 , g_22)) || 0xE2L), 0L)), 8)) && g_22) , 0x7C57F39CL))), g_94[1], g_39[0][0].f0, g_39[0][0].f3) , 0x82BAL), l_4) <= l_4) != g_39[0][0].f3) <= 65535UL) , g_39[0][0]) , g_171))) , g_90)));
    return g_27[3][0];
}



static const uint32_t  func_7(uint16_t  p_8, int8_t  p_9)
{ 
    int64_t l_168 = 6L;
    int32_t l_178 = 3L;
    uint16_t l_179 = 0xDF1CL;
    int32_t l_180 = 0x61F3FAF8L;
    l_180 &= ((safe_mul_func_uint8_t_u_u((l_168 ^= 8UL), (0x04F71531L == ((safe_div_func_int8_t_s_s((g_171 = 0xE5L), (safe_add_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_178 > 0x2B23L) <= l_179), p_8)), g_94[1].f0)) || l_178) | p_8) ^ l_178), l_179)))) <= 0xF7C9L)))) == p_8);
    return g_162;
}



static const union U1  func_10(uint32_t  p_11, struct S0  p_12, int32_t  p_13, uint8_t  p_14)
{ 
    union U2 l_95 = {1L};
    union U3 l_114[1] = {{0x83BB0DECL}};
    int32_t l_115 = (-1L);
    int32_t l_163[1];
    struct S0 l_164[5][3][4] = {{{{0xC8L},{247UL},{0UL},{6UL}},{{0UL},{6UL},{6UL},{0UL}},{{254UL},{0UL},{253UL},{0xF6L}}},{{{0x86L},{0x6AL},{4UL},{0x9AL}},{{251UL},{0x53L},{0x39L},{0x9AL}},{{0xD7L},{0x6AL},{0UL},{0xF6L}}},{{{1UL},{0UL},{0x86L},{0UL}},{{0x53L},{6UL},{0UL},{6UL}},{{0x86L},{247UL},{1UL},{253UL}}},{{{1UL},{0x53L},{0UL},{4UL}},{{249UL},{255UL},{0UL},{0x39L}},{{249UL},{0xF6L},{0UL},{0UL}}},{{{1UL},{0x39L},{1UL},{0x86L}},{{0x86L},{0x06L},{0UL},{0UL}},{{0x53L},{0x53L},{0x86L},{1UL}}}};
    const union U1 l_165 = {0xCBCE0EE9L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_163[i] = 0x7BD33CEAL;
    if ((((l_95 , (safe_mul_func_int16_t_s_s((l_115 = (safe_rshift_func_int8_t_s_u(0xFEL, ((l_95.f0 && ((g_93 = ((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u((((((safe_mul_func_uint8_t_u_u((p_14++), (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(((g_62 , l_114[0]) , (-1L)), l_114[0].f0)) == l_114[0].f1) | p_13), l_114[0].f1)))) || l_95.f0) , 0x7115L) >= p_13) & l_114[0].f3), 5)) && 0xD0L) >= p_13) && g_39[0][0].f0), 2)) & 0x04L) && g_90), g_24)) | g_90)) < p_12.f0)) ^ l_114[0].f1)))), g_39[0][0].f3))) <= g_39[0][0].f0) >= 0UL))
    { 
        uint32_t l_129 = 3UL;
        uint8_t l_130 = 0UL;
        uint16_t l_131 = 0UL;
        struct S0 l_132 = {255UL};
        for (l_95.f1.f0 = (-7); (l_95.f1.f0 >= 43); l_95.f1.f0 = safe_add_func_uint16_t_u_u(l_95.f1.f0, 8))
        { 
            l_131 = (!((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_14, 3)) & ((((safe_rshift_func_uint16_t_u_s(3UL, g_27[3][0])) & (((((((safe_div_func_uint64_t_u_u((l_129 = p_12.f0), p_11)) , l_114[0]) , g_22) | (-1L)) < l_115) > g_22) <= l_130)) <= 0xC5D866FAEDDA491FLL) > p_14)), p_11)), 0xD364FFC8L)) , g_48[0]));
            if (p_12.f0)
                continue;
        }
        g_62.f1 = l_132;
    }
    else
    { 
        for (g_93 = 0; (g_93 == 27); g_93++)
        { 
            uint8_t l_160 = 0x49L;
            int32_t l_161 = (-1L);
            for (p_14 = 29; (p_14 > 35); p_14++)
            { 
                int32_t l_144 = 0x7E7A5B98L;
                g_145[3][1] |= (((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s(p_12.f0, (g_143 &= (safe_lshift_func_int8_t_s_u((0xDC10L && (g_48[0] ^= p_12.f0)), 6))))), g_22)) > 0x98L) , l_144);
                l_161 = (safe_lshift_func_uint16_t_u_u(((!(safe_rshift_func_int8_t_s_u(g_90, ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(0xC8L, 4)), (0xD6D4L >= (+(g_94[1].f0 == 0UL))))) == 1L), p_14)) >= l_160)))) ^ g_27[3][0]), 6));
            }
            if (l_115)
                continue;
        }
        l_163[0] |= (l_115 = (g_162 = 1L));
    }
    p_12 = l_164[0][2][1];
    return l_165;
}



static uint32_t  func_15(uint32_t  p_16)
{ 
    int64_t l_23 = 1L;
    int32_t l_34[2][2];
    int32_t l_58 = 1L;
    const uint16_t l_68 = 0xD735L;
    struct S0 l_74 = {252UL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_34[i][j] = 0x51807356L;
    }
    l_34[1][1] = (((g_27[3][0] ^= (g_24++)) > (safe_rshift_func_int16_t_s_u(((((l_23 ^ ((((safe_lshift_func_uint16_t_u_s(p_16, 14)) , (safe_rshift_func_int16_t_s_u(g_22, 1))) == (((0x7FC7DF39F3C5A4A1LL || 6L) <= g_22) , 0x4F6CL)) < 0xA6L)) && g_22) & p_16) <= 4294967291UL), g_22))) > g_22);
    g_48[0] = (p_16 < (0xD8L < ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_39[0][0] , (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((g_39[1][0] , g_39[0][0].f1), g_27[3][0])), g_27[2][3])), 18446744073709551610UL)), p_16))), l_23)), l_34[1][1])) && l_34[0][1])));
    if ((safe_mod_func_uint32_t_u_u((g_59 = (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u((l_58 = (((safe_lshift_func_uint8_t_u_u(g_39[0][0].f3, (((((((g_27[3][3] = 0x005767A065BBD97CLL) != ((l_34[1][1] = (((((p_16 , 0x67B3L) != g_24) & 1UL) >= g_48[0]) , 1UL)) <= g_48[0])) & 6L) == g_39[0][0].f3) , g_39[0][0].f0) >= g_48[0]) == p_16))) , 0x1AL) != g_24)))), p_16))), p_16)))
    { 
        l_34[1][1] = (-1L);
    }
    else
    { 
        uint16_t l_67 = 0x0705L;
        int32_t l_84 = 0xD8B2F938L;
        int32_t l_89[1][2][4] = {{{0x60987955L,0x60987955L,(-1L),0x60987955L},{0x60987955L,0xCBA47412L,0xCBA47412L,0x60987955L}}};
        int i, j, k;
        l_34[1][1] ^= (safe_lshift_func_uint8_t_u_s(g_39[0][0].f1, (p_16 ^ p_16)));
        if ((l_67 ^= (g_62 , (safe_mul_func_int8_t_s_s(0xFCL, (safe_mod_func_uint16_t_u_u(g_24, (l_23 , 0x887EL))))))))
        { 
            const uint8_t l_83[4] = {255UL,255UL,255UL,255UL};
            int i;
            l_84 = ((l_68 != (safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((+(l_74 , (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((((((l_34[0][1] < (~(safe_sub_func_uint8_t_u_u((~(p_16 != 0xB3L)), 9UL)))) | 0L) & 0xE3L) , p_16) > g_22) || g_27[0][0]) <= l_83[1]), 0x804EL)), g_39[0][0].f0)))), 0x71534BB8EBACA85ELL)), 5))) <= 8L);
            for (g_24 = 0; (g_24 == 42); g_24++)
            { 
                if (l_84)
                    break;
            }
        }
        else
        { 
            for (l_23 = 0; (l_23 > (-19)); l_23 = safe_sub_func_uint8_t_u_u(l_23, 1))
            { 
                if (l_23)
                    break;
            }
        }
        --g_90;
    }
    return p_16;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_27[i][j], "g_27[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_39[i][j].f0, "g_39[i][j].f0", print_hash_value);
            transparent_crc(g_39[i][j].f1, "g_39[i][j].f1", print_hash_value);
            transparent_crc(g_39[i][j].f3, "g_39[i][j].f3", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_94[i].f0, "g_94[i].f0", print_hash_value);

    }
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_145[i][j], "g_145[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
