// SPDX-License-Identifier: MIT
// cctest_csmith_38ac2f29.c --- cctest case csmith_38ac2f29 (csmith seed 950808361)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x96fa6744 */
/* @exp_ticks 0x3a86 */

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

// Options:   -s 950808361 -o /tmp/csmith_gen_mo57hqtl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const int32_t  f1;
};

struct S1 {
   uint64_t  f0;
   uint64_t  f1;
   const uint16_t  f2;
};

struct S2 {
   struct S0  f0;
};

struct S3 {
   int32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   struct S1  f0;
   int64_t  f1;
   uint8_t  f2;
   int32_t  f3;
   int8_t  f4;
   struct S3  f5;
};
#pragma pack(pop)

union U5 {
   struct S2  f0;
   const struct S3  f1;
};

union U6 {
   int32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};


static int32_t g_3 = (-1L);
static int32_t g_4 = 1L;
static struct S0 g_12 = {0x017779A7B445ACEELL,-7L};
static union U6 g_13 = {2L};
static int32_t g_34 = 0x0B8F3BECL;
static uint64_t g_58 = 3UL;
static uint32_t g_63[5] = {0xE7656207L,0xE7656207L,0xE7656207L,0xE7656207L,0xE7656207L};
static uint32_t g_68 = 0x725687F7L;
static int32_t g_106 = (-1L);
static int64_t g_107 = 0x379706C822056F02LL;
static struct S4 g_109 = {{0xF54F23DFB53829EALL,0xC7313B58279F83FALL,1UL},0x38347E9BEE6A4CB4LL,255UL,6L,0x52L,{0x832669E6L}};
static struct S3 g_129 = {-6L};
static uint32_t g_211 = 0x587CEBA9L;
static union U5 g_245[4] = {{{{0x3869ADE63D16F920LL,0x749428BCL}}},{{{0x3869ADE63D16F920LL,0x749428BCL}}},{{{0x3869ADE63D16F920LL,0x749428BCL}}},{{{0x3869ADE63D16F920LL,0x749428BCL}}}};
static int64_t g_251 = (-9L);
static int32_t g_296 = 0L;
static int16_t g_297 = (-6L);
static uint32_t g_298 = 0UL;



static uint32_t  func_1(void);
static int16_t  func_8(struct S0  p_9, int32_t  p_10, union U6  p_11);
static struct S4  func_18(union U5  p_19, const uint8_t  p_20, struct S3  p_21, uint16_t  p_22, uint8_t  p_23);
static union U5  func_24(int8_t  p_25, int64_t  p_26);




