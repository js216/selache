// SPDX-License-Identifier: MIT
// cctest_csmith_32b370b9.c --- cctest case csmith_32b370b9 (csmith seed 850620601)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8a68786 */

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

// Options:   -s 850620601 -o /tmp/csmith_gen_8fk_k4ad/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 27;
   unsigned f1 : 6;
};

union U1 {
   int8_t  f0;
   uint64_t  f1;
   int32_t  f2;
};

union U2 {
   uint32_t  f0;
   const uint32_t  f1;
};

union U4 {
   int16_t  f0;
};


static int32_t g_15 = (-6L);
static union U4 g_25 = {0x1600L};
static int8_t g_28 = 0xFDL;
static int64_t g_33[3][4] = {{0xF9E6A0122D800F4DLL,0x7276CC72B752BF39LL,0xF9E6A0122D800F4DLL,0xF9E6A0122D800F4DLL},{0x7276CC72B752BF39LL,0x7276CC72B752BF39LL,0xE074F0E4F20077FELL,0x7276CC72B752BF39LL},{0x7276CC72B752BF39LL,0xF9E6A0122D800F4DLL,0xF9E6A0122D800F4DLL,0x7276CC72B752BF39LL}};
static int8_t g_42 = 3L;
static uint16_t g_99 = 0UL;
static struct S0 g_103 = {9430,0};
static uint64_t g_109 = 0x3D83399F167E6262LL;
static uint64_t g_176 = 8UL;
static int32_t g_177[1] = {0x9C0CF392L};



static int16_t  func_1(void);
static uint32_t  func_4(union U4  p_5);
static union U4  func_6(uint8_t  p_7, union U2  p_8, int32_t  p_9, int64_t  p_10, const union U4  p_11);
static uint8_t  func_12(const uint8_t  p_13);




static int16_t  func_1(void)
{ 
    union U1 l_14 = {-3L};
    union U2 l_43 = {0x1EF4FC6AL};
    uint8_t l_178 = 0x1FL;
    g_177[0] |= (safe_mod_func_int16_t_s_s((func_4(func_6(((func_12((l_14 , 0xC8L)) , l_14.f0) , l_14.f0), l_43, l_43.f1, g_25.f0, g_25)) <= g_176), g_176));
    return l_178;
}



static uint32_t  func_4(union U4  p_5)
{ 
    struct S0 l_112 = {7244,2};
    uint32_t l_129 = 0x426B2C3BL;
    int8_t l_137 = 0xE1L;
    int32_t l_159 = 0xF96505D7L;
    int32_t l_160[1][1];
    uint32_t l_166 = 4294967295UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_160[i][j] = 0xAB0DC940L;
    }
    g_103 = l_112;
    if ((l_112.f0 = (g_103.f0 = ((g_99 && (g_28 = p_5.f0)) >= (0x49AAL & p_5.f0)))))
    { 
        for (g_109 = (-23); (g_109 <= 30); g_109++)
        { 
            int16_t l_120[4];
            int32_t l_130 = 0x2995B858L;
            int i;
            for (i = 0; i < 4; i++)
                l_120[i] = (-1L);
            for (g_25.f0 = 0; (g_25.f0 < (-30)); --g_25.f0)
            { 
                uint32_t l_117 = 7UL;
                int32_t l_128 = 0x8E40AA8DL;
                l_117++;
                l_120[3] ^= p_5.f0;
                l_130 |= (safe_sub_func_uint8_t_u_u(((l_128 = ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((~g_25.f0), 2)) , (0xD766400FL != 0xAC200E08L)) != 0xC835L), 9L)) || 0UL)) >= l_129), 1UL));
            }
            g_15 = g_25.f0;
        }
    }
    else
    { 
        int32_t l_161 = 0x64D79107L;
        int32_t l_162 = 0L;
        struct S0 l_173 = {1596,3};
        if ((l_112.f0 |= ((p_5.f0 && (safe_sub_func_uint64_t_u_u(g_28, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((l_137 >= p_5.f0) <= p_5.f0), p_5.f0)), g_33[2][1])) > g_103.f1)))) && 0L)))
        { 
            struct S0 l_138 = {8094,1};
            uint32_t l_163[1];
            int i;
            for (i = 0; i < 1; i++)
                l_163[i] = 4294967295UL;
            l_138 = g_103;
            g_103 = ((l_138.f0 = (safe_add_func_uint64_t_u_u((+((safe_lshift_func_int16_t_s_s(((l_161 = (((l_112.f0 |= 1UL) & (0x1C1FAE94C91969D3LL && ((!(safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_33[2][1], (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((--l_163[0]), (0xC50EEEE7L < p_5.f0))), g_25.f0)), g_25.f0)))), p_5.f0)), g_99))) == g_15))) & (-7L))) ^ 0xE3DBA419L), 7)) & l_166)), l_162))) , l_138);
            l_160[0][0] = (safe_rshift_func_int16_t_s_s(p_5.f0, (l_112.f0 = (((l_138.f0 = (safe_lshift_func_int16_t_s_u(1L, 0))) , l_137) < (((((((safe_rshift_func_uint8_t_u_s(g_33[1][0], l_160[0][0])) != g_25.f0) , l_162) ^ 4294967290UL) > p_5.f0) >= l_162) != g_33[2][1])))));
        }
        else
        { 
            return g_99;
        }
        l_173 = l_173;
    }
    for (g_42 = 0; (g_42 >= 2); g_42 = safe_add_func_int8_t_s_s(g_42, 4))
    { 
        l_112 = g_103;
    }
    return g_33[1][3];
}



