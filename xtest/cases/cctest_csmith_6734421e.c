// SPDX-License-Identifier: MIT
// cctest_csmith_6734421e.c --- cctest case csmith_6734421e (csmith seed 1731478046)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa3ed7d23 */

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

// Options:   -s 1731478046 -o /tmp/csmith_gen_drart_15/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   const uint8_t  f1;
   int16_t  f2;
   int32_t  f3;
   const uint8_t  f4;
   int8_t  f5;
};

struct S1 {
   int8_t  f0;
   uint8_t  f1;
   const int8_t  f2;
   uint64_t  f3;
   int32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S1  f0;
};
#pragma pack(pop)

struct S3 {
   const uint8_t  f0;
};

union U4 {
   const uint16_t  f0;
   const struct S2  f1;
};

union U5 {
   int32_t  f0;
   uint16_t  f1;
};


static int32_t g_2 = 0x3F7BF48CL;
static struct S0 g_13 = {0xB61B583DL,0x0EL,-1L,0x31615E82L,0xA9L,0xADL};
static struct S3 g_27 = {0UL};
static uint32_t g_42 = 3UL;
static struct S2 g_56 = {{0x00L,0xB9L,-4L,18446744073709551615UL,0xB52D9B6EL}};
static int32_t g_61 = 0x8827C80CL;
static uint64_t g_68 = 0UL;
static int64_t g_82[2][4] = {{0x3E41A78517817F25LL,0x3E41A78517817F25LL,0x3E41A78517817F25LL,0x3E41A78517817F25LL},{0x3E41A78517817F25LL,0x3E41A78517817F25LL,0x3E41A78517817F25LL,0x3E41A78517817F25LL}};
static union U4 g_90 = {0x4EC2L};
static int32_t g_121[1] = {0xAC0DF8BEL};
static int16_t g_155 = 1L;
static union U5 g_159 = {0x7FB4E0D6L};



static union U5  func_1(void);
static uint32_t  func_7(struct S0  p_8, uint16_t  p_9, int32_t  p_10, int32_t  p_11, union U4  p_12);
static int32_t  func_14(uint8_t  p_15);
static uint64_t  func_16(uint8_t  p_17);




static union U5  func_1(void)
{ 
    int64_t l_84 = (-9L);
    struct S1 l_154[2][5][4] = {{{{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{-3L,1UL,-1L,18446744073709551609UL,1L}},{{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0xBFL,0UL,7L,0UL,0L},{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L}},{{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0xA2L,252UL,0x19L,1UL,0x8830C378L}},{{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{-3L,1UL,-1L,18446744073709551609UL,1L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L}},{{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0xBFL,0UL,7L,0UL,0L},{-3L,1UL,-1L,18446744073709551609UL,1L},{-3L,1UL,-1L,18446744073709551609UL,1L}}},{{{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{-3L,1UL,-1L,18446744073709551609UL,1L}},{{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0xBFL,0UL,7L,0UL,0L},{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L}},{{0xA2L,252UL,0x19L,1UL,0x8830C378L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0xA2L,252UL,0x19L,1UL,0x8830C378L}},{{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{-3L,1UL,-1L,18446744073709551609UL,1L},{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L}},{{0x36L,0x87L,7L,0x471D0ACD3375787ELL,0L},{0L,5UL,7L,0xAAE0F3F866D6690DLL,8L},{0xBFL,0UL,7L,0UL,0L},{0xBFL,0UL,7L,0UL,0L}}}};
    struct S0 l_158[1] = {{0xA40BB980L,4UL,0x7188L,0xCF759CC7L,0xFAL,9L}};
    int i, j, k;
    for (g_2 = 0; (g_2 <= (-14)); --g_2)
    { 
        int32_t l_122[5];
        union U4 l_123 = {0x09A2L};
        int32_t l_153 = 0xDBC3B145L;
        int i;
        for (i = 0; i < 5; i++)
            l_122[i] = 0x3C3AE4ACL;
        l_153 |= (safe_div_func_uint32_t_u_u(func_7(g_13, g_13.f0, (g_121[0] = func_14(((func_16(g_13.f2) | l_84) | 8UL))), l_122[0], l_123), l_122[1]));
    }
    g_121[0] &= (g_2 ^= (((((l_154[0][3][3] , g_155) | 0xC2L) & (safe_mul_func_uint16_t_u_u(l_154[0][3][3].f0, g_13.f2))) , l_158[0]) , l_154[0][3][3].f3));
    return g_159;
}



static uint32_t  func_7(struct S0  p_8, uint16_t  p_9, int32_t  p_10, int32_t  p_11, union U4  p_12)
{ 
    int32_t l_137 = 1L;
    int32_t l_138 = 0xE9439333L;
    int32_t l_139 = 0x94FE33C0L;
    int64_t l_140[5] = {0x75A6E9923EC18018LL,0x75A6E9923EC18018LL,0x75A6E9923EC18018LL,0x75A6E9923EC18018LL,0x75A6E9923EC18018LL};
    struct S2 l_141 = {{0xBFL,0xBFL,4L,18446744073709551615UL,-1L}};
    int i;
    l_140[2] &= ((!((safe_div_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((p_8.f2 = (((safe_rshift_func_int16_t_s_s((l_138 ^= (safe_lshift_func_uint8_t_u_u(((((g_13.f2 = ((--p_9) >= p_12.f0)) != 6UL) < (l_137 = (((g_56.f0.f0 > p_8.f4) < g_56.f0.f3) > 1L))) & 0xA337L), p_12.f0))), 7)) >= l_139) , g_2)), g_13.f1)) < g_13.f3), p_10)) <= 0xA3C6A653L), 1UL)) ^ 1UL)) ^ 250UL);
    l_139 = (8L < (((g_42 != ((l_139 < (((g_56.f0.f1 &= (l_141 , 0x08L)) & 0x3AL) && p_10)) < 0xA3A1L)) <= 0xB9C3B6F688DC7B32LL) || g_56.f0.f1));
    g_61 = (safe_mul_func_int8_t_s_s((((~((g_42++) ^ (safe_sub_func_uint64_t_u_u(l_141.f0.f1, ((((safe_mul_func_uint8_t_u_u(0UL, l_141.f0.f4)) | ((0x7B2D90C28791B00CLL || l_140[2]) <= g_27.f0)) | p_8.f5) >= g_13.f4))))) , p_11) > 0x0E15510CL), 0xEAL));
    return g_121[0];
}