static uint32_t  func_1(void)
{ 
    int8_t l_2[1][3];
    uint16_t l_7 = 0xEEA5L;
    int32_t l_262 = 9L;
    uint64_t l_291 = 0x106D382288B616A7LL;
    struct S3 l_311 = {2L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = (-1L);
    }
lbl_308:
    for (g_3 = 0; g_3 < 1; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 3; g_4 += 1)
        {
            l_2[g_3][g_4] = 0x9AL;
        }
    }
    if ((((safe_lshift_func_uint8_t_u_s(((l_7 || func_8(g_12, g_4, (g_13 = g_13))) , l_2[0][0]), g_245[3].f0.f0.f1)) == g_245[3].f0.f0.f0) ^ g_12.f1))
    { 
        uint32_t l_263 = 4294967295UL;
        struct S4 l_276 = {{0x6C19CA71FDF0439DLL,1UL,0x7825L},5L,249UL,0x7738A404L,0x22L,{0x32E96215L}};
        int32_t l_295[2];
        int i;
        for (i = 0; i < 2; i++)
            l_295[i] = (-8L);
        if (((g_109.f5 , (safe_add_func_uint64_t_u_u((g_109.f0.f0 = ((((safe_mul_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(g_109.f5.f0, (l_262 = (g_63[2] < 0UL)))), 12)), 0UL)) , g_107) | l_263) ^ g_106)), g_109.f0.f2))) || 0L))
        { 
            uint32_t l_287 = 0x289A04E6L;
            int32_t l_290 = 8L;
            for (g_109.f1 = 0; (g_109.f1 != 12); g_109.f1 = safe_add_func_int16_t_s_s(g_109.f1, 4))
            { 
                int32_t l_281[3][5][3] = {{{(-1L),(-1L),0x9E0AF0EFL},{0xBA22A9C7L,(-5L),0x48E640C1L},{0xEBCAD0B6L,(-1L),0xEBCAD0B6L},{(-1L),0xBA22A9C7L,0L},{(-1L),0xEBCAD0B6L,0xEBCAD0B6L}},{{0L,(-1L),0x48E640C1L},{0x5FEB8AD3L,(-1L),0x9E0AF0EFL},{0L,0L,1L},{(-1L),0x5FEB8AD3L,8L},{(-1L),0L,(-1L)}},{{0xEBCAD0B6L,(-1L),(-1L)},{0xBA22A9C7L,(-1L),(-1L)},{(-1L),0x5FEB8AD3L,0x9E0AF0EFL},{0x48E640C1L,(-1L),0L},{0x836CB3E5L,0x836CB3E5L,(-1L)}}};
                int32_t l_286 = 0L;
                int i, j, k;
                l_281[0][4][2] = ((safe_add_func_uint8_t_u_u((g_109.f0.f2 < (((l_286 ^= (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((l_276 , (safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((l_281[0][4][2] || (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_34, l_281[0][4][2])), 0))), g_4)) && g_34), l_281[0][2][1]))), g_34)), 1L)) ^ g_251), 0xA45FL)), l_262))) , l_276.f0.f1) == l_287)), g_12.f0)) , g_68);
                l_262 |= ((g_68 |= l_287) > (l_281[2][2][2] = (g_109.f2 != ((safe_unary_minus_func_int16_t_s(((safe_unary_minus_func_uint16_t_u((l_276.f5.f0 |= ((g_129 , (g_4 = (0x3EL <= g_58))) >= 0xEAA763E7L)))) , g_63[2]))) >= 0x6A78B0151094EE7DLL))));
                l_290 = g_109.f1;
            }
            l_291--;
            if ((g_3 = (2L | 2L)))
            { 
                int32_t l_294[5][4][2] = {{{0x86F106E5L,0x86F106E5L},{0L,(-8L)},{0L,0x86F106E5L},{0x86F106E5L,(-8L)}},{{0x86F106E5L,0x86F106E5L},{0L,(-8L)},{0L,0x86F106E5L},{0x86F106E5L,(-8L)}},{{0x86F106E5L,0x86F106E5L},{0L,(-8L)},{0L,0x86F106E5L},{0x86F106E5L,(-8L)}},{{0x86F106E5L,0x86F106E5L},{0L,(-8L)},{0L,0x86F106E5L},{0x86F106E5L,(-8L)}},{{0x86F106E5L,0x86F106E5L},{0L,(-8L)},{0L,0x86F106E5L},{0x86F106E5L,(-8L)}}};
                int i, j, k;
                g_298--;
                l_262 ^= ((l_295[0] = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((l_276.f0.f0 && (g_12.f1 , (safe_rshift_func_uint16_t_u_s(((g_107 = (g_109.f0.f2 == l_7)) ^ 1L), 6)))) , g_12.f1), 1L)), l_276.f2))) < g_4);
            }
            else
            { 
                int8_t l_307 = 0xB7L;
                l_307 ^= (-1L);
                return g_12.f0;
            }
        }
        else
        { 
            if (g_129.f0)
                goto lbl_308;
        }
        for (g_13.f0 = (-5); (g_13.f0 >= 3); g_13.f0 = safe_add_func_uint16_t_u_u(g_13.f0, 5))
        { 
            struct S3 l_312 = {0x88EC784BL};
            l_312 = l_311;
        }
        for (g_109.f1 = 0; g_109.f1 < 5; g_109.f1 += 1)
        {
            g_63[g_109.f1] = 18446744073709551615UL;
        }
    }
    else
    { 
        uint32_t l_313 = 0x84671B80L;
        return l_313;
    }
    return l_311.f0;
}



