// SPDX-License-Identifier: MIT
// cctest_csmith_f776133b.c --- cctest case csmith_f776133b (csmith seed 4151710523)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe1b489de */
/* @exp_ticks 0x13a48 */

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

// Options:   -s 4151710523 -o /tmp/csmith_gen_vub611mc/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   const int16_t  f1;
   uint64_t  f2;
};

struct S1 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int16_t  f3;
   int16_t  f4;
   int16_t  f5;
};

union U2 {
   const int32_t  f0;
   int8_t  f1;
   int64_t  f2;
};


static int64_t g_6 = 1L;
static uint8_t g_10 = 0x2EL;
static union U2 g_27[3] = {{0xF446CD5FL},{0xF446CD5FL},{0xF446CD5FL}};
static int32_t g_49 = 1L;
static uint8_t g_55 = 0UL;
static int64_t g_72 = 0L;
static uint64_t g_74 = 18446744073709551612UL;
static int16_t g_80 = 0x510CL;
static int16_t g_84[7] = {0x07CAL,(-1L),0x07CAL,0x07CAL,(-1L),0x07CAL,0x07CAL};
static struct S0 g_91 = {0UL,0xED93L,0UL};
static struct S0 *g_90 = &g_91;
static struct S0 g_95[2][7][2] = {{{{6UL,-3L,18446744073709551613UL},{6UL,-3L,18446744073709551613UL}},{{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL},{6UL,-3L,18446744073709551613UL}},{{6UL,-3L,18446744073709551613UL},{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL}},{{6UL,-3L,18446744073709551613UL},{6UL,-3L,18446744073709551613UL}},{{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL},{6UL,-3L,18446744073709551613UL}},{{6UL,-3L,18446744073709551613UL},{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL}},{{6UL,-3L,18446744073709551613UL},{6UL,-3L,18446744073709551613UL}}},{{{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL},{6UL,-3L,18446744073709551613UL}},{{6UL,-3L,18446744073709551613UL},{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL}},{{6UL,-3L,18446744073709551613UL},{6UL,-3L,18446744073709551613UL}},{{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL},{6UL,-3L,18446744073709551613UL}},{{6UL,-3L,18446744073709551613UL},{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL}},{{6UL,-3L,18446744073709551613UL},{6UL,-3L,18446744073709551613UL}},{{4294967295UL,0x1D75L,0x80190EB1BE0F627ELL},{6UL,-3L,18446744073709551613UL}}}};
static int8_t g_100 = 0x7BL;
static uint32_t g_104 = 0UL;
static uint16_t g_124[1] = {1UL};
static uint64_t g_131 = 1UL;
static int16_t g_162[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static union U2 g_169 = {-1L};
static uint8_t g_177[7] = {0x72L,0x72L,0x80L,0x80L,0x72L,0x80L,0x80L};
static struct S1 g_181 = {7L,0x01001B9EL,1UL,9L,0x42DBL,0L};
static const struct S1 *g_180 = &g_181;
static int64_t ***g_207 = (void*)0;
static uint8_t *g_211 = &g_177[4];
static uint8_t **g_210 = &g_211;
static int32_t g_250 = 0xABBEC724L;
static int8_t g_251[1][7][7] = {{{0x58L,0x99L,0x99L,0x58L,0xD5L,0x58L,0x99L},{2L,2L,0x99L,0x9FL,0x99L,2L,2L},{2L,0x99L,0x9FL,0x99L,2L,2L,0x99L},{0x58L,0xD5L,0x58L,0x99L,0x99L,0x58L,0xD5L},{0x99L,0xD5L,0x9FL,0x9FL,0xD5L,0x99L,0xD5L},{0x58L,0x99L,0x99L,0x58L,0xD5L,0x58L,0x99L},{2L,2L,0x99L,0x9FL,0x99L,2L,2L}}};
static uint32_t g_252 = 0x01CEF08BL;
static uint64_t g_324[1] = {0x00F021F418D45862LL};
static uint8_t g_338 = 0x28L;
static int32_t g_342 = 1L;
static int32_t g_377 = 0L;
static uint16_t g_379 = 0x673DL;
static uint32_t g_382 = 0x4040A8EDL;
static int16_t g_394 = (-1L);
static uint16_t g_396 = 0UL;
static union U2 *g_495[4] = {&g_169,&g_169,&g_169,&g_169};
static union U2 * const *g_494[3] = {&g_495[1],&g_495[1],&g_495[1]};
static int32_t g_499 = 0xB684378FL;
static uint32_t g_500 = 1UL;
static int32_t *g_549[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
static uint32_t *g_561 = &g_382;
static struct S1 g_667 = {8L,18446744073709551615UL,7UL,0L,0L,0x6FD7L};
static struct S1 *g_666 = &g_667;
static int32_t *g_672[4] = {&g_377,&g_377,&g_377,&g_377};
static int8_t g_784 = (-1L);
static const uint8_t g_942 = 0xD1L;
static const uint8_t g_944 = 0x95L;
static struct S0 * const ***g_956 = (void*)0;
static const struct S0 g_963[6][6][6] = {{{{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{4294967291UL,0L,7UL},{4294967291UL,0L,7UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL}},{{4294967295UL,1L,0xF1AB0C0CDE61827FLL},{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{0UL,-1L,0x3DCDE75AA1ABBE64LL},{0UL,-1L,0x46E85374B967501DLL},{4294967290UL,8L,0UL},{0xF477E50EL,5L,0UL}},{{0x5BD3F080L,-8L,0xDE1A56D5C3CFE35FLL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{0xD089D239L,1L,0UL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{0xECA9908FL,0xCA3DL,0xD3F357FCDB1ECE3BLL}},{{0x5BD3F080L,-8L,0xDE1A56D5C3CFE35FLL},{4294967295UL,0xD13EL,0UL},{0xD089D239L,1L,0UL},{0UL,-1L,0x46E85374B967501DLL},{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{0UL,0x3C1FL,3UL}},{{4294967295UL,1L,0xF1AB0C0CDE61827FLL},{4294967290UL,8L,0UL},{0x26C11D41L,1L,0xC3EE68519312ED33LL},{4294967291UL,0L,7UL},{0UL,-1L,0x3DCDE75AA1ABBE64LL},{4294967287UL,1L,0x9AC9A45C245B31A5LL}},{{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0UL,-1L,0x46E85374B967501DLL},{0x774E81EDL,0x81E7L,8UL},{0x7E896514L,0x50A1L,0xA97BCE2C1B1D447ELL},{0xD4C37519L,0xA4A0L,18446744073709551609UL},{0x5BD3F080L,-8L,0xDE1A56D5C3CFE35FLL}}},{{{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{0x774E81EDL,0x81E7L,8UL},{4294967290UL,0xCC70L,3UL},{0xECA9908FL,0xCA3DL,0xD3F357FCDB1ECE3BLL},{4294967291UL,0xB158L,0xDD13D998D3725D03LL},{0xD4C37519L,0xA4A0L,18446744073709551609UL}},{{4294967291UL,0L,7UL},{4294967290UL,-2L,0xB8253EEE3E7302ADLL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{0x7C61613EL,0x1515L,0x3DBB91E0F9D87190LL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{4294967290UL,-2L,0xB8253EEE3E7302ADLL}},{{4294967290UL,0xCC70L,3UL},{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{0x2BF12641L,1L,18446744073709551615UL},{0x774E81EDL,0x81E7L,8UL},{0UL,6L,0UL},{1UL,0x88A0L,0x7420F8FCAE444631LL}},{{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{0xE580E77AL,-1L,0xB429B38B0E704A11LL},{0x00EBC0B1L,0x1855L,7UL},{0xD4C37519L,0xA4A0L,18446744073709551609UL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{4294967295UL,0xF36BL,3UL}},{{0x9A4BD579L,0xADFAL,0x6AAE6A117E0AAE5FLL},{0xE580E77AL,-1L,0xB429B38B0E704A11LL},{0UL,0x3C1FL,3UL},{1UL,-9L,0x8656270DB7395C5BLL},{0UL,6L,0UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL}},{{1UL,0x88A0L,0x7420F8FCAE444631LL},{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{0x4782887DL,-7L,0xD5335C6349476C4CLL},{0x5880665AL,-1L,9UL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{0x26C11D41L,1L,0xC3EE68519312ED33LL}}},{{{4294967295UL,1L,0x154443C9422789D5LL},{4294967290UL,-2L,0xB8253EEE3E7302ADLL},{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{4294967290UL,0xCC70L,3UL},{4294967291UL,0xB158L,0xDD13D998D3725D03LL},{0xD5143436L,0x7BA8L,0xA5728CFF3EBD5A5BLL}},{{0xD5143436L,0x7BA8L,0xA5728CFF3EBD5A5BLL},{0x774E81EDL,0x81E7L,8UL},{0xF477E50EL,5L,0UL},{4294967290UL,-1L,18446744073709551614UL},{0xD4C37519L,0xA4A0L,18446744073709551609UL},{0UL,-1L,0x46E85374B967501DLL}},{{4294967290UL,-2L,0xB8253EEE3E7302ADLL},{0UL,-1L,0x46E85374B967501DLL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{0UL,-1L,0x3DCDE75AA1ABBE64LL},{0UL,-1L,0x3DCDE75AA1ABBE64LL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL}},{{4294967290UL,8L,0UL},{4294967290UL,8L,0UL},{4294967290UL,-1L,18446744073709551614UL},{0x9A4BD579L,0xADFAL,0x6AAE6A117E0AAE5FLL},{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{0x774E81EDL,0x81E7L,8UL}},{{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{4294967295UL,0xD13EL,0UL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0xE580E77AL,-1L,0xB429B38B0E704A11LL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{4294967290UL,-1L,18446744073709551614UL}},{{0xD7205740L,1L,0x0EB9BA1D3F0B6FACLL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{4294967290UL,8L,0UL},{0x774E81EDL,0x81E7L,8UL}}},{{{0x7E896514L,0x50A1L,0xA97BCE2C1B1D447ELL},{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{4294967290UL,-1L,18446744073709551614UL},{4294967295UL,0xF36BL,3UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL}},{{4294967295UL,0xF36BL,3UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{4294967295UL,1L,0x154443C9422789D5LL},{4294967291UL,0L,7UL},{0UL,-1L,0x46E85374B967501DLL}},{{0xD7205740L,1L,0x0EB9BA1D3F0B6FACLL},{0x5880665AL,-1L,9UL},{4294967290UL,-1L,18446744073709551614UL},{1UL,0x88A0L,0x7420F8FCAE444631LL},{0UL,-1L,0x3DCDE75AA1ABBE64LL},{4294967295UL,0xF36BL,3UL}},{{0UL,-1L,0x3DCDE75AA1ABBE64LL},{0x26C11D41L,1L,0xC3EE68519312ED33LL},{0xD089D239L,1L,0UL},{4294967287UL,1L,0x9AC9A45C245B31A5LL},{0x5880665AL,-1L,9UL},{4294967287UL,1L,0x9AC9A45C245B31A5LL}},{{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{4294967295UL,0xF36BL,3UL},{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{0x00EBC0B1L,0x1855L,7UL},{0x4782887DL,-7L,0xD5335C6349476C4CLL},{0x9CF4092FL,0x15E7L,18446744073709551609UL}},{{4294967287UL,1L,0x9AC9A45C245B31A5LL},{0xE580E77AL,-1L,0xB429B38B0E704A11LL},{0xD7205740L,1L,0x0EB9BA1D3F0B6FACLL},{0UL,-1L,0x46E85374B967501DLL},{4294967291UL,0L,7UL},{4294967295UL,1L,0x154443C9422789D5LL}}},{{{0xD4C37519L,0xA4A0L,18446744073709551609UL},{0x7E896514L,0x50A1L,0xA97BCE2C1B1D447ELL},{0x774E81EDL,0x81E7L,8UL},{0UL,-1L,0x46E85374B967501DLL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0x00EBC0B1L,0x1855L,7UL}},{{4294967287UL,1L,0x9AC9A45C245B31A5LL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL},{0x7E896514L,0x50A1L,0xA97BCE2C1B1D447ELL},{0x00EBC0B1L,0x1855L,7UL},{1UL,-9L,0x8656270DB7395C5BLL},{0x4782887DL,-7L,0xD5335C6349476C4CLL}},{{0xAC3E3E4EL,1L,0xEA0E2DF613731C82LL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{0x5BD3F080L,-8L,0xDE1A56D5C3CFE35FLL},{4294967287UL,1L,0x9AC9A45C245B31A5LL},{4294967290UL,8L,0UL},{4294967293UL,0xE3F4L,0x40C6CCBC046265A9LL}},{{0UL,-1L,0x3DCDE75AA1ABBE64LL},{0x2BF12641L,1L,18446744073709551615UL},{4294967291UL,0L,7UL},{1UL,0x88A0L,0x7420F8FCAE444631LL},{0x00EBC0B1L,0x1855L,7UL},{0x26C11D41L,1L,0xC3EE68519312ED33LL}},{{0xD7205740L,1L,0x0EB9BA1D3F0B6FACLL},{0UL,1L,18446744073709551615UL},{5UL,0x2F52L,0x08BB9486BE0B0D79LL},{1UL,-9L,0x8656270DB7395C5BLL},{0x9A4BD579L,0xADFAL,0x6AAE6A117E0AAE5FLL},{0x9A4BD579L,0xADFAL,0x6AAE6A117E0AAE5FLL}},{{4294967295UL,1L,0x154443C9422789D5LL},{4294967287UL,1L,0x9AC9A45C245B31A5LL},{4294967287UL,1L,0x9AC9A45C245B31A5LL},{4294967295UL,1L,0x154443C9422789D5LL},{0x774E81EDL,0x81E7L,8UL},{0xD7205740L,1L,0x0EB9BA1D3F0B6FACLL}}},{{{4294967291UL,0xB158L,0xDD13D998D3725D03LL},{4294967291UL,0L,7UL},{0x93492E9CL,5L,0xA8CADF8536BA32C4LL},{0xD089D239L,1L,0UL},{0UL,6L,0UL},{0xD4C37519L,0xA4A0L,18446744073709551609UL}},{{0UL,1L,18446744073709551615UL},{0x00EBC0B1L,0x1855L,7UL},{0x9CF4092FL,0x15E7L,18446744073709551609UL},{4294967290UL,0xCC70L,3UL},{0UL,6L,0UL},{4294967290UL,-1L,18446744073709551614UL}},{{0x5BD3F080L,-8L,0xDE1A56D5C3CFE35FLL},{4294967291UL,0L,7UL},{0x00F67F8EL,3L,0x3FAEC6AB330F0608LL},{4294967290UL,-2L,0xB8253EEE3E7302ADLL},{0x774E81EDL,0x81E7L,8UL},{4294967295UL,0xD13EL,0UL}},{{0UL,-1L,0x46E85374B967501DLL},{4294967287UL,1L,0x9AC9A45C245B31A5LL},{0xB69B5CAFL,0x7C79L,18446744073709551614UL},{0x00F67F8EL,3L,0x3FAEC6AB330F0608LL},{0x9A4BD579L,0xADFAL,0x6AAE6A117E0AAE5FLL},{1UL,0x88A0L,0x7420F8FCAE444631LL}},{{0x4782887DL,-7L,0xD5335C6349476C4CLL},{0UL,1L,18446744073709551615UL},{0x34D0D512L,0x36B9L,0x0946870A82CC08D5LL},{0x7C61613EL,0x1515L,0x3DBB91E0F9D87190LL},{0x00EBC0B1L,0x1855L,7UL},{0x00F67F8EL,3L,0x3FAEC6AB330F0608LL}},{{4294967295UL,0xF36BL,3UL},{0x2BF12641L,1L,18446744073709551615UL},{1UL,-9L,0x8656270DB7395C5BLL},{4294967291UL,0L,7UL},{4294967290UL,8L,0UL},{4294967291UL,0xB158L,0xDD13D998D3725D03LL}}}};
static const struct S0 *g_962 = &g_963[2][1][4];
static int32_t g_1022 = 0xDB9A4D26L;
static struct S1 **g_1141 = &g_666;
static struct S1 ***g_1140 = &g_1141;
static struct S1 ****g_1139 = &g_1140;
static struct S1 *****g_1138 = &g_1139;
static int32_t g_1158 = 0xEF9EB8CFL;
static uint16_t g_1176 = 1UL;
static uint32_t g_1204 = 1UL;



static const int16_t  func_1(void);
static struct S1  func_2(uint64_t  p_3);
static uint8_t * func_15(uint8_t * const  p_16, uint8_t * p_17);
static uint8_t * func_18(const uint8_t * p_19, const uint16_t  p_20, int8_t  p_21, const uint8_t * const  p_22, int8_t  p_23);
static uint8_t * func_24(union U2  p_25, uint8_t * p_26);
static int8_t  func_32(uint32_t  p_33, int32_t  p_34, int32_t  p_35);
static uint8_t * func_37(int64_t  p_38, const int16_t  p_39, const uint8_t * p_40);
static int32_t  func_43(uint8_t * p_44);




static const int16_t  func_1(void)
{ 
    int32_t l_8 = 0xA3DBC56EL;
    uint8_t *l_9 = &g_10;
    union U2 l_1036 = {0L};
    int32_t l_1059 = 0xDB3DB36BL;
    int32_t l_1079[6][3][7] = {{{0xA0AA267EL,(-1L),0xA0AA267EL,3L,0x18F12C1CL,3L,0xA0AA267EL},{(-5L),0x0D79DCB9L,0xD8C0297DL,(-5L),(-5L),0xD8C0297DL,0x0D79DCB9L},{0xA2C51BBDL,3L,0xADED5132L,(-1L),0xADED5132L,3L,0xA2C51BBDL}},{{0xF1689A75L,(-5L),1L,1L,(-5L),0xF1689A75L,1L},{0x18F12C1CL,(-1L),0x53DA6F60L,(-1L),0x18F12C1CL,1L,0x18F12C1CL},{(-5L),1L,1L,(-5L),0xF1689A75L,1L,0x0D79DCB9L}},{{0xADED5132L,(-1L),0xADED5132L,3L,0xA2C51BBDL,3L,0xADED5132L},{(-5L),(-5L),0xD8C0297DL,0x0D79DCB9L,(-5L),0xD0DD1549L,0x0D79DCB9L},{0x18F12C1CL,3L,0xA0AA267EL,(-1L),0xA0AA267EL,3L,0x18F12C1CL}},{{0xF1689A75L,0x0D79DCB9L,1L,0xF1689A75L,(-5L),1L,1L},{0xA2C51BBDL,(-1L),0L,(-1L),0xA2C51BBDL,1L,0xA2C51BBDL},{(-5L),0xF1689A75L,1L,0x0D79DCB9L,0xF1689A75L,0xF1689A75L,0x0D79DCB9L}},{{0xA0AA267EL,(-1L),0xA0AA267EL,3L,0x18F12C1CL,3L,0xA0AA267EL},{(-5L),0x0D79DCB9L,0xD8C0297DL,0xF1689A75L,0xF1689A75L,0x0D79DCB9L,1L},{0xADED5132L,1L,0L,3L,0L,1L,0xADED5132L}},{{0xD0DD1549L,0xF1689A75L,0xD8C0297DL,0xD8C0297DL,0xF1689A75L,0xD0DD1549L,0xD8C0297DL},{0xA0AA267EL,3L,0x18F12C1CL,3L,0xA0AA267EL,(-1L),0xA0AA267EL},{0xF1689A75L,0xD8C0297DL,0xD8C0297DL,0xF1689A75L,0xD0DD1549L,0xD8C0297DL,1L}}};
    struct S1 l_1092 = {1L,0xBD41DD8EL,65526UL,1L,0L,0xA5E9L};
    struct S0 **l_1095 = (void*)0;
    int64_t *l_1096 = &g_72;
    int8_t l_1167[4] = {0L,0L,0L,0L};
    uint8_t l_1179 = 0UL;
    const uint64_t l_1233 = 0x7C243C4B751F9D7DLL;
    int32_t **l_1236 = &g_672[0];
    int i, j, k;
    if ((func_2((((safe_add_func_int8_t_s_s((g_6 < (g_6 == (safe_unary_minus_func_uint8_t_u(((*l_9) = l_8))))), g_6)) && (safe_add_func_int32_t_s_s((g_6 , 1L), (safe_add_func_uint64_t_u_u((((*g_210) = func_15(func_18(func_24(g_27[1], l_9), g_95[0][4][0].f0, l_8, &g_10, l_8), l_9)) == (void*)0), l_8))))) || (-1L))) , l_8))
    { 
        union U2 l_1035[3] = {{-1L},{-1L},{-1L}};
        int32_t l_1056 = 0L;
        int32_t l_1057[3][7][4] = {{{0x20F19556L,0x3161680BL,0xE1C81622L,0xD446BDE7L},{0x1A4EDC60L,0xE1C81622L,(-1L),7L},{6L,0xA6A66D41L,0L,(-1L)},{6L,(-10L),(-1L),(-2L)},{0x1A4EDC60L,(-1L),0xE1C81622L,(-1L)},{0x20F19556L,0x6089FA30L,1L,0L},{0L,(-1L),0L,0x1D2A2C21L}},{{0x6D702BFEL,0L,0L,0x6D702BFEL},{0x1EDB6D8DL,0x9E84F305L,0xD4E0DFB6L,(-3L)},{0xD446BDE7L,0xDD84800DL,0xA6A66D41L,0x8D9E0D96L},{(-2L),0L,0x6D702BFEL,0x8D9E0D96L},{0x3161680BL,0xDD84800DL,0x20F19556L,(-3L)},{0x6089FA30L,0x9E84F305L,(-2L),0x6D702BFEL},{0x9D246298L,0L,0x88A910D4L,0x1D2A2C21L}},{{(-1L),(-1L),0x9E84F305L,0L},{1L,0x6089FA30L,1L,(-1L)},{1L,(-1L),0x6089FA30L,(-2L)},{7L,(-10L),0x1D2A2C21L,(-1L)},{0xD4E0DFB6L,0xA6A66D41L,0x1D2A2C21L,7L},{7L,0xE1C81622L,0x6089FA30L,0xD446BDE7L},{1L,0x3161680BL,1L,6L}}};
        int i, j, k;
        for (g_181.f2 = 0; (g_181.f2 <= 11); g_181.f2++)
        { 
            uint16_t *l_1050 = &g_379;
            int32_t l_1055 = 0x2ACDD257L;
            int32_t *l_1058[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1058[i] = &g_49;
            l_1059 |= (((safe_rshift_func_uint16_t_u_s((l_1035[0] , ((((l_1036 , (safe_rshift_func_uint16_t_u_u(g_324[0], 15))) > ((safe_div_func_int32_t_s_s((((((l_1056 &= (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((((&g_956 == (void*)0) , (safe_mul_func_int8_t_s_s((l_1055 = (safe_lshift_func_int8_t_s_u((!(--(*l_1050))), ((l_1036.f0 <= ((safe_mod_func_uint32_t_u_u(0x2875E5DBL, 1UL)) | 0x074AB998L)) ^ g_177[6])))), (*g_211)))) >= 0x47L), (**g_210))) & (*g_561)), 0))) & 4294967295UL) , l_8) && l_1056) || (*g_561)), 2L)) & 0xD114C628034419A2LL)) > l_1057[0][0][0]) , 0UL)), g_377)) && 0x2A304D5D485458E8LL) ^ l_1057[0][6][0]);
        }
    }
    else
    { 
        int8_t l_1086[3];
        int32_t l_1087 = 0x3A62F99EL;
        int32_t l_1088 = 0xD5B4D035L;
        uint32_t l_1089 = 7UL;
        union U2 l_1093[2][1][3] = {{{{9L},{9L},{0x1D598BBDL}}},{{{9L},{9L},{0x1D598BBDL}}}};
        int32_t *l_1094 = &l_1079[2][0][1];
        int32_t l_1115 = 0x5ACAEB58L;
        int32_t l_1119 = 0xEE462627L;
        uint64_t *l_1123[6] = {&g_324[0],&g_324[0],&g_95[0][4][0].f2,&g_324[0],&g_324[0],&g_95[0][4][0].f2};
        struct S1 l_1124 = {0xF94841B5L,0UL,0x3D6CL,0x8BDAL,-3L,0xDF61L};
        int32_t l_1159 = 1L;
        int32_t l_1160 = 0x51170F38L;
        int32_t l_1161 = (-2L);
        int32_t l_1163 = (-7L);
        int32_t l_1164 = 0x1F4EF92CL;
        uint32_t *l_1174 = &g_382;
        int8_t l_1178 = 0xD8L;
        struct S1 *l_1229[6];
        const struct S0 **l_1231 = &g_962;
        const struct S0 ***l_1230 = &l_1231;
        int16_t *l_1232 = &g_84[0];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1086[i] = 0xE2L;
        for (i = 0; i < 6; i++)
            l_1229[i] = &g_667;
        for (g_10 = 0; (g_10 <= 3); g_10 += 1)
        { 
            int32_t *l_1060 = &g_250;
            int32_t *l_1061 = &l_1059;
            int32_t *l_1062 = &g_342;
            int32_t *l_1063 = &g_49;
            int32_t *l_1064 = (void*)0;
            int32_t *l_1065 = &g_49;
            int32_t *l_1066 = &g_250;
            int32_t *l_1067 = &l_1059;
            int32_t *l_1068 = &g_1022;
            int32_t *l_1069 = (void*)0;
            int32_t *l_1070 = &g_1022;
            int32_t *l_1071 = &g_377;
            int32_t *l_1072 = &g_377;
            int32_t *l_1073 = &l_1059;
            int32_t *l_1074 = &g_49;
            int32_t *l_1075 = &g_49;
            int32_t *l_1076 = &g_342;
            int32_t *l_1077 = &g_49;
            int32_t *l_1078 = (void*)0;
            int32_t *l_1080 = &l_1059;
            int32_t *l_1081 = &l_1079[1][1][0];
            int32_t *l_1082 = &l_1079[2][1][3];
            int32_t *l_1083 = &l_1079[1][1][0];
            int32_t *l_1084 = &g_342;
            int32_t *l_1085[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1085[i] = &g_1022;
            --l_1089;
            (*g_666) = l_1092;
            return g_10;
        }
        (*l_1094) = (((l_1093[1][0][2] , &g_495[1]) == &g_495[1]) | g_499);
        if (((((((void*)0 == l_1095) , (void*)0) == ((*l_1094) , &g_131)) , l_1096) == l_1096))
        { 
            for (g_379 = 0; g_379 < 3; g_379 += 1)
            {
                l_1086[g_379] = 0x26L;
            }
        }
        else
        { 
            int64_t l_1099 = 0L;
            int64_t ***l_1110 = (void*)0;
            uint64_t l_1117 = 1UL;
            int32_t l_1155 = 0x1F61D165L;
            int32_t l_1162 = 0x30186572L;
            int32_t l_1166 = 0L;
            int32_t l_1168 = 1L;
            struct S0 **l_1172 = &g_90;
            uint32_t *l_1175 = &g_382;
            struct S1 l_1184 = {-1L,18446744073709551608UL,65535UL,0L,0x765BL,0xB649L};
            uint8_t * const *l_1210 = &g_211;
            uint8_t * const **l_1209 = &l_1210;
            if ((safe_unary_minus_func_uint8_t_u(((*l_1094) & (safe_unary_minus_func_int8_t_s(l_1099))))))
            { 
                int64_t ****l_1111 = &l_1110;
                int8_t *l_1112 = (void*)0;
                int8_t *l_1113 = &g_784;
                uint64_t *l_1114 = &g_95[0][4][0].f2;
                int32_t l_1116 = 7L;
                int32_t *l_1118[3];
                uint8_t l_1126 = 1UL;
                int32_t l_1129 = 0xE48B2CBFL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1118[i] = (void*)0;
                l_1119 |= ((((l_1093[0][0][2] , (g_124[0] = (safe_lshift_func_int8_t_s_s((1UL >= (!(safe_mod_func_uint64_t_u_u((l_1092.f4 == (((0xBDC27D47L <= ((g_91.f2 = ((*l_1114) = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((~(((*l_1111) = l_1110) != ((g_252 || ((*g_211) = ((*l_9) = (((((*l_1113) = 6L) < (**g_210)) & (*l_1094)) & (*g_211))))) , g_207))), 6)) >= 0UL), (*l_1094))))) || 0xD45FE978F0AB4C7DLL)) | l_1115) < (*l_1094))), 0x87B427AF94A5C988LL)))), l_1116)))) ^ (*l_1094)) , 7L) || l_1117);
                for (l_1092.f2 = 0; (l_1092.f2 > 60); l_1092.f2++)
                { 
                    struct S0 **l_1122 = &g_90;
                    struct S1 *l_1125 = &g_181;
                    (*l_1122) = &g_95[0][0][0];
                    (*l_1125) = ((l_1123[1] == (void*)0) , ((*g_666) = l_1124));
                    return l_1092.f3;
                }
                l_1126++;
                (*l_1094) = l_1129;
            }
            else
            { 
                int32_t l_1132[2];
                uint32_t l_1135 = 0x97289DAAL;
                int32_t l_1157 = 1L;
                int32_t l_1165 = 0x79A96270L;
                int32_t *l_1177[5];
                int i;
                for (i = 0; i < 2; i++)
                    l_1132[i] = 5L;
                for (i = 0; i < 5; i++)
                    l_1177[i] = &l_1162;
                if (((safe_mul_func_uint8_t_u_u(l_1132[0], ((&g_84[3] != &g_84[4]) < 0UL))) < (l_1099 | 0x795F87F31B34E87ALL)))
                { 
                    int32_t *l_1133 = &g_342;
                    int32_t *l_1134 = (void*)0;
                    l_1135--;
                    if (g_131)
                        goto lbl_1142;
lbl_1142:
                    g_1138 = g_1138;
                    return g_177[4];
                }
                else
                { 
                    int32_t *l_1143 = &l_1079[1][1][0];
                    int32_t *l_1144 = &g_377;
                    int32_t *l_1145 = &l_1119;
                    int32_t *l_1146 = &g_377;
                    int32_t *l_1147 = &l_1079[1][1][0];
                    int32_t *l_1148 = (void*)0;
                    int32_t *l_1149 = &l_1079[1][1][0];
                    int32_t *l_1150 = &l_1079[1][1][0];
                    int32_t l_1151 = 1L;
                    int32_t *l_1152 = &l_1087;
                    int32_t *l_1153 = (void*)0;
                    int32_t *l_1154 = &l_1119;
                    int32_t *l_1156[1][6] = {{&l_1079[5][0][1],&l_1079[5][0][1],(void*)0,&l_1079[5][0][1],&l_1079[5][0][1],(void*)0}};
                    uint32_t l_1169 = 18446744073709551612UL;
                    int i, j;
                    l_1169++;
lbl_1173:
                    l_1172 = (void*)0;
                    g_549[0][2] = &l_1088;
                    if (g_91.f2)
                        goto lbl_1173;
                }
                g_1176 = ((*g_90) , (l_1174 == l_1175));
                --l_1179;
            }
            for (g_181.f0 = (-29); (g_181.f0 <= 10); g_181.f0 = safe_add_func_int16_t_s_s(g_181.f0, 1))
            { 
                uint32_t *l_1188 = &l_1089;
                int32_t l_1200 = (-3L);
                int32_t l_1202 = 0xC7077078L;
                int32_t l_1203[3][7] = {{0xD538812DL,0xD538812DL,0xF66849FAL,0xD538812DL,0xD538812DL,0xF66849FAL,0xD538812DL},{0xFE64DDC5L,9L,9L,0xFE64DDC5L,9L,9L,0xFE64DDC5L},{4L,0xD538812DL,4L,4L,0xD538812DL,4L,4L}};
                uint8_t l_1207[5][5][1] = {{{0xAAL},{255UL},{0x4AL},{0xA6L},{0xA6L}},{{0x4AL},{255UL},{0xAAL},{0x4AL},{0xAAL}},{{255UL},{0x4AL},{0xA6L},{0xA6L},{0x4AL}},{{255UL},{0xAAL},{0x4AL},{0xAAL},{255UL}},{{0x4AL},{0xA6L},{0xA6L},{0x4AL},{255UL}}};
                int i, j, k;
                (****g_1139) = l_1184;
                if ((!(safe_mul_func_int16_t_s_s(g_963[2][1][4].f1, ((((l_1184.f4 , (((***g_1138) == ((++(*l_1188)) , (*g_1140))) , (4294967286UL < ((safe_mul_func_uint8_t_u_u(((l_1184.f2 > (**g_210)) & g_250), g_181.f4)) , l_1079[5][2][5])))) & l_1184.f4) == (*l_1094)) || 7UL)))))
                { 
                    int32_t *l_1193 = &g_1022;
                    int32_t *l_1194 = &g_342;
                    int32_t *l_1195 = &l_1059;
                    int32_t *l_1196 = &l_1166;
                    int32_t *l_1197 = &g_250;
                    int32_t *l_1198 = &l_1079[1][1][0];
                    int32_t *l_1199[5][5] = {{&g_342,&l_1163,&l_1161,&l_1161,&l_1161},{&g_377,&l_1163,(void*)0,&g_342,&g_342},{&l_1163,&g_377,&l_1163,(void*)0,&g_342},{&l_1161,&l_1115,&g_342,&l_1115,&l_1161},{&l_1163,&l_1115,&g_377,&l_1161,&g_377}};
                    int16_t l_1201 = 0x9A5CL;
                    struct S1 l_1208 = {-7L,0xEEA8C6E6L,0UL,0xB601L,0x38E7L,4L};
                    int i, j;
                    g_1204++;
                    if (l_1207[1][4][0])
                        continue;
                    (*l_1195) = (*l_1094);
                    (**g_1141) = l_1208;
                }
                else
                { 
                    uint8_t * const ***l_1211 = &l_1209;
                    (*l_1211) = l_1209;
                    return l_1168;
                }
                if (l_1203[2][5])
                    break;
                return g_95[0][4][0].f1;
            }
        }
        (*l_1094) = (safe_mod_func_int64_t_s_s((!((**g_210) = ((*l_1094) ^ ((*l_1096) = ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((((((*l_1232) = ((0x0DL < ((**g_210) <= (func_2((g_324[0] |= (safe_unary_minus_func_uint16_t_u((!(((safe_mul_func_int16_t_s_s(((*l_1232) = (((***g_1140) = (**g_1141)) , ((254UL > (safe_mul_func_int16_t_s_s((((*l_1230) = ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_667.f4, 5)), 7)) , (l_1229[5] = (***g_1139))) != (void*)0) , (void*)0)) != l_1095), g_379))) | (*l_1094)))), g_80)) | l_1233) == l_1179)))))) , l_1092.f3))) ^ (*l_1094))) || 0x785DL) & (*l_1094)) != l_1036.f1) >= (*l_1094)) ^ (*l_1094)) || (-6L)), g_91.f1)), 0xBFL)) != 0x6D0CL))))), l_1092.f2));
    }
    (*g_666) = func_2(l_1036.f0);
    for (g_6 = 8; (g_6 != (-8)); g_6 = safe_sub_func_int32_t_s_s(g_6, 2))
    { 
        if (l_1092.f1)
            break;
    }
    (*l_1236) = &l_1059;
    return g_104;
}



static struct S1  func_2(uint64_t  p_3)
{ 
    const struct S0 *l_955[4] = {&g_91,&g_91,&g_91,&g_91};
    const struct S0 **l_954 = &l_955[2];
    const struct S0 ***l_953 = &l_954;
    const struct S0 ****l_952 = &l_953;
    struct S0 * const ****l_957 = &g_956;
    int32_t l_958[5] = {0x7699387EL,0x7699387EL,0x7699387EL,0x7699387EL,0x7699387EL};
    struct S1 l_961 = {0x3E30F930L,0UL,1UL,-10L,0xC1BBL,-5L};
    int32_t **l_965 = &g_672[0];
    uint8_t * const *l_1028 = &g_211;
    int i;
    l_958[2] |= (l_952 == ((*l_957) = g_956));
lbl_964:
    for (g_338 = (-12); (g_338 == 22); g_338++)
    { 
        g_962 = (l_961 , (**l_953));
        if (l_961.f5)
            goto lbl_964;
    }
    (*l_965) = &l_958[2];
    for (g_667.f3 = (-25); (g_667.f3 < 28); g_667.f3++)
    { 
        int64_t l_975[5];
        int32_t l_981 = (-4L);
        int32_t l_984 = 1L;
        int32_t l_990 = (-1L);
        int32_t l_991 = (-1L);
        int32_t l_998 = 1L;
        int32_t l_1000 = 1L;
        int32_t l_1003 = (-3L);
        int32_t l_1004 = 0x357ACF84L;
        int32_t l_1005 = (-1L);
        int32_t l_1006 = 0xA6381CFEL;
        int32_t l_1010 = 1L;
        int32_t l_1011 = 0L;
        uint8_t *l_1017 = &g_338;
        int32_t *l_1019 = &g_377;
        int32_t *l_1020 = &l_991;
        int32_t *l_1021[3][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        uint8_t l_1023 = 251UL;
        int16_t *l_1029 = &g_181.f4;
        uint16_t *l_1030 = (void*)0;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_975[i] = 0xBF43630075026EA3LL;
    }
    return l_961;
}



static uint8_t * func_15(uint8_t * const  p_16, uint8_t * p_17)
{ 
    int8_t l_391 = 0L;
    int32_t l_392 = 0x8C09B999L;
    int32_t l_393 = 0x9708CCDCL;
    struct S0 *l_433[4];
    int32_t l_434 = (-8L);
    int32_t l_435 = 2L;
    int32_t l_577 = 2L;
    int32_t l_579 = (-1L);
    int32_t l_580[2];
    int16_t l_582 = 1L;
    uint64_t l_583 = 0xF2C366AFFA982184LL;
    struct S1 *l_665 = &g_181;
    int64_t l_711 = 0x37F25A0D0A1CC50CLL;
    union U2 l_729 = {0xC6BE7F95L};
    int64_t l_743 = (-3L);
    uint16_t l_764 = 2UL;
    int8_t l_771 = 1L;
    uint8_t *l_788 = (void*)0;
    struct S1 **l_819 = &g_666;
    struct S1 ***l_818 = &l_819;
    struct S1 ****l_817 = &l_818;
    int i;
    for (i = 0; i < 4; i++)
        l_433[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_580[i] = 0x5A16EFD6L;
    for (g_181.f0 = 14; (g_181.f0 > 3); g_181.f0 = safe_sub_func_int8_t_s_s(g_181.f0, 3))
    { 
        int8_t l_395 = 0x50L;
        int64_t *l_422 = &g_6;
        int64_t **l_421 = &l_422;
        int64_t ***l_420 = &l_421;
        int16_t l_423 = 0xB3DFL;
        int32_t l_436 = 1L;
        int32_t l_469 = 0x4936B776L;
        struct S1 l_476 = {-7L,0x9180F5DFL,65532UL,-3L,1L,-1L};
        uint8_t *l_503 = &g_10;
        int8_t *l_516 = &g_251[0][6][1];
        int32_t *l_550 = &g_377;
        uint8_t l_597[5] = {0x43L,0x43L,0x43L,0x43L,0x43L};
        int64_t l_617 = 0x00E20934A135BA08LL;
        int16_t l_680 = (-1L);
        int32_t l_683 = 0x5B11ABC0L;
        int32_t l_684 = 1L;
        int32_t l_685[6][3][6] = {{{0L,0xE0CE09E8L,0L,1L,0L,0xE0CE09E8L},{1L,0L,0L,0x4861DBECL,0x87C9BA63L,1L},{0x7EA7F2D9L,0x4861DBECL,0xE0CE09E8L,0xE0CE09E8L,0x4861DBECL,0x7EA7F2D9L}},{{0xE0CE09E8L,0x4861DBECL,0x7EA7F2D9L,(-9L),0x87C9BA63L,0L},{0L,0L,1L,0L,0L,0x4861DBECL},{0L,0xE0CE09E8L,0L,(-9L),0xAB180407L,0xAB180407L}},{{0xE0CE09E8L,0x87C9BA63L,0x87C9BA63L,0xE0CE09E8L,1L,0xAB180407L},{0x7EA7F2D9L,0xAB180407L,0L,0x4861DBECL,(-9L),0x4861DBECL},{1L,1L,1L,1L,(-9L),0L}},{{0L,0xAB180407L,0x7EA7F2D9L,1L,1L,0x7EA7F2D9L},{0x87C9BA63L,0x87C9BA63L,0xE0CE09E8L,1L,0xAB180407L,1L},{0L,0xE0CE09E8L,0L,1L,0L,0xE0CE09E8L}},{{1L,0L,0L,0x4861DBECL,0x87C9BA63L,1L},{0x7EA7F2D9L,0x4861DBECL,0xE0CE09E8L,0xE0CE09E8L,0x4861DBECL,0x7EA7F2D9L},{0xE0CE09E8L,0x4861DBECL,0x7EA7F2D9L,(-9L),0x87C9BA63L,0L}},{{0L,0L,1L,0L,0L,0x4861DBECL},{0L,0xE0CE09E8L,0L,(-9L),0xAB180407L,0xAB180407L},{0xE0CE09E8L,0x87C9BA63L,0x87C9BA63L,0xE0CE09E8L,1L,0xAB180407L}}};
        int32_t *l_733 = (void*)0;
        int32_t *l_734 = &g_377;
        int32_t *l_735 = &l_580[0];
        int32_t *l_736 = (void*)0;
        int32_t *l_737 = &g_250;
        int32_t *l_738 = &l_469;
        int32_t *l_739 = &l_435;
        int32_t *l_740 = &l_577;
        int32_t *l_741 = &l_580[0];
        int32_t *l_742[7] = {&l_393,&l_393,&l_393,&l_393,&l_393,&l_393,&l_393};
        int8_t l_744 = 0x10L;
        int64_t l_745 = (-1L);
        uint64_t l_746 = 0x673E63186CC9D348LL;
        int32_t l_763 = (-8L);
        int8_t l_768 = 0x66L;
        struct S0 ** const *l_793[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S1 *** const * const l_802 = (void*)0;
        int32_t l_845 = 9L;
        union U2 l_849 = {-4L};
        uint8_t l_861 = 1UL;
        int32_t *l_863 = &l_435;
        int i, j, k;
    }
    return (*g_210);
}



static uint8_t * func_18(const uint8_t * p_19, const uint16_t  p_20, int8_t  p_21, const uint8_t * const  p_22, int8_t  p_23)
{ 
    struct S0 l_346 = {4294967286UL,0L,0x9870310A6770327ALL};
    uint16_t l_348 = 0x11C3L;
    uint8_t *l_355 = &g_177[5];
    int32_t l_364 = 0x87A77D2BL;
    int32_t l_365 = 0x47D4B94EL;
    int32_t l_366 = 3L;
    int32_t l_368 = 1L;
    uint16_t l_369 = 65531UL;
    int32_t *l_372 = &g_342;
    int32_t *l_373 = &l_365;
    int32_t *l_374 = (void*)0;
    int32_t *l_375 = &l_364;
    int32_t *l_376[3];
    int32_t l_378 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_376[i] = &g_250;
    for (g_250 = 0; (g_250 >= 0); g_250 = safe_add_func_uint32_t_u_u(g_250, 3))
    { 
        uint64_t l_345 = 1UL;
        int32_t *l_347 = &g_49;
        int32_t l_367 = 0L;
        if (((l_345 > (((l_346 , &g_342) != l_347) , (l_346.f2 || l_348))) && (((safe_div_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(l_346.f2, 8UL)), (*l_347))), l_348)) || 0xEDL) < g_177[4])))
        { 
            if (p_21)
                break;
            return l_355;
        }
        else
        { 
            int32_t *l_356 = &g_342;
            int32_t *l_357 = &g_49;
            int32_t *l_358 = &g_49;
            int32_t *l_359 = &g_49;
            int32_t *l_360 = &g_342;
            int32_t *l_361 = &g_49;
            int32_t *l_362 = &g_49;
            int32_t *l_363[4];
            int i;
            for (i = 0; i < 4; i++)
                l_363[i] = &g_342;
            --l_369;
        }
        if (l_346.f0)
            goto lbl_385;
    }
    g_379++;
lbl_385:
    g_382--;
    l_376[0] = &l_365;
    return l_355;
}



static uint8_t * func_24(union U2  p_25, uint8_t * p_26)
{ 
    int32_t l_36 = 2L;
    uint8_t *l_42 = &g_10;
    uint8_t **l_41 = &l_42;
    uint8_t **l_45 = (void*)0;
    uint8_t *l_46 = (void*)0;
    int32_t *l_341 = &g_342;
    (*l_341) |= (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(func_32(l_36, l_36, (g_27[1].f0 || ((g_6 , ((((*g_210) = func_37((g_10 ^ (((*l_41) = p_26) == ((*g_210) = (func_43((l_46 = p_26)) , (*g_210))))), l_36, p_26)) != (void*)0) <= 0x245780C9A63FAAD2LL)) ^ 0L))), 1)), 0x9A87L));
    return p_26;
}



static int8_t  func_32(uint32_t  p_33, int32_t  p_34, int32_t  p_35)
{ 
    return g_91.f0;
}



static uint8_t * func_37(int64_t  p_38, const int16_t  p_39, const uint8_t * p_40)
{ 
    int32_t *l_335 = &g_250;
    int32_t *l_336[5][3] = {{&g_250,&g_250,&g_250},{&g_250,&g_49,&g_49},{&g_250,&g_250,&g_250},{&g_250,&g_49,&g_49},{&g_250,&g_250,&g_250}};
    int32_t l_337 = 0x7916FAC9L;
    int i, j;
    for (g_91.f2 = 0; (g_91.f2 < 6); g_91.f2 = safe_add_func_uint64_t_u_u(g_91.f2, 1))
    { 
        struct S1 l_329 = {-1L,1UL,65530UL,4L,0x5D95L,4L};
        struct S1 *l_330 = (void*)0;
        struct S1 *l_331 = &g_181;
        struct S1 *l_332 = &l_329;
        (*l_332) = ((*l_331) = l_329);
    }
    for (g_252 = 0; (g_252 == 42); g_252 = safe_add_func_uint64_t_u_u(g_252, 1))
    { 
        return (*g_210);
    }
    ++g_338;
    return (*g_210);
}



static int32_t  func_43(uint8_t * p_44)
{ 
    int32_t *l_48 = &g_49;
    int32_t **l_47 = &l_48;
    uint8_t *l_54[1];
    int32_t l_56 = 0x132F4BB0L;
    int32_t l_57 = 1L;
    int32_t l_58 = 1L;
    int32_t l_59[4][4];
    uint8_t **l_70 = &l_54[0];
    int64_t *l_71 = &g_72;
    uint64_t *l_73 = &g_74;
    uint64_t **l_77 = (void*)0;
    uint64_t **l_78 = &l_73;
    int16_t *l_79 = &g_80;
    uint64_t l_81[6][6][4] = {{{18446744073709551615UL,0xD67785DC571EBB70LL,0xEA8D29EDD65E72B4LL,0xBDB26F1A7E1F4FA7LL},{0UL,0UL,0xA75048CB00984210LL,0xAC9E8F9644A59A1FLL},{0UL,0UL,0x9CD946680AE02F11LL,0xBDB26F1A7E1F4FA7LL},{0UL,18446744073709551608UL,1UL,0x5F501B3ADA1D0942LL},{0UL,0xEA8D29EDD65E72B4LL,0xAEBACB588F49E03BLL,0UL},{0x5A8448041AE354A5LL,0xADB5619AF7C767D9LL,18446744073709551615UL,0xEA8D29EDD65E72B4LL}},{{0xBDB26F1A7E1F4FA7LL,9UL,0xC1DFBCBCDB5163BELL,8UL},{18446744073709551615UL,18446744073709551609UL,0xAEBACB588F49E03BLL,18446744073709551615UL},{0xADB5619AF7C767D9LL,0xBDB26F1A7E1F4FA7LL,1UL,18446744073709551610UL},{0UL,0xA077628D16E9DE47LL,0x5D4E0960388C07A8LL,0xEF4046227A4C96F5LL},{0xAC9E8F9644A59A1FLL,0x521F313C854BE8D2LL,0xA75048CB00984210LL,9UL},{18446744073709551615UL,18446744073709551610UL,0x8626FBE56F4200C2LL,18446744073709551610UL}},{{0UL,9UL,18446744073709551608UL,0x5A8448041AE354A5LL},{0x5D4E0960388C07A8LL,18446744073709551609UL,0UL,0xC4CAE1FAD0966A49LL},{0x521F313C854BE8D2LL,0xEF4046227A4C96F5LL,2UL,0xEA8D29EDD65E72B4LL},{0x521F313C854BE8D2LL,0UL,0UL,18446744073709551615UL},{0x5D4E0960388C07A8LL,0xEA8D29EDD65E72B4LL,18446744073709551608UL,0xC1DFBCBCDB5163BELL},{0UL,0xE98E2CF014A1F699LL,0x8626FBE56F4200C2LL,0xBDB26F1A7E1F4FA7LL}},{{18446744073709551615UL,1UL,0xA75048CB00984210LL,0UL},{0xAC9E8F9644A59A1FLL,0UL,0x5D4E0960388C07A8LL,9UL},{0UL,0xE98E2CF014A1F699LL,1UL,0x5F501B3ADA1D0942LL},{0xADB5619AF7C767D9LL,0x5D4E0960388C07A8LL,0xAEBACB588F49E03BLL,18446744073709551615UL},{18446744073709551615UL,0xADB5619AF7C767D9LL,0xC1DFBCBCDB5163BELL,0x5D4E0960388C07A8LL},{0xBDB26F1A7E1F4FA7LL,0xEF4046227A4C96F5LL,18446744073709551615UL,8UL}},{{0x5A8448041AE354A5LL,0xAEBACB588F49E03BLL,0xAEBACB588F49E03BLL,0x5A8448041AE354A5LL},{0UL,0xBDB26F1A7E1F4FA7LL,1UL,0xA077628D16E9DE47LL},{0UL,18446744073709551610UL,0x9CD946680AE02F11LL,0xEF4046227A4C96F5LL},{0UL,0x25CFB43B78C37F2ELL,0xA75048CB00984210LL,0xEF4046227A4C96F5LL},{0UL,18446744073709551610UL,0xAC9E8F9644A59A1FLL,0xA077628D16E9DE47LL},{0UL,0xBDB26F1A7E1F4FA7LL,0x5621ADDA93609311LL,0x5A8448041AE354A5LL}},{{0xEA8D29EDD65E72B4LL,0xAEBACB588F49E03BLL,0UL,8UL},{0x25CFB43B78C37F2ELL,0xEF4046227A4C96F5LL,0xC4CAE1FAD0966A49LL,0x5D4E0960388C07A8LL},{0x521F313C854BE8D2LL,0xADB5619AF7C767D9LL,18446744073709551615UL,18446744073709551615UL},{0xEA8D29EDD65E72B4LL,0x5D4E0960388C07A8LL,18446744073709551608UL,0x5F501B3ADA1D0942LL},{0x0348E76E40466E1ALL,0xE98E2CF014A1F699LL,0xAC9E8F9644A59A1FLL,9UL},{18446744073709551615UL,0UL,0x644770C58F839568LL,0UL}}};
    int16_t *l_82 = (void*)0;
    int16_t *l_83 = &g_84[1];
    uint32_t l_85 = 0UL;
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = &l_56;
    struct S0 *l_94 = &g_95[0][4][0];
    const int64_t *l_120 = &g_6;
    const int64_t **l_119 = &l_120;
    struct S1 l_161 = {0L,0x3CD540B5L,65535UL,-2L,0L,0x93A3L};
    uint32_t l_165 = 18446744073709551612UL;
    union U2 *l_168 = &g_169;
    uint16_t l_202 = 0xD0B4L;
    struct S1 *l_259[2][2][7] = {{{&g_181,&l_161,&l_161,&g_181,&l_161,&l_161,&g_181},{(void*)0,&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0}},{{&g_181,&g_181,&l_161,&g_181,&g_181,&l_161,&g_181},{&g_181,(void*)0,(void*)0,&g_181,(void*)0,(void*)0,&g_181}}};
    int16_t l_263[6] = {(-1L),0x8790L,(-1L),(-1L),0x8790L,(-1L)};
    int16_t l_266 = 1L;
    int64_t **l_297[7][4] = {{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71}};
    int64_t ***l_296 = &l_297[2][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_54[i] = &g_55;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_59[i][j] = 0x9FF40B36L;
    }
    (*l_47) = (void*)0;
    (*l_87) &= (g_49 = (safe_mod_func_uint32_t_u_u(((4294967295UL >= (((*l_83) = ((safe_div_func_uint8_t_u_u((g_55--), ((safe_mul_func_int16_t_s_s(((*l_79) |= (g_27[1].f1 ^ (((0x8BL > ((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((*l_71) &= (((*l_70) = p_44) != p_44)) , (--(*l_73))) , (&g_74 == ((*l_78) = &g_74))), g_10)), l_57)) ^ 0x82D85846L), g_10)) == l_59[1][1]) ^ 0x7E338AE6L) ^ g_27[1].f1)) ^ g_10) , g_27[1].f1))), g_27[1].f0)) , l_81[3][2][0]))) , 9L)) > g_10)) > g_27[1].f0), l_85)));
    for (g_55 = 0; (g_55 != 36); g_55 = safe_add_func_uint8_t_u_u(g_55, 9))
    { 
        struct S0 **l_92 = (void*)0;
        struct S0 **l_93[2];
        int32_t l_99 = (-1L);
        uint64_t **l_115 = &l_73;
        int32_t l_127 = 0x4A096ABDL;
        struct S1 *l_201 = (void*)0;
        int32_t **l_204[1];
        int16_t *l_242 = &g_162[2];
        uint32_t *l_274 = &g_104;
        int32_t *l_281 = &g_49;
        int64_t **l_295[3][3] = {{&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71}};
        int64_t ***l_294 = &l_295[1][2];
        int64_t *l_299 = &g_72;
        uint8_t l_318[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_93[i] = &g_90;
        for (i = 0; i < 1; i++)
            l_204[i] = &l_48;
        for (i = 0; i < 2; i++)
            l_318[i] = 0x6AL;
        l_94 = g_90;
        for (l_56 = 0; (l_56 <= 1); l_56 += 1)
        { 
            int16_t l_102 = 0x6CF2L;
            int32_t l_103[2];
            int64_t *l_107 = &g_72;
            int32_t l_125 = 0x5597C988L;
            int32_t l_158 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_103[i] = (-7L);
            for (g_72 = 0; (g_72 <= 1); g_72 += 1)
            { 
                int64_t l_96 = 0xCB8EC4A45BEF7218LL;
                int32_t *l_97 = &g_49;
                int32_t l_101 = 0x79535C36L;
                l_96 |= 4L;
                (*l_97) |= 0x217868D4L;
                for (l_96 = 0; (l_96 <= 1); l_96 += 1)
                { 
                    int32_t *l_98[6] = {&l_59[1][1],&l_59[1][1],&l_59[1][1],&l_59[1][1],&l_59[1][1],&l_59[1][1]};
                    int64_t **l_108 = &l_107;
                    int8_t *l_116 = &g_100;
                    const int64_t ***l_121 = (void*)0;
                    const int64_t ***l_122 = &l_119;
                    uint16_t *l_123 = &g_124[0];
                    int i;
                    g_104++;
                    l_125 &= (g_95[0][4][0].f0 != (((*l_123) = ((((((*l_108) = l_107) != ((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((*l_116) = (safe_rshift_func_int16_t_s_s(((*l_83) = g_27[1].f0), ((void*)0 != l_115)))), (safe_rshift_func_int8_t_s_s((((*l_97) , ((*l_122) = l_119)) == &l_120), 7)))), (*p_44))) , (void*)0)) == g_6) && 0L) , 1UL)) != l_103[1]));
                }
                for (l_85 = 0; (l_85 <= 1); l_85 += 1)
                { 
                    g_49 = ((&g_100 == &g_100) ^ 0x3805CA1CL);
                }
                return g_6;
            }
            if (g_91.f1)
                continue;
            for (g_91.f2 = 0; (g_91.f2 <= 1); g_91.f2 += 1)
            { 
                int32_t l_130 = 0x828D7B09L;
                int32_t l_157 = (-1L);
                int32_t l_163 = 0x7F49760BL;
                int32_t l_164 = 0x163BA63EL;
                union U2 *l_171 = &g_169;
                union U2 **l_170 = &l_171;
                int32_t *l_172 = &l_99;
                int32_t *l_173 = &l_99;
                int32_t *l_174 = (void*)0;
                int32_t *l_175 = &l_163;
                int32_t *l_176[2][3][2] = {{{(void*)0,(void*)0},{&l_99,(void*)0},{(void*)0,&l_99}},{{(void*)0,(void*)0},{&l_99,(void*)0},{(void*)0,&l_99}}};
                int i, j, k;
                for (l_102 = 0; (l_102 <= 0); l_102 += 1)
                { 
                    int32_t l_126 = 0xC2DAEADAL;
                    int32_t l_128 = (-1L);
                    int32_t *l_129[7][3][5] = {{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_126,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint16_t l_144 = 65526UL;
                    uint16_t *l_159 = &g_124[0];
                    struct S1 l_160[1] = {{0x2DFE0259L,18446744073709551613UL,0xCAC5L,3L,-1L,-3L}};
                    int i, j, k;
                    --g_131;
                    l_158 &= ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((l_157 ^= ((*p_44) < ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*p_44) | 8UL), l_144)), ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_103[1] = (safe_lshift_func_uint8_t_u_s((((l_130 & (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((65535UL < ((*l_83) = l_125)) || g_91.f0), l_127)), l_130))) || 4294967293UL) ^ l_102), g_95[0][4][0].f2))), 0x8C3AL)), l_102)) == g_95[0][4][0].f0), l_130)) & g_104))) >= l_127))) ^ (*l_87)), g_91.f2)) != 4L), g_80)) ^ l_130), 11)) , (*l_87));
                    g_49 &= (0UL > ((*l_159) = ((void*)0 == &l_73)));
                    l_161 = l_160[0];
                    l_165++;
                }
                (*l_170) = (l_168 = &g_27[2]);
                g_177[6]--;
            }
        }
        for (l_161.f3 = 0; (l_161.f3 >= 0); l_161.f3 -= 1)
        { 
            const struct S1 **l_182 = &g_180;
            union U2 l_191 = {0xA5DC94D4L};
            int8_t *l_198 = (void*)0;
            int8_t *l_199[1][7] = {{&g_100,&g_100,&g_100,&g_100,&g_100,&g_100,&g_100}};
            int32_t **l_203[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_203[i] = &l_87;
            (*l_182) = g_180;
            g_49 = ((safe_mul_func_int16_t_s_s((g_84[1] & (((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((l_191 , ((*l_79) ^= (*l_87))), (safe_rshift_func_int16_t_s_s((g_169.f1 == (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((g_100 = (l_191.f0 > g_162[2])) ^ (safe_unary_minus_func_int64_t_s((((void*)0 != l_201) ^ l_127)))), (*l_87))), g_10))), (*l_87))))) , g_181.f3) | g_104), 65535UL)) > (*l_87)), g_181.f4)) >= g_91.f2) && (*p_44))), (*l_87))) == l_99);
            if (l_202)
                break;
            for (l_99 = 0; (l_99 >= 0); l_99 -= 1)
            { 
                (*l_47) = &l_99;
                if ((*l_87))
                    break;
                g_49 = (g_27[1] , ((l_47 = l_203[1]) == (g_169 , l_204[0])));
            }
            return g_169.f0;
        }
        g_49 = (g_80 > (safe_div_func_int8_t_s_s(((void*)0 != g_207), ((((void*)0 == &g_131) | (0xF6415602L < (safe_lshift_func_uint8_t_u_u((((((g_210 != (void*)0) , (*l_168)) , (*l_87)) && (*l_87)) > 0xA9D10A5776C01778LL), 5)))) | g_124[0]))));
        if (g_27[1].f1)
        { 
            uint16_t *l_220 = &g_124[0];
            uint32_t *l_223 = &g_104;
            int32_t l_224 = 2L;
            struct S1 *l_262 = &l_161;
            union U2 l_268 = {1L};
            struct S0 l_298 = {4294967291UL,1L,7UL};
            const int64_t *l_300 = &g_72;
            if ((0x23F389C257DC1769LL | ((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((*p_44), (safe_sub_func_uint16_t_u_u(((*l_220) |= ((*p_44) < 255UL)), (((*l_73) = g_177[2]) , ((((*l_223) = (safe_div_func_uint8_t_u_u(((0xDAA136FB27EF69D7LL <= g_91.f0) || (-1L)), 1L))) && 0x2E7FBE32L) | l_224)))))) && 0x91L), (*g_211))) || l_224), (*p_44))) || 0x57959B7E851782DALL)))
            { 
                struct S0 l_225 = {0xAEEB0FD5L,0x6BA7L,0xE9A38E781DF53A70LL};
                struct S1 *l_226 = &l_161;
                struct S1 **l_260 = (void*)0;
                struct S1 **l_261 = (void*)0;
                (*l_226) = (l_225 , (*g_180));
                g_250 |= ((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((*l_226) , (safe_div_func_int64_t_s_s((+(*l_87)), ((safe_add_func_int64_t_s_s((((l_225.f0 | ((safe_rshift_func_uint16_t_u_s(((void*)0 != l_242), ((((safe_rshift_func_int16_t_s_s(((*l_242) |= (l_224 = (!(safe_sub_func_uint64_t_u_u(18446744073709551614UL, (safe_lshift_func_int8_t_s_u(((((((*l_79) ^= g_169.f1) > g_49) != (**g_210)) && g_84[3]) > (-6L)), (*g_211)))))))), g_72)) , 0x17L) <= g_55) , l_225.f2))) , 0xB44A95AFFB80BBF0LL)) == 18446744073709551615UL) && g_181.f1), g_91.f2)) | (*g_211))))) >= l_225.f2) < l_225.f2), (*l_87))), 0xCFL)), l_225.f0)), 0UL)) && l_225.f0);
                g_252++;
                if ((g_250 |= (safe_mod_func_int32_t_s_s((((safe_add_func_int32_t_s_s(g_124[0], 0xC98966E9L)) , (l_259[0][0][0] != (l_262 = &g_181))) & ((l_263[4] && g_177[2]) >= (safe_rshift_func_uint8_t_u_s((((*l_242) = l_266) || l_224), 1)))), 0xF42DF363L))))
                { 
                    int32_t *l_267 = &l_59[1][1];
                    (*l_87) ^= (g_49 |= (l_267 != ((**g_210) , l_267)));
                    return l_224;
                }
                else
                { 
                    if (l_225.f1)
                        break;
                    return g_91.f0;
                }
            }
            else
            { 
                int8_t *l_272 = &g_251[0][5][0];
                uint32_t *l_273 = &g_104;
                uint32_t **l_275 = &l_274;
                int32_t l_277 = 1L;
                struct S1 **l_280 = &l_259[0][0][0];
                (*l_87) |= g_124[0];
                g_250 = (l_268 , ((g_91.f2 > (*p_44)) < ((*l_272) = ((((g_6 , &g_250) != (void*)0) != (safe_mod_func_int64_t_s_s(((safe_unary_minus_func_uint16_t_u((((*g_210) = ((*l_70) = (*g_210))) != (void*)0))) <= 0x98L), l_268.f0))) & (*l_87)))));
                if ((g_181.f3 & (l_273 != ((*l_275) = l_274))))
                { 
                    (*l_87) |= 1L;
                }
                else
                { 
                    uint16_t * const l_278 = &l_161.f2;
                    int32_t *l_279 = &l_57;
                    (*l_87) |= (!(l_277 , ((void*)0 != l_278)));
                    (*l_47) = (void*)0;
                    (*l_47) = l_279;
                }
                (*l_280) = &g_181;
            }
            l_281 = (void*)0;
            for (g_49 = (-12); (g_49 == (-3)); g_49 = safe_add_func_int64_t_s_s(g_49, 8))
            { 
                int16_t l_301 = 0x6F90L;
                if ((((*l_220) = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(((0x58762193DFA98145LL & (safe_lshift_func_int16_t_s_u(((((*l_83) = (safe_div_func_uint16_t_u_u(((l_296 = l_294) == (void*)0), ((0x99L || (*p_44)) , (((*l_73) &= (((l_298 , l_299) != l_300) >= g_10)) || l_268.f1))))) >= 65534UL) | g_169.f1), l_224))) != 6UL), l_224)) >= g_91.f0) != l_301), l_298.f2)), (*p_44)))) | 0x8AB1L))
                { 
                    if (g_251[0][5][5])
                        break;
                    g_250 |= (safe_mul_func_int8_t_s_s(((g_104--) , 0xA4L), l_298.f0));
                }
                else
                { 
                    uint32_t *l_316 = &g_104;
                    int32_t l_317 = (-1L);
                    g_250 = ((safe_mul_func_int16_t_s_s(((l_301 , ((safe_mod_func_uint16_t_u_u((0x793B5E6BF76EF71ALL < 1L), 0xA24FL)) | ((safe_div_func_uint64_t_u_u(((0xAAL && (safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((l_316 != l_223) ^ 0UL), 1L)) <= l_317), 7))) <= (-1L)), 0x732DA343AA78C08CLL)) | (-5L)))) , l_224), l_301)) == l_317);
                    l_318[0]++;
                    return g_84[1];
                }
            }
        }
        else
        { 
            int8_t l_321 = 0L;
            int32_t l_322 = 0L;
            int32_t l_323 = 0x9E374AD1L;
            --g_324[0];
            for (g_74 = 0; (g_74 <= 5); g_74 += 1)
            { 
                if (g_95[0][4][0].f1)
                    break;
            }
            return l_323;
        }
    }
    return g_252;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_27[i].f0, "g_27[i].f0", print_hash_value);
        transparent_crc(g_27[i].f1, "g_27[i].f1", print_hash_value);

    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_95[i][j][k].f0, "g_95[i][j][k].f0", print_hash_value);
                transparent_crc(g_95[i][j][k].f1, "g_95[i][j][k].f1", print_hash_value);
                transparent_crc(g_95[i][j][k].f2, "g_95[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);

    }
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_169.f1, "g_169.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_181.f4, "g_181.f4", print_hash_value);
    transparent_crc(g_181.f5, "g_181.f5", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_251[i][j][k], "g_251[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_324[i], "g_324[i]", print_hash_value);

    }
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_667.f0, "g_667.f0", print_hash_value);
    transparent_crc(g_667.f1, "g_667.f1", print_hash_value);
    transparent_crc(g_667.f2, "g_667.f2", print_hash_value);
    transparent_crc(g_667.f3, "g_667.f3", print_hash_value);
    transparent_crc(g_667.f4, "g_667.f4", print_hash_value);
    transparent_crc(g_667.f5, "g_667.f5", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_963[i][j][k].f0, "g_963[i][j][k].f0", print_hash_value);
                transparent_crc(g_963[i][j][k].f1, "g_963[i][j][k].f1", print_hash_value);
                transparent_crc(g_963[i][j][k].f2, "g_963[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_1022, "g_1022", print_hash_value);
    transparent_crc(g_1158, "g_1158", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