static int32_t  func_14(uint8_t  p_15)
{ 
    uint16_t l_86[5][3] = {{0x3B4CL,0x3B4CL,0x3B4CL},{0UL,0UL,0UL},{0x3B4CL,0x3B4CL,0x3B4CL},{0UL,0UL,0UL},{0x3B4CL,0x3B4CL,0x3B4CL}};
    union U4 l_89 = {0xD022L};
    int32_t l_94[2];
    int32_t l_95 = (-7L);
    int32_t l_119 = 0L;
    int32_t l_120 = (-4L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_94[i] = 7L;
    l_95 = ((~(((++l_86[3][2]) , (((l_89 , g_90) , (l_94[0] = ((p_15 , ((~(safe_mul_func_uint16_t_u_u((g_42 ^ 0xC67BL), 0x8304L))) != l_86[2][1])) > l_89.f0))) > g_42)) , 0x683EL)) < g_61);
    g_61 = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(g_56.f0.f2, 6)) < ((((safe_mod_func_int64_t_s_s((l_120 &= (safe_lshift_func_int16_t_s_u(0x8B81L, (safe_div_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((l_119 &= ((!(l_95 ^= ((!((safe_unary_minus_func_int16_t_s(l_89.f0)) , ((((((4294967295UL != p_15) , p_15) , l_89.f0) , 0UL) , 0x1DBC6B2ED0C0D0CCLL) , (-1L)))) == l_94[0]))) <= 0x0DL)), g_13.f3)) , p_15) , g_56.f0.f1), l_89.f0)) <= l_86[3][2]) , l_94[0]), p_15))))), p_15)) > 1L) == g_56.f0.f0) && p_15)), p_15)) <= g_13.f1), 0)) < 0xD5892074L), g_13.f0)), g_56.f0.f4)) , g_90.f0) >= p_15);
    return l_94[0];
}