static int16_t  func_8(struct S0  p_9, int32_t  p_10, union U6  p_11)
{ 
    uint32_t l_169 = 4UL;
    int32_t l_206 = 0L;
    for (p_11.f1 = 0; (p_11.f1 > 28); ++p_11.f1)
    { 
        const uint64_t l_33 = 0x6D4F509E13C9534CLL;
        int16_t l_157 = 0xC253L;
        int32_t l_158 = 0x15F50615L;
        int32_t l_205 = 5L;
        struct S0 l_231[1] = {{0x810D713517DEDC2ELL,1L}};
        int i;
        l_158 = ((((safe_div_func_uint64_t_u_u(((func_18(func_24((safe_div_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_33, 5)), l_33)) || p_9.f0) > (g_34 = p_11.f2)), g_12.f1)), l_33), g_106, g_129, l_33, g_109.f0.f2) , 0xD32EC22218209F72LL) | p_11.f2), 6UL)) == 0xFCL) , 0x68D3076AE705E6A0LL) < l_157);
        if ((safe_add_func_int64_t_s_s(g_129.f0, (0xABCB02F5L >= (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((l_169 = (0xA0D05BA9ED696CBCLL < (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u(p_11.f0, g_12.f1)) >= 0x62B2L) & 0x70L), 0x2B2AL)))), g_3)), p_11.f2))))))
        { 
            uint32_t l_202 = 0x8239DE1BL;
            int32_t l_203[5] = {0L,0L,0L,0L,0L};
            int32_t l_204 = 0x445B8245L;
            struct S3 l_214 = {1L};
            int i;
            l_206 &= (((((((safe_mod_func_int8_t_s_s((g_34 & ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((l_204 = (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((l_203[0] |= (safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(((-1L) <= ((safe_div_func_int16_t_s_s((safe_div_func_uint64_t_u_u(1UL, (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(l_202, p_11.f1)), l_169)) < g_107) == 65535UL), l_169)), g_109.f0.f0)))), p_10)) <= l_169)), l_202)), g_109.f2)) > 9L) & 0xC7D868F3A24A8259LL), 0x10615127L)) < g_109.f0.f0), (-10L))), g_109.f4))) | 0x4FL), 0xB7L)), g_63[2]))), l_169)), 0)) | 255UL)), g_109.f2)) , p_11.f0) , g_34) || 6L) | 0UL) || 0xBAF6B6E5B2E24D0FLL) & l_205);
            if ((g_109.f0 , (safe_div_func_uint64_t_u_u((g_12.f0 <= g_109.f2), ((safe_div_func_uint32_t_u_u(l_158, g_4)) , g_129.f0)))))
            { 
                l_158 ^= p_9.f1;
                if (p_11.f2)
                    continue;
                g_211++;
            }
            else
            { 
                struct S3 l_215 = {-1L};
                l_215 = l_214;
                return l_215.f0;
            }
        }
        else
        { 
            uint8_t l_232 = 254UL;
            int32_t l_233 = 0x360856D3L;
            for (p_9.f0 = 0; (p_9.f0 >= 21); p_9.f0 = safe_add_func_uint16_t_u_u(p_9.f0, 4))
            { 
                g_4 ^= 0x3321FAC7L;
            }
            for (g_211 = 0; (g_211 <= 4); g_211 += 1)
            { 
                struct S4 l_224 = {{0x929445B3C7D797C3LL,0xE7E03242B5ABC4B9LL,65534UL},0xCE9AB8218D5A751ALL,246UL,-1L,1L,{0x232EF97DL}};
                int i;
                l_233 = ((g_63[g_211] & (safe_add_func_int8_t_s_s(((((g_34 = ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((l_224 , (g_12.f0 = ((safe_lshift_func_int16_t_s_s((((safe_sub_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((l_232 = (0UL & (l_231[0] , 0x6F81L))), g_12.f1)) > g_109.f5.f0), 0x7BEFE2CA5F56C540LL)) | g_63[4]) && g_109.f0.f0), 7)) , (-1L)))) , 6L), 7)) >= g_109.f0.f1), 2)) != l_205)) , 0x3C14F001L) ^ p_9.f1) || 0x10L), l_233))) >= 0UL);
                g_129.f0 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((2L < (g_12.f1 != ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(g_63[1], (+(((((p_11.f0 & p_11.f1) , p_9.f1) < 0xA1ACL) , g_245[3]) , g_129.f0)))) == g_107), 0L)), 3)) & (-1L)))), l_206)), l_169));
                g_109.f5.f0 &= (~(((g_251 |= (safe_mul_func_uint8_t_u_u((g_211 || (g_245[3].f0 , l_33)), (safe_rshift_func_int8_t_s_s((p_11 , g_109.f2), g_58))))) || g_109.f0.f1) != p_9.f1));
            }
        }
    }
    return g_63[3];
}



