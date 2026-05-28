// SPDX-License-Identifier: MIT
// cctest_csmith_32198651.c --- cctest case csmith_32198651 (csmith seed 840533585)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7cdb2cf6 */
/* @exp_ticks 0x38a5 */

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

// Options:   -s 840533585 -o /tmp/csmith_gen_hol8bl9h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
};

union U2 {
   uint32_t  f0;
   int64_t  f1;
};


static uint16_t g_8 = 1UL;
static struct S0 g_27 = {0L,6L};
static int16_t g_39 = 0xD6B2L;
static uint16_t g_95[2][5][3] = {{{0UL,0x0F3FL,0x0F3FL},{6UL,0x0F3FL,65532UL},{0x725BL,0UL,6UL},{6UL,6UL,6UL},{0UL,0x725BL,65532UL}},{{0x0F3FL,6UL,0x0F3FL},{0x0F3FL,0UL,6UL},{0UL,0x0F3FL,0x0F3FL},{6UL,0x0F3FL,65532UL},{0x725BL,0UL,6UL}}};
static uint32_t g_116 = 4294967290UL;
static int32_t g_117 = 0L;
static int16_t g_118 = (-2L);



static uint32_t  func_1(void);
static const uint32_t  func_2(uint16_t  p_3, int64_t  p_4, uint32_t  p_5, const uint32_t  p_6, uint32_t  p_7);
static int64_t  func_13(uint64_t  p_14, int32_t  p_15, uint16_t  p_16, int32_t  p_17);
static int64_t  func_18(const uint32_t  p_19, struct S0  p_20, uint64_t  p_21, int16_t  p_22);




static uint32_t  func_1(void)
{ 
    uint32_t l_28 = 1UL;
    int32_t l_130 = 0x9B814282L;
    l_130 = (func_2(g_8, (safe_div_func_int32_t_s_s(g_8, ((safe_mul_func_int16_t_s_s((18446744073709551609UL >= ((g_118 = func_13((func_18((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((g_8 && g_8), 0xBC42L)) < 0xFA2EL) && 0x03C5764361A6B719LL), 1UL)), g_27, g_27.f1, l_28) & g_116), l_28, g_116, l_28)) | 0x868ECCAC47384F12LL)), 0xA55EL)) , l_28))), g_116, l_28, l_28) , l_28);
    return g_95[0][2][0];
}



static const uint32_t  func_2(uint16_t  p_3, int64_t  p_4, uint32_t  p_5, const uint32_t  p_6, uint32_t  p_7)
{ 
    const int32_t l_121[5][4][5] = {{{(-2L),(-1L),1L,0x0260C403L,0x713F97C6L},{0x6E1962FFL,0x9C76AAD2L,(-1L),0x6E1962FFL,(-1L)},{(-1L),0x5C28DFD1L,0L,(-1L),(-1L)},{(-3L),(-1L),0x3996EF03L,0xF296794CL,0x9C76AAD2L}},{{(-2L),0xEF8B48F9L,0xF296794CL,(-3L),(-3L)},{(-3L),(-2L),(-1L),1L,0x0260C403L},{0x3996EF03L,(-1L),0xF296794CL,(-3L),(-1L)},{(-1L),0L,0x3996EF03L,0xBD3C73EBL,(-3L)}},{{(-1L),0xBD3C73EBL,0x713F97C6L,0xBD3C73EBL,(-1L)},{(-10L),(-3L),(-8L),(-3L),8L},{1L,0xEF8B48F9L,0L,1L,0xF296794CL},{0xBD3C73EBL,0x9C76AAD2L,0x713F97C6L,(-3L),8L}},{{0x3996EF03L,1L,(-10L),0xF296794CL,(-1L)},{8L,0xEF8B48F9L,(-3L),(-2L),(-3L)},{8L,8L,(-1L),0x9C76AAD2L,(-1L)},{0x3996EF03L,0x0260C403L,(-1L),(-3L),0x0260C403L}},{{0xBD3C73EBL,0L,(-8L),0x0260C403L,(-3L)},{1L,0x0260C403L,0x713F97C6L,(-1L),0x9C76AAD2L},{(-10L),8L,0xEF8B48F9L,(-3L),(-2L)},{(-1L),0xEF8B48F9L,0xEF8B48F9L,(-1L),0xF296794CL}}};
    int i, j, k;
    for (p_3 = 1; (p_3 < 32); p_3++)
    { 
        uint32_t l_124 = 4294967295UL;
        if (g_39)
        { 
            return l_121[3][0][1];
        }
        else
        { 
            uint32_t l_127 = 0xBAAD8DB6L;
            for (g_27.f0 = (-19); (g_27.f0 >= 1); g_27.f0 = safe_add_func_int32_t_s_s(g_27.f0, 8))
            { 
                if (g_116)
                    break;
                g_27.f1 = l_121[4][1][0];
                l_124++;
            }
            l_127--;
        }
    }
    return g_8;
}



static int64_t  func_13(uint64_t  p_14, int32_t  p_15, uint16_t  p_16, int32_t  p_17)
{ 
    p_15 = (g_117 = 6L);
    return p_17;
}