static uint64_t  func_16(uint8_t  p_17)
{ 
    uint16_t l_18 = 0x062AL;
    uint32_t l_21 = 0x7D6446BDL;
    int32_t l_22 = (-3L);
    uint32_t l_23[4] = {1UL,1UL,1UL,1UL};
    union U5 l_77[5][5][2] = {{{{1L},{0x92EF5DD9L}},{{0x92EF5DD9L},{0xB1ADF13FL}},{{0x92EF5DD9L},{0x92EF5DD9L}},{{1L},{0xB1ADF13FL}},{{1L},{0x92EF5DD9L}}},{{{0x92EF5DD9L},{0xB1ADF13FL}},{{0x92EF5DD9L},{0x92EF5DD9L}},{{1L},{0xB1ADF13FL}},{{1L},{0x92EF5DD9L}},{{0x92EF5DD9L},{0xB1ADF13FL}}},{{{0x92EF5DD9L},{0x92EF5DD9L}},{{1L},{0xB1ADF13FL}},{{1L},{0x92EF5DD9L}},{{0x92EF5DD9L},{0xB1ADF13FL}},{{0x92EF5DD9L},{0x92EF5DD9L}}},{{{1L},{0xB1ADF13FL}},{{1L},{0x92EF5DD9L}},{{0x92EF5DD9L},{0xB1ADF13FL}},{{0x92EF5DD9L},{0x92EF5DD9L}},{{1L},{0xB1ADF13FL}}},{{{1L},{0x92EF5DD9L}},{{0x92EF5DD9L},{0xB1ADF13FL}},{{0x92EF5DD9L},{0x92EF5DD9L}},{{1L},{0xB1ADF13FL}},{{1L},{0x92EF5DD9L}}}};
    int32_t l_83 = (-1L);
    int i, j, k;
    l_22 ^= ((0L || l_18) && (g_13.f2 | (safe_lshift_func_uint8_t_u_u(((-1L) >= 0xAE4C7BA3L), l_21))));
    for (l_18 = 0; (l_18 <= 3); l_18 += 1)
    { 
        for (p_17 = 0; (p_17 <= 3); p_17 += 1)
        { 
            int i;
            for (l_21 = 0; l_21 < 4; l_21 += 1)
            {
                l_23[l_21] = 0x6D20A2E7L;
            }
            if (l_23[p_17])
                break;
        }
        l_22 = 0L;
    }
    if ((p_17 & (!(safe_sub_func_int16_t_s_s((g_27 , (l_22 ^= (g_13.f4 != l_18))), p_17)))))
    { 
        uint32_t l_34 = 1UL;
        int32_t l_35 = 0L;
        int16_t l_36 = (-3L);
        if ((l_36 |= (safe_sub_func_uint8_t_u_u((6UL <= p_17), (g_13.f4 ^ ((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s((l_34 |= 0x2E2CL), g_2)) >= l_35), 0UL)) > 6L))))))
        { 
            uint32_t l_57 = 6UL;
            int32_t l_60 = (-4L);
            for (l_36 = 0; (l_36 == (-4)); --l_36)
            { 
                int32_t l_41 = 7L;
                l_35 = ((safe_mod_func_int8_t_s_s((l_41 | (--g_42)), (+((((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((g_56 , l_57), (safe_div_func_uint64_t_u_u((18446744073709551615UL | g_13.f5), 18446744073709551615UL)))) <= l_60) || g_13.f0), g_13.f4)) && (-1L)), p_17)), g_56.f0.f0)), 7)) != 0x1EL) && g_2) ^ l_22)))) != 5L);
            }
            g_61 &= 0L;
        }
        else
        { 
            uint32_t l_66 = 0x396C7BFBL;
            int32_t l_67 = 0x091CDDC1L;
            for (g_56.f0.f4 = 3; (g_56.f0.f4 >= 0); g_56.f0.f4 -= 1)
            { 
                int i;
                return l_23[g_56.f0.f4];
            }
            if ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_23[3], (l_22 &= ((((p_17 < (l_66 ^ 0x2BF2DCFCL)) && p_17) | g_2) == 0xB6CD35A0L)))), 9)))
            { 
                ++g_68;
            }
            else
            { 
                l_22 = g_56.f0.f3;
            }
        }
    }
    else
    { 
        g_61 = (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(((p_17 >= (l_23[2] != ((l_77[4][2][1] , ((--g_68) , ((safe_mul_func_uint16_t_u_u(l_21, p_17)) < g_2))) && g_82[1][1]))) > l_21), l_83)) >= g_82[1][1]) || 8L), g_13.f2)), g_56.f0.f3));
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    transparent_crc(g_13.f4, "g_13.f4", print_hash_value);
    transparent_crc(g_13.f5, "g_13.f5", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_56.f0.f0, "g_56.f0.f0", print_hash_value);
    transparent_crc(g_56.f0.f1, "g_56.f0.f1", print_hash_value);
    transparent_crc(g_56.f0.f2, "g_56.f0.f2", print_hash_value);
    transparent_crc(g_56.f0.f3, "g_56.f0.f3", print_hash_value);
    transparent_crc(g_56.f0.f4, "g_56.f0.f4", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_82[i][j], "g_82[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);

    }
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