static struct S4  func_18(union U5  p_19, const uint8_t  p_20, struct S3  p_21, uint16_t  p_22, uint8_t  p_23)
{ 
    uint32_t l_134 = 4294967295UL;
    int32_t l_137 = 0x998684FAL;
    int8_t l_138 = 0x52L;
    int32_t l_146 = 5L;
    uint16_t l_153 = 0x1BD8L;
    struct S4 l_156 = {{18446744073709551608UL,5UL,0xBC24L},0xECF75C71E7B35E0ELL,1UL,1L,0L,{-1L}};
    if ((g_109.f5.f0 = ((l_138 = (safe_mul_func_uint16_t_u_u(((l_137 = (safe_div_func_int32_t_s_s(l_134, (safe_sub_func_uint8_t_u_u(1UL, (p_22 >= 0x8EL)))))) , p_20), p_23))) < g_68)))
    { 
        uint32_t l_139 = 0x84042AD9L;
        ++l_139;
        p_21.f0 |= (((g_13.f1 = (safe_div_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((l_139 ^ l_138), 7)) & g_109.f4) >= ((l_138 | l_134) >= l_138)) <= g_34), 0xF6L))) != l_139) > 0x03L);
    }
    else
    { 
        uint32_t l_147 = 4UL;
        int32_t l_152[4] = {0L,0L,0L,0L};
        int i;
        --l_147;
        l_137 |= ((((p_23 = ((safe_add_func_int32_t_s_s((p_19.f0.f0.f1 || 0x37973C54L), (g_109.f2 , p_23))) , p_21.f0)) > p_20) <= p_21.f0) ^ p_19.f0.f0.f0);
        l_153++;
    }
    return l_156;
}