static int64_t  func_18(const uint32_t  p_19, struct S0  p_20, uint64_t  p_21, int16_t  p_22)
{ 
    uint32_t l_56 = 4294967288UL;
    int32_t l_63 = (-1L);
    uint8_t l_92 = 0x60L;
    struct S0 l_115 = {0xF7431CF5L,-1L};
    if ((safe_add_func_int64_t_s_s(0x56CEF3CF68729207LL, (p_21 = (!g_27.f0)))))
    { 
        int32_t l_54 = 8L;
        int32_t l_55 = 0xD208DD2DL;
        if (p_19)
        { 
            int32_t l_38 = 0x31CD1AC8L;
            uint64_t l_40[1];
            int i;
            for (i = 0; i < 1; i++)
                l_40[i] = 18446744073709551615UL;
            p_20.f1 = ((((safe_lshift_func_int8_t_s_s((1UL == (p_21 = (((safe_rshift_func_int8_t_s_s(0x09L, (((safe_rshift_func_uint8_t_u_s(((g_39 = (l_38 | p_20.f0)) <= g_8), g_27.f1)) == 1UL) == p_20.f1))) , (-9L)) == 0x84B6D700L))), 0)) > g_8) , p_21) || g_8);
            for (l_38 = 0; (l_38 <= 0); l_38 += 1)
            { 
                int i;
                return l_40[l_38];
            }
        }
        else
        { 
            uint64_t l_49 = 0xCFEC76E8D2CA8E1FLL;
            union U2 l_53 = {4294967291UL};
            l_55 ^= (safe_mul_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0xFBL, ((safe_mul_func_int8_t_s_s((l_49 = g_8), (safe_div_func_uint64_t_u_u((((!((l_53 , (g_27.f0 = ((l_56--) & (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_20.f1, 5)), g_39))))) , 0xC458L)) , g_27.f0) == g_39), 0xD7AEB8F83F3A8A1DLL)))) & l_63))), p_21)) && p_20.f0) >= g_8), g_27.f1));
            for (l_53.f0 = 0; (l_53.f0 != 59); l_53.f0++)
            { 
                uint8_t l_66 = 250UL;
                return l_66;
            }
        }
    }
    else
    { 
        uint32_t l_67 = 18446744073709551615UL;
        int32_t l_68 = 0x13EC2CFCL;
        struct S0 l_74 = {0L,-8L};
        l_67 = p_22;
        p_20.f1 &= (0x8726ABE926F5D9AELL ^ (l_68 = g_27.f0));
        if ((l_56 | g_27.f0))
        { 
            const uint64_t l_71[2] = {0x5D2BB399D6DB7896LL,0x5D2BB399D6DB7896LL};
            int i;
            for (p_20.f0 = (-22); (p_20.f0 >= (-13)); p_20.f0 = safe_add_func_int16_t_s_s(p_20.f0, 8))
            { 
                if (l_71[1])
                    break;
            }
        }
        else
        { 
            struct S0 l_75 = {1L,-5L};
            for (p_21 = 0; (p_21 <= 1); p_21 = safe_add_func_uint64_t_u_u(p_21, 7))
            { 
                uint16_t l_76 = 9UL;
                l_75 = l_74;
                l_76++;
            }
            g_27.f1 = ((!0x2993103D53AF4B50LL) | (((g_8 | g_27.f0) | (((0xE278474A89AEEB1CLL ^ l_75.f1) && g_8) , p_21)) & l_63));
        }
    }
    for (l_56 = 0; (l_56 > 8); l_56 = safe_add_func_int8_t_s_s(l_56, 7))
    { 
        struct S0 l_96 = {3L,0x89CA1FCAL};
        p_20 = ((safe_div_func_int16_t_s_s((+((g_95[1][4][2] = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(((g_27.f1 = (-6L)) || ((safe_unary_minus_func_uint8_t_u((safe_add_func_int64_t_s_s(g_8, l_92)))) > ((safe_mod_func_uint16_t_u_u((g_8 == 8L), l_92)) != p_22))), 2)), g_27.f0))) || 0xB6DFL)), g_8)) , l_96);
        g_27.f1 &= (l_96.f1 != (safe_lshift_func_uint8_t_u_u(0UL, 3)));
        if ((l_96.f1 > ((safe_lshift_func_uint16_t_u_u(g_27.f0, 12)) | (safe_div_func_uint64_t_u_u(g_27.f1, (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_96.f1, 4294967288UL)), l_96.f0)), p_20.f0)) | p_20.f1), 8)))))))
        { 
            for (l_96.f1 = (-22); (l_96.f1 <= (-14)); l_96.f1++)
            { 
                return p_19;
            }
            for (p_21 = 0; (p_21 <= 20); p_21 = safe_add_func_uint64_t_u_u(p_21, 4))
            { 
                p_20.f1 = l_96.f1;
            }
            p_20 = g_27;
        }
        else
        { 
            if (p_19)
                break;
        }
    }
    g_27 = l_115;
    return g_116;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_95[i][j][k], "g_95[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