static union U4  func_6(uint8_t  p_7, union U2  p_8, int32_t  p_9, int64_t  p_10, const union U4  p_11)
{ 
    uint32_t l_66 = 0x1C210293L;
    int32_t l_69 = (-5L);
    struct S0 l_104[2][2] = {{{-1265,5},{-1265,5}},{{-1265,5},{-1265,5}}};
    int32_t l_105 = 4L;
    int32_t l_106 = (-3L);
    int32_t l_107 = (-5L);
    int32_t l_108 = 0x7991EE50L;
    int i, j;
    for (g_28 = 0; (g_28 <= (-3)); --g_28)
    { 
        uint32_t l_62 = 0UL;
        uint32_t l_67 = 1UL;
        int32_t l_68 = 0x11B4C510L;
        int32_t l_70 = 1L;
        if ((((((safe_mul_func_int16_t_s_s((((((+(safe_mod_func_uint16_t_u_u(0x3164L, (safe_unary_minus_func_uint16_t_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((p_8.f0 = (((safe_rshift_func_int16_t_s_s(p_11.f0, l_62)) , (l_66 |= (~(safe_lshift_func_uint16_t_u_s(0x3497L, 4))))) || 1UL)), p_11.f0)), 6)), g_15)), p_11.f0)) , g_15) >= (-7L))))))) >= p_9) <= l_67) <= 1L) , 0xC23FL), (-3L))) >= g_25.f0) || p_11.f0) <= p_9) || 0x28C330C2L))
        { 
            uint64_t l_71 = 0UL;
            l_71--;
            p_9 ^= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((p_8.f0 < (safe_rshift_func_uint16_t_u_u(g_33[2][1], 7))), ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(0L, (safe_lshift_func_int8_t_s_u((+(safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s(((((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s((p_10 = (safe_rshift_func_int16_t_s_s(l_62, 8))), l_69)), l_71)) <= l_69) , l_69) >= 4294967295UL), l_69)) <= g_25.f0) < g_42), l_66))), 6)))), 3)) == g_28))), g_25.f0));
        }
        else
        { 
            if ((safe_rshift_func_uint16_t_u_u(9UL, 12)))
            { 
                g_99++;
            }
            else
            { 
                struct S0 l_102[1][4][2] = {{{{975,3},{-5000,0}},{{975,3},{-5000,0}},{{975,3},{-5000,0}},{{975,3},{-5000,0}}}};
                int i, j, k;
                if (g_15)
                    break;
                if (g_33[2][1])
                    break;
                g_103 = l_102[0][2][0];
            }
            l_69 &= (0xB361F168752EB69FLL & l_70);
            l_104[0][0] = l_104[0][0];
        }
        return g_25;
    }
    g_109++;
    return g_25;
}



static uint8_t  func_12(const uint8_t  p_13)
{ 
    int16_t l_24 = 0x2466L;
    int32_t l_27 = 0x5530C4E2L;
    for (g_15 = (-19); (g_15 < (-7)); g_15++)
    { 
        uint32_t l_26 = 0xB4709BA8L;
        g_28 &= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(g_15, (((((safe_sub_func_int16_t_s_s(g_15, l_24)) || (g_25 , l_26)) >= l_27) , p_13) , p_13))), g_25.f0));
    }
    for (g_15 = 0; (g_15 > (-30)); g_15 = safe_sub_func_int64_t_s_s(g_15, 4))
    { 
        int16_t l_36 = 0xC7D8L;
        int32_t l_37 = 1L;
        l_27 = g_15;
        l_37 = (l_36 = (safe_lshift_func_uint16_t_u_s(1UL, (((g_33[2][1] |= g_28) || 0xC0A10336L) >= (safe_lshift_func_uint16_t_u_s(g_15, 15))))));
    }
    g_42 &= (g_28 | (safe_rshift_func_uint8_t_u_u((((l_27 |= p_13) || p_13) <= (safe_sub_func_int16_t_s_s(l_24, l_24))), g_15)));
    return g_42;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_103.f1, "g_103.f1", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