static union U5  func_24(int8_t  p_25, int64_t  p_26)
{ 
    int8_t l_42[2][1];
    int32_t l_43 = 0xCA44BAB9L;
    int32_t l_44 = (-1L);
    const struct S3 l_45 = {1L};
    struct S3 l_46 = {-3L};
    union U6 l_90 = {1L};
    union U5 l_128 = {{{0xE7FC0861EEEE36A7LL,-10L}}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_42[i][j] = 9L;
    }
    g_4 = (((l_44 = (l_43 = (((safe_mod_func_uint64_t_u_u(p_26, (+0x96L))) > ((((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_25, 1UL)), 6)) > l_42[1][0]) == 0x9FBC0AE2L) < (-1L))) < l_42[1][0]))) && l_42[1][0]) && l_42[1][0]);
    l_46 = l_45;
    for (l_46.f0 = (-16); (l_46.f0 <= 26); l_46.f0 = safe_add_func_uint16_t_u_u(l_46.f0, 9))
    { 
        const uint32_t l_57 = 0x3A04BB84L;
        struct S3 l_59 = {0x32B805D3L};
        int32_t l_62 = (-5L);
        int32_t l_66 = 0x015DB4C2L;
        struct S1 l_119 = {18446744073709551611UL,0x547669497261C419LL,65535UL};
        for (g_13.f2 = 0; (g_13.f2 <= 0); g_13.f2 += 1)
        { 
            const int8_t l_60 = 0xD5L;
            int32_t l_67 = 0x40306456L;
            int i, j;
            if ((((safe_div_func_uint8_t_u_u(l_42[(g_13.f2 + 1)][g_13.f2], (safe_add_func_int16_t_s_s(l_42[(g_13.f2 + 1)][g_13.f2], p_25)))) <= ((((g_58 = (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u((g_3 > 0x43E267A5E2B1956ALL), 0xAB72231B3DFA8E8BLL)) != l_57), g_13.f2))) || g_34) > 5L) == l_45.f0)) ^ p_26))
            { 
                l_59 = l_46;
            }
            else
            { 
                int64_t l_61 = (-3L);
                if (l_60)
                    break;
                if (p_25)
                    continue;
                ++g_63[2];
            }
            for (l_43 = 0; (l_43 <= 0); l_43 += 1)
            { 
                int32_t l_77 = 0L;
                int i, j;
                l_62 = (-7L);
                g_3 ^= (l_66 > (((--g_68) || ((safe_rshift_func_uint16_t_u_s(p_26, 10)) > (safe_rshift_func_int8_t_s_u((l_42[g_13.f2][l_43] = (l_67 ^ 0UL)), l_44)))) != 0xA963L));
                l_77 = (l_42[g_13.f2][l_43] != (((g_58 = (safe_rshift_func_uint16_t_u_u(0x0F42L, l_57))) > 0UL) < l_42[(g_13.f2 + 1)][g_13.f2]));
            }
        }
        l_43 = ((safe_sub_func_uint32_t_u_u((l_66 > 0x0D780A89L), (4294967295UL == (((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_58 | p_26), 9)), p_26)) | p_26) >= 0xC93045D7L) ^ g_12.f1) < 18446744073709551606UL)))) || (-3L));
        for (p_25 = 4; (p_25 >= 1); p_25 -= 1)
        { 
            uint32_t l_105 = 4294967286UL;
            int32_t l_120 = 0x45203A91L;
            struct S3 l_126 = {0xF5F90F01L};
            struct S3 l_127[4][2][1] = {{{{0x95A6F79FL}},{{0L}}},{{{0x95A6F79FL}},{{0x95A6F79FL}}},{{{0L}},{{0x95A6F79FL}}},{{{0x95A6F79FL}},{{0L}}}};
            int i, j, k;
            for (g_58 = 1; (g_58 <= 4); g_58 += 1)
            { 
                int32_t l_108 = 0L;
                int i;
                l_108 |= (((safe_add_func_int16_t_s_s((g_107 |= (((safe_add_func_int64_t_s_s(g_63[p_25], (safe_sub_func_int16_t_s_s((l_90 , 0x0343L), ((g_4 &= ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((l_90.f0 || g_63[p_25]), 0x30FD8B1EB1534744LL)) >= l_105) || p_26), g_68)), 3)), (-1L))), p_25)), g_3)), g_106)) , g_34)) , 0x8868L))))) != 0xBDL) | 0L)), g_63[3])) > g_12.f1) == 0xCAL);
                l_120 = (((g_109 , ((safe_add_func_uint64_t_u_u((+(safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((l_119 , ((l_108 || (g_13.f2 = g_109.f0.f1)) | 18446744073709551615UL)), p_26)) , g_63[3]), g_109.f2)) > 0xA3L) || p_26), l_119.f1))), p_25)) , 247UL)) >= g_63[2]) != l_59.f0);
            }
            if (l_43)
            { 
                l_62 = p_25;
                l_120 = ((safe_rshift_func_uint16_t_u_s(3UL, 13)) <= (p_26 == (safe_rshift_func_uint16_t_u_u((~(1UL && p_26)), 12))));
            }
            else
            { 
                l_127[0][0][0] = (l_126 = (g_109.f5 = l_45));
            }
        }
    }
    return l_128;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109.f0.f0, "g_109.f0.f0", print_hash_value);
    transparent_crc(g_109.f0.f1, "g_109.f0.f1", print_hash_value);
    transparent_crc(g_109.f0.f2, "g_109.f0.f2", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5.f0, "g_109.f5.f0", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_245[i].f0.f0.f0, "g_245[i].f0.f0.f0", print_hash_value);
        transparent_crc(g_245[i].f0.f0.f1, "g_245[i].f0.f0.f1", print_hash_value);

    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
