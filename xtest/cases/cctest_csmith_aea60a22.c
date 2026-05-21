// SPDX-License-Identifier: MIT
// cctest_csmith_aea60a22.c --- cctest case csmith_aea60a22 (csmith seed 2930117154)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x305e296c */

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

// Options:   -s 2930117154 -o /tmp/csmith_gen_wt2mesr_/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   uint8_t  f1;
   int8_t  f2;
   int8_t  f3;
   uint64_t  f4;
};


static int32_t g_2[3] = {(-1L),(-1L),(-1L)};
static int64_t g_24[1][2] = {{1L,1L}};
static uint16_t g_32 = 0x17A6L;
static int16_t g_36[5] = {0xEDFAL,0xEDFAL,0xEDFAL,0xEDFAL,0xEDFAL};
static const uint16_t g_56 = 0UL;
static const uint16_t *g_55[4][4][3] = {{{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56}},{{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56}},{{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56}},{{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56}}};
static union U1 g_59 = {0x49B8L};
static int32_t g_63 = 0xA6B93DCEL;
static int32_t g_69 = 0x5F25AD92L;
static int8_t g_70[6] = {0x90L,0x90L,0L,0x90L,0x90L,0L};
static uint64_t g_71 = 0xB9DB5DF1D979388BLL;
static uint16_t g_98 = 0x42CDL;
static int8_t g_103 = (-2L);
static int8_t g_105[5] = {0x31L,0x31L,0x31L,0x31L,0x31L};
static uint32_t g_106 = 4294967295UL;
static union U1 g_116[1][6][2] = {{{{0xC8B7L},{0xC8B7L}},{{0xC8B7L},{0xC8B7L}},{{0xC8B7L},{0xC8B7L}},{{0xC8B7L},{0xC8B7L}},{{0xC8B7L},{0xC8B7L}},{{0xC8B7L},{0xC8B7L}}}};
static int64_t g_123 = 0x6C282E8BC9617CC2LL;
static uint64_t g_125 = 0xCDF6E60FB7EBE1D7LL;
static int8_t *g_166[5][6] = {{&g_59.f3,(void*)0,&g_105[3],&g_59.f2,&g_105[3],(void*)0},{&g_105[3],&g_59.f3,&g_70[5],(void*)0,(void*)0,&g_70[5]},{&g_105[3],&g_105[3],(void*)0,&g_59.f2,&g_59.f3,&g_59.f2},{&g_59.f3,&g_105[3],&g_59.f3,&g_70[5],(void*)0,(void*)0},{(void*)0,&g_59.f3,&g_59.f3,(void*)0,&g_105[3],&g_59.f2}};
static int8_t **g_165 = &g_166[0][5];
static int8_t ***g_171 = &g_165;
static int16_t * const g_191 = &g_59.f0;
static int16_t * const *g_190 = &g_191;
static int16_t g_205 = 0xBD40L;
static int32_t g_206 = (-8L);
static uint32_t g_207 = 0x3928AAD0L;
static int16_t *****g_226 = (void*)0;
static int16_t *g_231 = &g_36[0];
static int16_t **g_230 = &g_231;
static int16_t *** const g_229 = &g_230;
static int16_t *** const *g_228 = &g_229;
static int16_t *** const **g_227[6] = {&g_228,&g_228,&g_228,&g_228,&g_228,&g_228};
static uint32_t g_235 = 0x55E19477L;
static int32_t *g_238 = &g_63;
static uint8_t g_327 = 248UL;
static int32_t g_339 = 0xC8A6BBCBL;
static struct S0 g_344 = {1L,2L};
static struct S0 * const g_343 = &g_344;
static uint16_t g_379 = 0x1CCEL;
static uint32_t g_388 = 0x68C11968L;
static const int16_t *g_496 = &g_205;
static int16_t ***g_574[4] = {&g_230,&g_230,&g_230,&g_230};
static int16_t ****g_573 = &g_574[1];
static uint16_t *g_627 = &g_379;
static uint32_t g_628 = 4294967294UL;
static uint32_t g_684 = 0x11FA0658L;
static const uint64_t g_695 = 0x80203B963C58CBF7LL;
static int64_t *g_702[4] = {&g_123,&g_123,&g_123,&g_123};
static int64_t **g_701 = &g_702[3];
static uint16_t g_734[3][3] = {{0UL,0x6A3BL,0UL},{1UL,1UL,1UL},{0UL,0x6A3BL,0UL}};
static uint16_t g_753[7] = {0xCE76L,0xCE76L,0xCE76L,0xCE76L,0xCE76L,0xCE76L,0xCE76L};
static int8_t ****g_799 = (void*)0;
static int8_t *****g_798 = &g_799;
static struct S0 g_868 = {9L,0L};
static int32_t *g_870 = &g_63;
static const int32_t g_890[2] = {0xF0FF97AAL,0xF0FF97AAL};
static const int32_t g_892 = 0x40CAB931L;
static int64_t g_899 = 0xE0F20FDC6A512372LL;
static int32_t g_900 = 0x2297DECCL;
static int32_t g_904 = 0x0F987797L;
static uint32_t g_905 = 0UL;
static union U1 *g_969 = (void*)0;
static union U1 **g_968 = &g_969;
static union U1 **g_973 = &g_969;
static const int16_t **g_979 = &g_496;
static int16_t g_1006[6] = {0x39F5L,0x39F5L,0x39F5L,0x39F5L,0x39F5L,0x39F5L};
static int32_t g_1007 = 7L;
static int32_t g_1008 = 0xA74191ABL;
static uint64_t g_1009 = 0x50A30E4118782D96LL;
static int32_t g_1040 = (-10L);
static uint16_t g_1041 = 65527UL;
static uint16_t g_1144 = 1UL;
static int32_t **g_1185[5][1][4] = {{{&g_870,&g_870,&g_870,&g_870}},{{&g_870,&g_870,&g_870,&g_870}},{{&g_870,&g_870,&g_870,&g_870}},{{&g_870,&g_870,&g_870,&g_870}},{{&g_870,&g_870,&g_870,&g_870}}};
static int32_t ***g_1184 = &g_1185[4][0][3];
static int32_t g_1379 = 6L;
static const union U1 **g_1406 = (void*)0;
static const union U1 ***g_1405 = &g_1406;
static const union U1 ****g_1404[1][7] = {{&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405,&g_1405}};
static struct S0 *g_1484 = &g_344;
static struct S0 **g_1483 = &g_1484;
static struct S0 ***g_1482 = &g_1483;
static uint64_t *g_1517 = &g_71;
static uint64_t **g_1516[7][3] = {{&g_1517,&g_1517,&g_1517},{&g_1517,&g_1517,&g_1517},{(void*)0,&g_1517,&g_1517},{&g_1517,&g_1517,&g_1517},{(void*)0,&g_1517,(void*)0},{&g_1517,&g_1517,&g_1517},{&g_1517,&g_1517,&g_1517}};
static uint64_t g_1563 = 1UL;
static uint32_t *g_1662 = &g_905;
static int32_t g_1697[6][4][3] = {{{0x352A53B9L,0x0078AF9FL,0x0078AF9FL},{0L,0x5131714AL,(-4L)},{0x352A53B9L,0x5131714AL,(-10L)},{0x6E9F6744L,0x0078AF9FL,(-4L)}},{{0x6E9F6744L,0x4CF50404L,0x0078AF9FL},{0x352A53B9L,0x0078AF9FL,0x0078AF9FL},{0L,0x5131714AL,(-4L)},{0x352A53B9L,0x5131714AL,(-10L)}},{{0x6E9F6744L,0x0078AF9FL,(-4L)},{0x6E9F6744L,0x4CF50404L,0x0078AF9FL},{0x352A53B9L,0x0078AF9FL,0x0078AF9FL},{0L,0x5131714AL,(-4L)}},{{0x352A53B9L,0x5131714AL,(-10L)},{0x6E9F6744L,(-2L),(-1L)},{0x0078AF9FL,0x3FE28B08L,(-2L)},{(-4L),(-2L),(-2L)}},{{(-10L),0xF26DCD25L,(-1L)},{(-4L),0xF26DCD25L,(-1L)},{0x0078AF9FL,(-2L),(-1L)},{0x0078AF9FL,0x3FE28B08L,(-2L)}},{{(-4L),(-2L),(-2L)},{(-10L),0xF26DCD25L,(-1L)},{(-4L),0xF26DCD25L,(-1L)},{0x0078AF9FL,(-2L),(-1L)}}};
static uint32_t **g_1724 = (void*)0;
static int8_t g_1752[1][7] = {{0x7AL,0x54L,0x54L,0x7AL,0x54L,0x54L,0x7AL}};
static int32_t * const *g_1868 = &g_238;
static int32_t * const **g_1867 = &g_1868;
static int32_t * const ***g_1866 = &g_1867;
static int32_t g_2023 = 0xD79DFF27L;
static uint8_t *g_2074[2][3][4] = {{{(void*)0,&g_59.f1,&g_59.f1,(void*)0},{(void*)0,&g_59.f1,&g_59.f1,(void*)0},{(void*)0,&g_59.f1,&g_59.f1,(void*)0}},{{(void*)0,&g_59.f1,&g_59.f1,(void*)0},{(void*)0,&g_59.f1,&g_59.f1,(void*)0},{(void*)0,&g_59.f1,&g_59.f1,(void*)0}}};
static uint8_t **g_2073[1] = {&g_2074[0][2][3]};
static uint64_t ***g_2106 = &g_1516[5][1];
static uint64_t g_2123 = 0xBA1549BE232911D1LL;
static union U1 ***g_2127 = (void*)0;
static uint32_t g_2299 = 0x190AC52CL;
static int8_t g_2357 = 0x2AL;
static uint32_t g_2413 = 0UL;
static int16_t g_2510[6] = {0x5F5DL,0x5F5DL,0x5F5DL,0x5F5DL,0x5F5DL,0x5F5DL};
static int16_t g_2578 = 0xDEF0L;
static int8_t g_2632 = 0x5EL;
static uint32_t g_2682[2][6] = {{0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L},{0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L,0xDC0A5370L}};
static struct S0 g_2859 = {0xD694L,0x9030L};
static struct S0 *g_2885 = &g_2859;
static int8_t g_2910 = 0x6CL;



static int16_t  func_1(void);
static uint8_t  func_9(uint8_t  p_10, int8_t  p_11, uint32_t  p_12);
static int64_t  func_16(int32_t  p_17, int64_t  p_18, uint16_t  p_19, union U1  p_20, int16_t  p_21);
static struct S0  func_25(uint32_t  p_26);
static const uint16_t  func_38(const uint16_t * p_39, int16_t * p_40, uint16_t * p_41, struct S0  p_42);
static uint16_t * func_43(union U1  p_44, const int16_t * p_45, int16_t * const  p_46, int8_t  p_47, int16_t  p_48);
static union U1  func_49(int16_t * p_50);
static int16_t  func_53(int16_t * p_54);




static int16_t  func_1(void)
{ 
    uint32_t l_22 = 0x20B28787L;
    union U1 l_23 = {1L};
    uint32_t l_2918 = 4294967295UL;
    int32_t *l_2929 = &g_2[0];
    for (g_2[2] = 0; (g_2[2] >= 5); g_2[2]++)
    { 
        uint32_t l_2640 = 0xF81E73DCL;
        const uint64_t l_2917 = 1UL;
        uint32_t *l_2928[2];
        int32_t *l_2930 = &g_1379;
        int i;
        for (i = 0; i < 2; i++)
            l_2928[i] = &g_106;
        (*g_238) = (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(g_2[1], (func_9((((safe_rshift_func_uint16_t_u_u((0xDE9E843631E19E95LL || ((g_2[2] , ((+(func_16(g_2[2], g_2[1], l_22, l_23, g_2[2]) < 0x3F95383035BBBF3BLL)) > (*g_1517))) || (**g_701))), l_2640)) || 0x6FL) == l_2640), l_2640, l_23.f1) && l_23.f2))), l_23.f2));
        (*g_238) &= (safe_lshift_func_uint16_t_u_u(l_22, ((safe_rshift_func_uint8_t_u_u(l_22, ((safe_add_func_uint64_t_u_u(((0x869BL >= (~((safe_mul_func_int8_t_s_s(g_2910, ((safe_rshift_func_int8_t_s_s(((l_23 , (((((*g_1517) = (safe_mul_func_int16_t_s_s((***g_229), (safe_div_func_int32_t_s_s(l_2640, l_2640))))) != (**g_701)) , 0x186FL) < l_2917)) == 1L), l_2918)) == (*g_1662)))) , 0x267FFCBC2C498560LL))) > 0x257186BAL), 0x35FE0B68FAFA0A7ELL)) , l_23.f1))) <= l_2917)));
        if ((**g_1868))
            break;
        if ((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((((safe_unary_minus_func_uint64_t_u(((*g_1662) <= ((*g_1662) ^ l_23.f3)))) , (((*g_627) & ((**g_701) , (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((**g_701) | (&l_2918 != l_2928[1])) != l_23.f1), 65533UL)), 0x2BL)))) < l_2640)) != (**g_230)) > 18446744073709551615UL) || (*g_627)), 0xFCL)), 1L)))
        { 
            return (****g_228);
        }
        else
        { 
            l_2930 = ((**g_1184) = l_2929);
        }
    }
    return (****g_573);
}



static uint8_t  func_9(uint8_t  p_10, int8_t  p_11, uint32_t  p_12)
{ 
    const uint8_t l_2644 = 0xCCL;
    struct S0 *** const l_2648 = &g_1483;
    int32_t *l_2652[3][3] = {{&g_63,&g_63,&g_2[2]},{&g_63,&g_63,&g_2[2]},{&g_63,&g_63,&g_2[2]}};
    uint64_t * const *l_2662 = &g_1517;
    const union U1 ***l_2665[3][5][3] = {{{&g_1406,(void*)0,&g_1406},{&g_1406,&g_1406,&g_1406},{(void*)0,(void*)0,&g_1406},{&g_1406,&g_1406,&g_1406},{&g_1406,(void*)0,(void*)0}},{{&g_1406,&g_1406,&g_1406},{(void*)0,&g_1406,(void*)0},{&g_1406,(void*)0,&g_1406},{&g_1406,&g_1406,&g_1406},{&g_1406,&g_1406,&g_1406}},{{&g_1406,(void*)0,&g_1406},{&g_1406,&g_1406,&g_1406},{(void*)0,(void*)0,&g_1406},{&g_1406,&g_1406,&g_1406},{&g_1406,(void*)0,(void*)0}}};
    int8_t *l_2702 = &g_70[0];
    union U1 ****l_2707 = &g_2127;
    uint8_t l_2713 = 0x9BL;
    struct S0 ***l_2732 = &g_1483;
    int16_t *l_2742 = &g_2510[3];
    uint32_t l_2750 = 0x92E5FF2BL;
    const int16_t **** const l_2815 = (void*)0;
    uint8_t l_2834 = 0x91L;
    int16_t *l_2880 = &g_868.f1;
    int i, j, k;
    for (g_2023 = 0; (g_2023 <= 3); g_2023 += 1)
    { 
        int64_t l_2647[6][3][5] = {{{2L,(-5L),2L,7L,0x3281732155D662D1LL},{0x4E5A1CA92FE4116CLL,0L,0x611EB596A5AEB0F9LL,0x6D09E1C12C696378LL,0L},{0xB8AF6E7E4A89C609LL,7L,(-1L),0xF9FB4B34CF900ECELL,0xB8AF6E7E4A89C609LL}},{{0L,0x611EB596A5AEB0F9LL,0x611EB596A5AEB0F9LL,0L,0x4E5A1CA92FE4116CLL},{0x3281732155D662D1LL,0xF9FB4B34CF900ECELL,2L,0xD1B99F690CBBE0C8LL,2L},{0L,0L,0x60282494DB7FD38ALL,0x611EB596A5AEB0F9LL,0xBBE6C3B9D6DBE018LL}},{{0xB8AF6E7E4A89C609LL,0xD1B99F690CBBE0C8LL,(-8L),0xD1B99F690CBBE0C8LL,0xB8AF6E7E4A89C609LL},{0x4E5A1CA92FE4116CLL,0x6D09E1C12C696378LL,0x827A3B5174BCEE40LL,0L,0L},{2L,0xD1B99F690CBBE0C8LL,2L,0xF9FB4B34CF900ECELL,0x3281732155D662D1LL}},{{0xBBE6C3B9D6DBE018LL,0L,0x6D09E1C12C696378LL,0x6D09E1C12C696378LL,0L},{0xB8AF6E7E4A89C609LL,0xF9FB4B34CF900ECELL,(-1L),7L,0xB8AF6E7E4A89C609LL},{0L,0x611EB596A5AEB0F9LL,0x6D09E1C12C696378LL,0L,0xBBE6C3B9D6DBE018LL}},{{0x3281732155D662D1LL,7L,2L,(-5L),2L},{0L,0L,0x827A3B5174BCEE40LL,0x611EB596A5AEB0F9LL,0x4E5A1CA92FE4116CLL},{0xB8AF6E7E4A89C609LL,(-5L),(-8L),(-5L),0xB8AF6E7E4A89C609LL}},{{0xBBE6C3B9D6DBE018LL,0x6D09E1C12C696378LL,0x60282494DB7FD38ALL,0L,0L},{2L,(-5L),2L,7L,0x3281732155D662D1LL},{0x4E5A1CA92FE4116CLL,0L,0x611EB596A5AEB0F9LL,0x6D09E1C12C696378LL,0L}}};
        int32_t l_2650 = 0L;
        union U1 *l_2651 = (void*)0;
        int32_t l_2680 = 0x519FE2E7L;
        int32_t l_2691 = 0x59264539L;
        int8_t *l_2703[7] = {&g_2632,&g_2632,&g_1752[0][2],&g_2632,&g_2632,&g_1752[0][2],&g_2632};
        int8_t *l_2704[7] = {&g_116[0][4][1].f3,&g_70[4],&g_70[4],&g_116[0][4][1].f3,&g_70[4],&g_70[4],&g_116[0][4][1].f3};
        uint32_t ***l_2729 = &g_1724;
        int16_t *l_2741 = (void*)0;
        int32_t l_2782[7] = {0x917A74B2L,0x4234BE6DL,0x917A74B2L,0x917A74B2L,0x4234BE6DL,0x917A74B2L,0x917A74B2L};
        uint64_t l_2783 = 0xDDEEBC4A6D8A3D02LL;
        uint8_t ***l_2788 = &g_2073[0];
        uint32_t l_2809 = 18446744073709551615UL;
        int32_t ***l_2813 = &g_1185[4][0][3];
        int32_t ****l_2814 = &g_1184;
        int i, j, k;
        for (g_1008 = 0; (g_1008 >= 0); g_1008 -= 1)
        { 
            uint32_t l_2643 = 0xD9ECA17EL;
            for (g_206 = 0; (g_206 <= 3); g_206 += 1)
            { 
                int32_t *l_2641 = &g_63;
                int32_t **l_2642 = &l_2641;
                int i, j, k;
                (*l_2642) = ((**g_1184) = l_2641);
                l_2643 = ((*l_2641) = (***g_1184));
                (*l_2642) = (void*)0;
            }
            for (g_2123 = 0; (g_2123 <= 3); g_2123 += 1)
            { 
                uint32_t *l_2649 = &g_106;
                int i, j, k;
                if (l_2644)
                    break;
                (****g_1866) |= (((safe_mul_func_uint8_t_u_u(255UL, (l_2647[4][1][0] >= ((void*)0 != l_2648)))) < (0xA2L || (0x43L >= (((*l_2649) ^= (*g_1662)) && 0xAAA79958L)))) & l_2650);
            }
        }
        (*g_973) = l_2651;
        for (g_1563 = 0; (g_1563 <= 4); g_1563 += 1)
        { 
            uint8_t l_2666[2][6][6] = {{{8UL,8UL,8UL,0x8EL,255UL,255UL},{251UL,8UL,8UL,251UL,8UL,0x15L},{0x15L,251UL,255UL,251UL,0x15L,0x8EL},{251UL,0x15L,0x8EL,0x8EL,0x15L,251UL},{8UL,251UL,8UL,0x15L,8UL,251UL},{8UL,8UL,0x8EL,255UL,255UL,0x8EL}},{{8UL,8UL,255UL,0x15L,255UL,0x15L},{8UL,8UL,8UL,0x8EL,255UL,255UL},{251UL,8UL,8UL,251UL,8UL,0x15L},{0x15L,251UL,255UL,251UL,0x15L,0x8EL},{251UL,0x15L,0x8EL,0x8EL,0x15L,251UL},{8UL,251UL,8UL,0x15L,8UL,251UL}}};
            int64_t l_2667 = (-6L);
            int64_t l_2681 = 0x4E9A32A7E4F65A5BLL;
            uint8_t l_2700[3][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,7UL,7UL,0UL,7UL,7UL,0UL},{7UL,0UL,7UL,7UL,0UL,7UL,7UL}};
            union U1 ****l_2709[7] = {&g_2127,&g_2127,&g_2127,&g_2127,&g_2127,&g_2127,&g_2127};
            int32_t l_2711[1][1][4];
            uint32_t *l_2748[1][4][1];
            uint32_t **l_2747[4][3] = {{&l_2748[0][1][0],(void*)0,(void*)0},{(void*)0,&l_2748[0][3][0],&l_2748[0][3][0]},{&l_2748[0][1][0],(void*)0,(void*)0},{(void*)0,&l_2748[0][3][0],&l_2748[0][3][0]}};
            uint8_t l_2778 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_2711[i][j][k] = (-10L);
                }
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_2748[i][j][k] = &g_2682[0][0];
                }
            }
            for (g_103 = 1; (g_103 <= 5); g_103 += 1)
            { 
                union U1 ***l_2664 = &g_973;
                int32_t l_2670 = (-1L);
                (**g_1184) = l_2652[0][0];
                if (((**g_1868) = 0L))
                { 
                    int8_t *l_2663 = &g_1752[0][2];
                    int32_t l_2675 = 0x92794181L;
                    int i;
                    l_2667 |= ((((g_753[(g_2023 + 2)] != ((safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((0xE4A1L == ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s((&p_11 == ((((*g_2106) = (*g_2106)) == l_2662) , l_2663)))), (l_2664 != l_2665[0][0][0]))), 3)) , 0x2707L)), 0xC3F702FDL)) & (-1L)), 0xBD665CFECC03DC9FLL)) , 5L)) != l_2666[1][5][3]) && (-7L)) ^ 0x6806L);
                    if (p_11)
                        continue;
                    (****g_1866) = (safe_lshift_func_int8_t_s_u(l_2670, ((safe_mod_func_uint32_t_u_u(2UL, (safe_div_func_int64_t_s_s((-1L), l_2670)))) , l_2647[4][1][0])));
                    l_2675 = ((*g_238) = (*g_870));
                    if (l_2670)
                        continue;
                }
                else
                { 
                    uint16_t l_2678 = 65535UL;
                    uint8_t *l_2679 = &g_59.f1;
                    l_2680 |= ((((l_2670 == 8UL) , p_10) , ((*l_2679) = (((l_2666[1][5][4] >= (safe_lshift_func_int8_t_s_s((((**g_701) = l_2678) > 0x1FC7D1E6ED228859LL), p_11))) | 0L) <= (****g_1866)))) && l_2670);
                }
                for (p_11 = 6; (p_11 >= 0); p_11 -= 1)
                { 
                    uint8_t *l_2688 = (void*)0;
                    uint8_t *l_2689 = &g_116[0][4][1].f1;
                    uint8_t *l_2690[3][7][5] = {{{&g_327,(void*)0,(void*)0,(void*)0,&g_327},{&l_2666[0][2][0],&l_2666[1][5][3],(void*)0,&l_2666[1][5][3],&l_2666[0][2][0]},{&g_327,(void*)0,(void*)0,(void*)0,&g_327},{&l_2666[0][2][0],&l_2666[1][5][3],(void*)0,&l_2666[1][5][3],&l_2666[0][2][0]},{&g_327,(void*)0,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0}},{{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]}},{{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0},{&l_2666[0][3][3],&g_59.f1,&g_59.f1,&g_59.f1,&l_2666[0][3][3]},{(void*)0,&g_327,&g_59.f1,&g_327,(void*)0}}};
                    int32_t l_2701 = 0xCAA798B0L;
                    int i, j, k;
                    l_2670 |= l_2681;
                    (***g_1867) = p_10;
                    if (p_10)
                        continue;
                    (****g_1866) = (g_2682[0][0] >= (l_2691 = ((p_10 = (safe_div_func_int16_t_s_s(((((((*l_2689) ^= (l_2680 |= ((((((l_2681 <= (((void*)0 == &g_905) != ((l_2652[0][0] != (void*)0) < (+(0xC7L <= 0xE9L))))) > p_10) < l_2670) > (*g_1662)) , (*l_2664)) != (void*)0))) | p_12) , l_2666[0][0][2]) == 0x2634249EL) | 0L), 4UL))) , p_11)));
                    l_2670 = ((-8L) >= (4UL ^ ((*l_2689) = (safe_mul_func_uint16_t_u_u((l_2681 == (safe_mod_func_int16_t_s_s(p_12, ((**g_1868) , (((**g_1868) = 0x1EC01239L) , (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((g_753[g_1563] = (((((l_2700[0][6] > 1L) <= l_2691) && 18446744073709551615UL) > (*g_238)) >= p_12)), 10)), l_2670))))))), l_2701)))));
                }
            }
            (***g_1482) = (*g_1484);
            (***g_1867) = ((l_2703[2] = l_2702) == ((**g_171) = l_2704[3]));
            for (l_2650 = 5; (l_2650 >= 0); l_2650 -= 1)
            { 
                union U1 *****l_2708[1];
                uint32_t l_2710[1];
                int32_t l_2712[2][1];
                const uint32_t *l_2727 = &g_2682[0][2];
                const uint32_t **l_2726 = &l_2727;
                const uint32_t ***l_2725[3];
                int32_t ****l_2751 = &g_1184;
                int64_t l_2779 = 0L;
                uint8_t ***l_2786 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2708[i] = &l_2707;
                for (i = 0; i < 1; i++)
                    l_2710[i] = 0xC81F9849L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2712[i][j] = 0x88CD0D69L;
                }
                for (i = 0; i < 3; i++)
                    l_2725[i] = &l_2726;
                if ((l_2680 = (0x253FCC98F6AD0EE5LL && (safe_div_func_uint16_t_u_u(((l_2709[2] = l_2707) != &g_1405), (g_753[(g_1563 + 1)] | 1UL))))))
                { 
                    if (l_2710[0])
                        break;
                    --l_2713;
                }
                else
                { 
                    (**g_1483) = (***g_1482);
                    return p_12;
                }
                for (g_2357 = 0; (g_2357 >= 0); g_2357 -= 1)
                { 
                    const uint32_t ****l_2728 = &l_2725[0];
                    uint32_t ****l_2730 = &l_2729;
                    int32_t **l_2731 = &l_2652[1][1];
                    struct S0 ****l_2733 = &l_2732;
                    struct S0 ****l_2734 = &g_1482;
                    int i;
                    l_2712[1][0] ^= (((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_36[(g_2357 + 2)] |= (safe_unary_minus_func_uint8_t_u((&p_10 == &l_2713)))), 5)), 4294967293UL)), (((((****g_1866) >= (((*l_2728) = l_2725[0]) != ((*l_2730) = l_2729))) >= ((p_11 , (*g_1184)) == l_2731)) || 0xBB37E032L) , 0x50L))) >= l_2647[4][1][0]) >= (**l_2731)), 1L)) , 0x0AD3E716L) != l_2700[0][6]);
                    l_2711[0][0][2] &= ((****g_228) & (((((((*l_2733) = l_2732) == ((l_2691 , (p_12 = g_2023)) , ((*l_2734) = (p_12 , &g_1483)))) && ((((l_2710[g_2357] = l_2710[0]) && (**g_1868)) != p_11) > p_10)) , p_12) & 0x4EL) < p_10));
                    (**g_1868) = (safe_mul_func_uint16_t_u_u(((***l_2732) , 8UL), (((**l_2731) < 0x47D4L) >= ((safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s((((*g_1517) , (((l_2741 != ((***g_228) = l_2742)) & p_12) < l_2710[0])) && (****g_1866)), 0xB7BBD24FL)) , (void*)0) == (void*)0), p_11)) || l_2647[4][1][0]))));
                }
                if (p_10)
                { 
                    uint32_t ***l_2749 = &l_2747[1][0];
                    int32_t l_2752 = (-4L);
                    int32_t l_2780 = 0xEE99F595L;
                    int32_t l_2781[3];
                    uint8_t ****l_2787 = (void*)0;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2781[i] = 0xE7F80F50L;
                    if (p_12)
                        break;
                    (*g_238) |= ((((safe_add_func_uint64_t_u_u(l_2691, p_12)) , ((((((((safe_lshift_func_uint16_t_u_u(((((*l_2749) = ((*l_2729) = l_2747[1][0])) != (void*)0) , (p_10 && (g_36[(g_2023 + 1)] ^= (&g_2127 != &g_1405)))), p_11)) > 0x5C2CC5398CF09B41LL) < l_2750) >= l_2681) , p_12) , (void*)0) != l_2751) != l_2752)) <= p_10) && (-2L));
                    l_2778 ^= ((4294967295UL && (safe_lshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((+((safe_mul_func_uint16_t_u_u((((*g_343) , &l_2709[3]) == &l_2709[2]), (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*g_1662) , (safe_mul_func_int16_t_s_s(p_12, (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*g_496), 0x4E76L)), g_36[(g_2023 + 1)]))))), (****l_2751))), (****l_2751))))) & 0L)), p_10)), 6)) , 0x725FL), (*g_627))), p_10)) , p_12), 1UL)) < (***g_1184)), (*g_627)))) , (****g_1866));
                    --l_2783;
                    l_2788 = l_2786;
                }
                else
                { 
                    uint8_t **l_2789[4];
                    int32_t l_2803 = 0x4FAD31EFL;
                    int64_t *l_2804 = &l_2681;
                    int64_t *l_2805 = (void*)0;
                    int64_t *l_2806 = &l_2647[4][1][0];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2789[i] = &g_2074[0][2][3];
                    (****g_1866) = (((*g_1662) || ((void*)0 == l_2789[2])) , ((!4294967295UL) , 0L));
                    (***g_1867) &= (((((*l_2806) = ((p_12 ^ (((safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s(l_2782[1], ((*l_2804) = ((**g_701) |= (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((0L ^ p_11), p_11)) , 0xA5F4L), (safe_lshift_func_int16_t_s_s(l_2803, p_10)))))))), l_2691)) | 4294967295UL), 1UL)) , l_2789[2]) == &g_2074[1][2][3])) && p_11)) | 18446744073709551610UL) > l_2803) || (**g_230));
                }
                for (g_2413 = 0; (g_2413 <= 6); g_2413 += 1)
                { 
                    struct S0 l_2807[6] = {{0L,-1L},{0x6D97L,0x7AB4L},{0x6D97L,0x7AB4L},{0L,-1L},{0x6D97L,0x7AB4L},{0x6D97L,0x7AB4L}};
                    int32_t l_2808 = 0x21D58C82L;
                    int i;
                    (**g_1483) = l_2807[0];
                    l_2809--;
                    (*g_238) |= (+9UL);
                    l_2711[0][0][2] &= 5L;
                }
            }
            if ((*g_238))
                continue;
        }
        (*l_2814) = l_2813;
    }
    (***g_1867) = (l_2815 != l_2815);
    for (g_125 = (-7); (g_125 > 60); ++g_125)
    { 
        uint64_t l_2818 = 0UL;
        struct S0 l_2830 = {1L,8L};
        uint32_t l_2835 = 18446744073709551612UL;
        int32_t *l_2900 = &g_1379;
        if (l_2818)
            break;
        for (g_900 = (-14); (g_900 != (-4)); g_900 = safe_add_func_uint8_t_u_u(g_900, 2))
        { 
            uint32_t l_2821 = 0x21C9901BL;
            return l_2821;
        }
        (**g_1868) = (safe_unary_minus_func_int8_t_s(p_11));
        for (g_1008 = 0; (g_1008 <= 23); g_1008 = safe_add_func_int64_t_s_s(g_1008, 2))
        { 
            int32_t l_2864 = 0x2B282056L;
            uint8_t *l_2869 = &g_59.f1;
            const int16_t *l_2881[5] = {&g_868.f0,&g_868.f0,&g_868.f0,&g_868.f0,&g_868.f0};
            int32_t *l_2882 = &g_63;
            struct S0 *l_2883 = &g_868;
            const uint8_t l_2886 = 4UL;
            int i;
            for (g_868.f0 = 2; (g_868.f0 >= 0); g_868.f0 -= 1)
            { 
                uint32_t l_2836 = 0x6DC67C31L;
                union U1 ***l_2837 = &g_973;
                struct S0 l_2857 = {0L,0x2926L};
                for (g_344.f0 = 0; (g_344.f0 <= 2); g_344.f0 += 1)
                { 
                    const union U1 ****l_2831 = &g_1405;
                    int16_t **l_2855 = &l_2742;
                    int32_t l_2856 = (-8L);
                    struct S0 *l_2858 = &l_2830;
                    int i;
                    (****g_1866) ^= ((safe_div_func_uint32_t_u_u(4294967295UL, p_12)) & ((((~p_10) != (((*l_2831) = (l_2830 , l_2665[2][2][1])) == ((((**g_701) = ((((0x97AFL & (safe_div_func_uint32_t_u_u(l_2834, l_2835))) | (*g_1662)) <= 1L) != l_2836)) && (*g_1517)) , l_2837))) ^ (-1L)) , 1L));
                    (***g_1867) = p_10;
                    l_2856 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_1662) = (safe_div_func_int16_t_s_s(1L, (((((+((safe_mod_func_int32_t_s_s((p_12 | (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((*g_1517), (p_11 && (((safe_add_func_uint64_t_u_u((18446744073709551615UL != (**g_701)), (((*g_627)--) <= ((void*)0 == l_2855)))) | 0xEBE230D424C1053DLL) ^ 0xDFFA38ABL)))), p_10))), 0x15245D94L)) != 0xBFD2L)) | 0x81FC8FC4L) , 5L) ^ p_12) ^ 0x970126CAL)))) == (-5L)), p_10)), l_2835)) <= 0x85C14E33071207A9LL);
                    (*l_2858) = l_2857;
                    g_2859 = (*g_343);
                }
            }
            (*g_238) = (p_10 || (safe_mul_func_uint8_t_u_u(0xB6L, ((*l_2869) |= ((safe_lshift_func_uint16_t_u_u(((((**g_701) = l_2864) >= ((safe_rshift_func_uint16_t_u_u(p_12, l_2818)) || (safe_lshift_func_uint8_t_u_u(l_2864, 0)))) ^ 0x82L), l_2864)) , 5UL)))));
            (****g_1866) &= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((*l_2869) = ((***g_1482) , ((***l_2648) , 2UL))), p_10)), (65535UL > (((*g_627)--) >= (((***g_228) = l_2880) == l_2881[3]))))) , l_2818), 10));
            (**g_1184) = l_2882;
            for (g_1563 = 0; (g_1563 <= 1); g_1563 += 1)
            { 
                struct S0 **l_2884[2][4][4] = {{{(void*)0,(void*)0,&l_2883,&l_2883},{(void*)0,&l_2883,&l_2883,(void*)0},{(void*)0,&l_2883,(void*)0,&l_2883},{&l_2883,&l_2883,&l_2883,(void*)0}},{{&l_2883,&l_2883,&l_2883,&l_2883},{(void*)0,(void*)0,&l_2883,&l_2883},{&l_2883,&l_2883,&l_2883,&l_2883},{&l_2883,&l_2883,(void*)0,&l_2883}}};
                int32_t l_2891 = 0xF47CA3C0L;
                int16_t l_2899 = (-1L);
                int i, j, k;
                g_2885 = ((*g_1483) = l_2883);
                if (l_2886)
                    break;
                for (g_388 = 0; (g_388 <= 1); g_388 += 1)
                { 
                    int i, j, k;
                    (*l_2882) |= ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((*g_627) = (l_2891 = p_10)), p_11)) && 1L), 1)) , (safe_add_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_2830.f1, (-1L))), ((!l_2899) ^ 247UL))) || 1UL) || 1L), p_11)));
                    (**g_1184) = (**g_1184);
                }
                (**g_1184) = l_2900;
                (*g_238) = (***g_1184);
            }
        }
    }
    return p_11;
}



static int64_t  func_16(int32_t  p_17, int64_t  p_18, uint16_t  p_19, union U1  p_20, int16_t  p_21)
{ 
    uint16_t *l_1168 = &g_1041;
    struct S0 l_1169 = {0x34C0L,-1L};
    int8_t l_1891 = 0x25L;
    int32_t l_1892 = (-4L);
    int32_t l_2008 = 0xA5D9B316L;
    int32_t l_2010 = 0x42D366E6L;
    int32_t l_2013[2];
    uint16_t l_2033 = 0UL;
    uint64_t ***l_2104 = &g_1516[5][2];
    uint32_t *l_2110 = &g_388;
    uint32_t **l_2109 = &l_2110;
    uint64_t l_2148 = 1UL;
    uint64_t l_2168 = 0x5B52EF3D62A462FBLL;
    uint8_t *l_2198 = &g_327;
    uint16_t l_2219 = 0x8CCFL;
    int8_t l_2250 = 0xA2L;
    union U1 l_2310 = {0xBEA2L};
    int8_t l_2315 = 0x8FL;
    int64_t l_2320 = (-6L);
    uint8_t l_2322 = 247UL;
    int8_t l_2327 = 0x91L;
    int8_t **l_2463[1];
    uint8_t ***l_2483 = &g_2073[0];
    int16_t l_2511 = 1L;
    uint64_t l_2536 = 0x66E37D7494F00D8ALL;
    int32_t *l_2537 = &g_1379;
    int16_t **l_2555 = &g_231;
    int8_t l_2559 = (-1L);
    int32_t *l_2560 = &g_1379;
    int32_t *l_2561[3][6] = {{(void*)0,(void*)0,&g_1007,(void*)0,&l_2010,(void*)0},{&g_63,(void*)0,&g_63,&g_63,&g_1007,&g_1007},{&l_2013[0],&g_63,&g_63,&l_2013[0],(void*)0,(void*)0}};
    int32_t l_2562 = 0x529CCDEEL;
    uint16_t l_2563 = 0xAB08L;
    uint64_t **l_2568 = (void*)0;
    int64_t l_2606 = 0xFF06D1C90570B0E0LL;
    uint8_t l_2636 = 0UL;
    int32_t l_2639 = 0x8BE5EE56L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_2013[i] = (-8L);
    for (i = 0; i < 1; i++)
        l_2463[i] = &g_166[1][4];
    return l_2639;
}



static struct S0  func_25(uint32_t  p_26)
{ 
    int8_t *l_1175 = &g_116[0][4][1].f2;
    int32_t l_1178[4] = {(-1L),(-1L),(-1L),(-1L)};
    const uint64_t *l_1182 = &g_1009;
    int16_t ***l_1183 = &g_230;
    int8_t ***l_1188 = &g_165;
    uint16_t *l_1225 = (void*)0;
    uint16_t l_1226 = 0x7F3FL;
    int32_t **l_1269 = (void*)0;
    int64_t l_1323[4] = {0L,0L,0L,0L};
    uint32_t l_1365 = 0xD7BD1FB4L;
    uint64_t *l_1371 = &g_125;
    uint32_t l_1419[7][3] = {{0x09FEA92AL,0x09FEA92AL,0x4C4E4A6CL},{0xC33778BBL,18446744073709551614UL,0xC33778BBL},{0x09FEA92AL,0x4C4E4A6CL,0x4C4E4A6CL},{1UL,18446744073709551614UL,1UL},{0x09FEA92AL,0x09FEA92AL,0x4C4E4A6CL},{0xC33778BBL,18446744073709551614UL,0xC33778BBL},{0x09FEA92AL,0x4C4E4A6CL,0x4C4E4A6CL}};
    int8_t l_1435[6] = {0x96L,0x96L,0x96L,0x96L,0x96L,0x96L};
    int16_t *****l_1446 = (void*)0;
    struct S0 *l_1459 = &g_868;
    struct S0 **l_1458 = &l_1459;
    struct S0 ***l_1457 = &l_1458;
    int32_t l_1492 = 0L;
    int8_t l_1498 = 0xDDL;
    uint16_t l_1503[7][4] = {{65533UL,65534UL,65534UL,65533UL},{65534UL,65533UL,65534UL,65534UL},{65533UL,65533UL,0xF957L,65533UL},{65534UL,0xF957L,0xF957L,65534UL},{0xF957L,65534UL,0xF957L,0xF957L},{65534UL,65534UL,65533UL,65534UL},{65534UL,0xF957L,0xF957L,65534UL}};
    int32_t l_1583 = 0x1A7FD696L;
    uint8_t l_1588 = 0x44L;
    int8_t l_1630 = 2L;
    struct S0 l_1631 = {0xDA1EL,0x6303L};
    uint8_t *l_1641[1][4] = {{&g_327,&g_327,&g_327,&g_327}};
    uint64_t l_1643 = 1UL;
    uint16_t l_1657 = 5UL;
    int64_t **l_1716 = &g_702[3];
    int32_t l_1728 = 0L;
    int32_t ****l_1804[6][4][7] = {{{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184}},{{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184}},{{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184}},{{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184}},{{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184}},{{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,(void*)0,&g_1184,&g_1184,(void*)0,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184},{&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184,&g_1184}}};
    union U1 *l_1850 = (void*)0;
    uint64_t ***l_1857 = &g_1516[5][1];
    uint8_t l_1870 = 255UL;
    int i, j, k;
    if ((l_1178[0] = ((((*g_627) = (((safe_rshift_func_int8_t_s_u(((((((safe_div_func_uint16_t_u_u((0UL < ((void*)0 == l_1175)), 0x9D9BL)) <= (safe_mul_func_uint8_t_u_u(0xA0L, p_26))) == ((*g_870) = 0x6315CD7FL)) <= 0xABAC35C7L) || p_26) , p_26), 4)) >= 18446744073709551615UL) >= 0x3826C4AD54ECA94FLL)) >= 65535UL) == g_105[3])))
    { 
        int32_t ****l_1186 = &g_1184;
        int16_t l_1210 = 0xD3F1L;
        int16_t ****l_1214[2][6][1] = {{{&l_1183},{&l_1183},{&l_1183},{&l_1183},{&l_1183},{&g_574[1]}},{{&l_1183},{&l_1183},{&g_574[1]},{&l_1183},{&l_1183},{&g_574[1]}}};
        uint64_t *l_1235 = &g_71;
        int8_t l_1238 = 1L;
        int32_t l_1255 = 0L;
        int32_t l_1256 = 1L;
        uint16_t l_1257 = 1UL;
        int32_t l_1310 = 7L;
        int32_t l_1314 = 4L;
        int32_t l_1318[6][6] = {{0L,(-1L),(-1L),1L,0xEDFDEF20L,0xEDFDEF20L},{(-1L),(-1L),(-1L),(-1L),0x649967F8L,0xEDFDEF20L},{0x61BD6F7AL,0xEDFDEF20L,(-1L),1L,1L,1L},{0x649967F8L,0x97254DC2L,0x649967F8L,0x4C329F61L,1L,0L},{(-1L),0xEDFDEF20L,0x61BD6F7AL,0x649967F8L,0x649967F8L,0x61BD6F7AL},{(-1L),(-1L),(-1L),0x649967F8L,0xEDFDEF20L,0x4C329F61L}};
        int16_t l_1321 = 0x4047L;
        int8_t l_1322 = 4L;
        int32_t l_1363 = 1L;
        uint16_t l_1381 = 65528UL;
        int i, j, k;
        if ((((safe_unary_minus_func_int8_t_s((((safe_add_func_uint8_t_u_u((0UL <= (l_1182 == &g_1009)), ((l_1183 == (void*)0) && l_1178[1]))) > (((*l_1186) = g_1184) == &g_1185[1][0][1])) < 1UL))) & l_1178[0]) != 4UL))
        { 
            int8_t ***l_1189 = &g_165;
            const int32_t l_1198 = 0xA603726AL;
            int16_t ****l_1213 = &g_574[1];
            struct S0 *l_1242 = (void*)0;
            struct S0 **l_1241 = &l_1242;
            int32_t *l_1247 = &g_63;
            int32_t *l_1248 = &g_63;
            int32_t *l_1249 = &g_1040;
            int32_t *l_1250 = &g_63;
            int32_t *l_1251 = &g_1008;
            int32_t *l_1252 = &g_63;
            int32_t *l_1253 = (void*)0;
            int32_t *l_1254[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t * const l_1270 = (void*)0;
            int i;
            if (((***g_1184) = 1L))
            { 
                struct S0 l_1187 = {0xC7DAL,0L};
                return l_1187;
            }
            else
            { 
                uint16_t l_1201[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1201[i] = 0x0770L;
                for (g_103 = 3; (g_103 >= 0); g_103 -= 1)
                { 
                    int32_t *l_1199 = (void*)0;
                    int32_t *l_1200[5] = {&g_904,&g_904,&g_904,&g_904,&g_904};
                    int i;
                    (***g_1184) = (g_59.f1 == (g_327 ^= ((((*g_343) , l_1188) == (p_26 , l_1189)) , ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((*g_231), (safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((l_1198 || l_1178[0]), l_1178[0])) , l_1178[0]), 0x0F2462A526F249A0LL)))), (***g_229))) & (**g_701)))));
                    --l_1201[2];
                    if (p_26)
                        break;
                }
                for (g_905 = 13; (g_905 >= 55); ++g_905)
                { 
                    uint64_t *l_1207 = &g_125;
                    (***g_1184) = (safe_unary_minus_func_uint64_t_u(((*l_1207) = p_26)));
                }
            }
            for (g_206 = 0; (g_206 != (-21)); g_206 = safe_sub_func_uint8_t_u_u(g_206, 7))
            { 
                uint8_t *l_1221 = (void*)0;
                uint64_t *l_1234 = &g_71;
                int32_t l_1237 = (-7L);
                int32_t l_1240 = (-1L);
                struct S0 ***l_1243 = &l_1241;
            }
            l_1257++;
            for (g_327 = 0; (g_327 != 32); g_327 = safe_add_func_uint16_t_u_u(g_327, 8))
            { 
                struct S0 l_1262 = {9L,0x386DL};
                return l_1262;
            }
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            { 
                uint64_t **l_1263 = &l_1235;
                int32_t l_1271 = (-7L);
                (*l_1249) = ((*g_870) = (0x3A41L || (((*l_1263) = l_1235) == ((!(((0xB955A3EBL > g_339) || ((void*)0 != (*g_1184))) , ((safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*l_1175) ^= (&l_1254[1] != l_1269)), 0x01L)), p_26)) >= 4294967295UL))) , &g_71))));
                l_1271 &= (l_1270 == (void*)0);
                for (g_905 = 0; (g_905 <= 0); g_905 += 1)
                { 
                    int32_t *l_1275 = &g_63;
                    (*l_1249) ^= ((safe_rshift_func_int8_t_s_u((****l_1186), 6)) == (+p_26));
                    (***l_1186) = l_1275;
                    if (p_26)
                        continue;
                }
            }
        }
        else
        { 
            int32_t l_1282 = 0x7802EC5FL;
            union U1 l_1289 = {1L};
            int32_t l_1311[5];
            uint32_t l_1368 = 0x6C195AEBL;
            int8_t *****l_1375 = &g_799;
            struct S0 l_1388 = {0xE8BAL,0x49C8L};
            int32_t l_1413 = 0x16CA3450L;
            int i;
            for (i = 0; i < 5; i++)
                l_1311[i] = 0x36E986EEL;
            for (g_98 = 0; (g_98 > 17); g_98 = safe_add_func_uint8_t_u_u(g_98, 7))
            { 
                uint16_t *l_1281 = &l_1257;
                int32_t *l_1286 = &g_1008;
                int32_t l_1304 = 0xCFABF4DDL;
                int32_t l_1309 = 0L;
                int32_t l_1312 = 0x087666D3L;
                int32_t l_1313 = 0L;
                int32_t l_1315 = 0x97B4D989L;
                int32_t l_1316 = 0x64720722L;
                int32_t l_1317 = 1L;
                int32_t l_1319 = 0x1B1EF365L;
                int32_t l_1320[4];
                uint8_t l_1325 = 0x32L;
                uint32_t *l_1341 = &g_628;
                uint32_t *l_1364[7] = {&g_388,&g_388,&g_388,&g_388,&g_388,&g_388,&g_388};
                int16_t l_1380[1][4];
                struct S0 l_1389 = {0x3388L,-6L};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1320[i] = (-1L);
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1380[i][j] = 0xDA8EL;
                }
            }
            l_1282 |= (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((((g_1404[0][6] != &g_1405) == (safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(0xE3L, 0xC3L)), (safe_add_func_int16_t_s_s(l_1413, p_26))))) > p_26) , g_868.f1), (****l_1186))) ^ l_1289.f3), 7)) , l_1388.f1) != (*g_870));
            for (g_899 = 0; (g_899 <= 5); g_899 += 1)
            { 
                int32_t *l_1414 = &g_904;
                int32_t *l_1415 = &l_1314;
                int32_t *l_1416 = (void*)0;
                int32_t l_1417 = 0x4695304FL;
                int32_t *l_1418[7] = {&g_1379,&g_1379,&g_2[2],&g_1379,&g_1379,&g_2[2],&g_1379};
                int i;
                l_1419[5][1]--;
            }
        }
    }
    else
    { 
        int16_t ****l_1430[6][7] = {{&g_574[1],&g_574[2],(void*)0,(void*)0,&g_574[2],&g_574[1],&g_574[2]},{&g_574[0],(void*)0,&l_1183,(void*)0,&g_574[2],(void*)0,&l_1183},{&g_574[0],&g_574[0],&g_574[1],(void*)0,&g_574[1],&g_574[0],&g_574[0]},{&g_574[1],(void*)0,&g_574[3],(void*)0,&g_574[1],&g_574[2],&l_1183},{&g_574[1],&g_574[2],&g_574[1],&g_574[1],&g_574[1],&g_574[1],&g_574[2]},{&l_1183,(void*)0,&g_574[3],(void*)0,&g_574[2],(void*)0,&g_574[2]}};
        int32_t l_1432 = 0x6D754B61L;
        int32_t l_1437 = 0L;
        int16_t *****l_1445 = &g_573;
        int16_t l_1468 = 0xA7DEL;
        int32_t l_1491[3];
        uint32_t l_1512 = 0UL;
        int16_t *** const **l_1567 = (void*)0;
        int16_t *** const **l_1568 = &g_228;
        uint32_t l_1608 = 0x2A793FE2L;
        uint16_t l_1620 = 1UL;
        uint64_t l_1629 = 18446744073709551615UL;
        uint8_t *l_1642[4][5] = {{&g_327,(void*)0,&g_327,&g_327,&g_327},{&g_327,&g_327,&g_327,(void*)0,(void*)0},{&g_116[0][4][1].f1,(void*)0,&g_327,&g_327,(void*)0},{(void*)0,(void*)0,&g_116[0][4][1].f1,(void*)0,&g_327}};
        int64_t l_1665 = 0xAF6B66EF318D66BBLL;
        uint16_t l_1668 = 65535UL;
        int8_t l_1684 = 0x25L;
        uint64_t **l_1711 = &g_1517;
        uint64_t **l_1712 = &g_1517;
        const union U1 *l_1719 = &g_59;
        const union U1 ***l_1723 = &g_1406;
        uint64_t l_1727 = 0x3705646EC8DCCEA5LL;
        struct S0 l_1735 = {-1L,0x7DB9L};
        const int16_t l_1770[5] = {0x4C0BL,0x4C0BL,0x4C0BL,0x4C0BL,0x4C0BL};
        int8_t **l_1784 = &g_166[3][0];
        uint8_t l_1805 = 255UL;
        int32_t *l_1807 = &g_1379;
        uint64_t l_1834 = 18446744073709551615UL;
        int32_t *l_1873 = &g_1040;
        uint32_t l_1878[7][4][5] = {{{0UL,0xC6A7F3F6L,1UL,0xFF6FBDABL,6UL},{0xD5FA7CB6L,0xBD5A3485L,0xE2ED39A2L,5UL,0xBE193FC2L},{3UL,1UL,0UL,0x52CAF1EEL,0x716411B2L},{0xD5FA7CB6L,1UL,9UL,0x9EE47DCEL,5UL}},{{0UL,0xBB9E5D4BL,18446744073709551613UL,0x167774D3L,18446744073709551613UL},{0x9BF3F788L,0x9BF3F788L,5UL,0x9EE47DCEL,9UL},{0xFD6EC63EL,4UL,0x716411B2L,0x52CAF1EEL,0UL},{0xE2ED39A2L,5UL,0xBE193FC2L,5UL,0xE2ED39A2L}},{{18446744073709551611UL,4UL,6UL,0xFF6FBDABL,1UL},{0x9EE47DCEL,0x9BF3F788L,0UL,1UL,1UL},{0x4E99F0E1L,0xBB9E5D4BL,0x4E99F0E1L,0xC6A7F3F6L,0x716411B2L},{0xE2ED39A2L,0UL,5UL,0xBD5A3485L,1UL}},{{0x716411B2L,0x52CAF1EEL,0UL,1UL,3UL},{18446744073709551615UL,9UL,5UL,1UL,0xBE193FC2L},{18446744073709551611UL,1UL,0x0E27CBCDL,0xBB9E5D4BL,0xFD6EC63EL},{0x9BF3F788L,18446744073709551615UL,18446744073709551615UL,0x9BF3F788L,0xD5FA7CB6L}},{{18446744073709551611UL,1UL,18446744073709551613UL,4UL,0xE56742D5L},{18446744073709551615UL,0x9EE47DCEL,0x93D5A1E5L,5UL,0x93D5A1E5L},{0x716411B2L,0x0DB91B1AL,0xE56742D5L,4UL,18446744073709551613UL},{0xE2ED39A2L,0xBD5A3485L,0xD5FA7CB6L,0x9BF3F788L,18446744073709551615UL}},{{0x0E27CBCDL,0xBB9E5D4BL,0xFD6EC63EL,0xBB9E5D4BL,0x0E27CBCDL},{0x14F7E7D4L,0xBD5A3485L,0xBE193FC2L,1UL,5UL},{0x9093C286L,0x0DB91B1AL,3UL,1UL,0UL},{1UL,0x9EE47DCEL,1UL,0xBD5A3485L,5UL}},{{0x4E99F0E1L,1UL,0x716411B2L,0xC6A7F3F6L,0x0E27CBCDL},{5UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL},{3UL,1UL,0x716411B2L,18446744073709551615UL,18446744073709551613UL},{0x9EE47DCEL,9UL,1UL,0xD5FA7CB6L,0x93D5A1E5L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1491[i] = 0x505FE28BL;
        for (g_628 = 0; (g_628 != 9); g_628 = safe_add_func_int16_t_s_s(g_628, 9))
        { 
            int32_t l_1428 = (-4L);
            int16_t *****l_1431 = &g_573;
            uint8_t *l_1436[3];
            int32_t l_1460 = (-10L);
            int32_t *l_1465 = &l_1178[0];
            int32_t l_1494 = 0xC06894E2L;
            int32_t l_1496[5];
            int16_t l_1500[4];
            uint8_t l_1507 = 0xD9L;
            int64_t *l_1515 = &g_123;
            int32_t l_1546 = 0xAF111D4DL;
            struct S0 l_1554 = {-1L,-9L};
            int64_t l_1562 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_1436[i] = &g_327;
            for (i = 0; i < 5; i++)
                l_1496[i] = 0x620886D4L;
            for (i = 0; i < 4; i++)
                l_1500[i] = 1L;
        }
    }
    return (**l_1458);
}



static const uint16_t  func_38(const uint16_t * p_39, int16_t * p_40, uint16_t * p_41, struct S0  p_42)
{ 
    const int8_t l_1170 = 0x52L;
    return l_1170;
}



static uint16_t * func_43(union U1  p_44, const int16_t * p_45, int16_t * const  p_46, int8_t  p_47, int16_t  p_48)
{ 
    uint16_t l_500[7][6][5] = {{{0x3218L,65526UL,65526UL,0x3218L,0x823CL},{65530UL,0UL,0x6A9FL,65530UL,1UL},{1UL,0xD683L,65526UL,1UL,65535UL},{65530UL,1UL,1UL,65530UL,0x2164L},{0x3218L,0xD683L,0x782BL,0x3218L,65535UL},{0x1843L,0UL,1UL,0x1843L,1UL}},{{0x3218L,65526UL,65526UL,0x3218L,0x823CL},{65530UL,0UL,0x6A9FL,65530UL,1UL},{1UL,0xD683L,65526UL,1UL,65535UL},{65530UL,1UL,1UL,65530UL,0x2164L},{0x3218L,0xD683L,0x782BL,0x3218L,65535UL},{0x1843L,0UL,1UL,0x1843L,1UL}},{{0x3218L,65526UL,65526UL,0x3218L,0x823CL},{65530UL,0UL,0x6A9FL,65530UL,1UL},{1UL,0xD683L,65526UL,1UL,65535UL},{65530UL,1UL,1UL,65530UL,0x2164L},{0x3218L,0xD683L,0x782BL,0x3218L,65535UL},{0x1843L,0UL,1UL,0x1843L,1UL}},{{0x3218L,65526UL,65526UL,0x3218L,0x823CL},{65530UL,0UL,0x6A9FL,65530UL,1UL},{1UL,0xD683L,65526UL,1UL,65534UL},{0UL,65530UL,65530UL,0UL,65535UL},{0x8831L,1UL,0x3218L,0x8831L,65534UL},{0xC2A2L,0x1843L,65530UL,0xC2A2L,0xD0DAL}},{{0x8831L,65535UL,65535UL,0x8831L,0x33A2L},{0UL,0x1843L,65530UL,0UL,0xD0DAL},{0UL,1UL,65535UL,0UL,65534UL},{0UL,65530UL,65530UL,0UL,65535UL},{0x8831L,1UL,0x3218L,0x8831L,65534UL},{0xC2A2L,0x1843L,65530UL,0xC2A2L,0xD0DAL}},{{0x8831L,65535UL,65535UL,0x8831L,0x33A2L},{0UL,0x1843L,65530UL,0UL,0xD0DAL},{0UL,1UL,65535UL,0UL,65534UL},{0UL,65530UL,65530UL,0UL,65535UL},{0x8831L,1UL,0x3218L,0x8831L,65534UL},{0xC2A2L,0x1843L,65530UL,0xC2A2L,0xD0DAL}},{{0x8831L,65535UL,65535UL,0x8831L,0x33A2L},{0UL,0x1843L,65530UL,0UL,0xD0DAL},{0UL,1UL,65535UL,0UL,65534UL},{0UL,65530UL,65530UL,0UL,65535UL},{0x8831L,1UL,0x3218L,0x8831L,65534UL},{0xC2A2L,0x1843L,65530UL,0xC2A2L,0xD0DAL}}};
    int32_t * const l_506[1][4][4] = {{{(void*)0,&g_339,&g_339,(void*)0},{&g_339,(void*)0,&g_339,&g_339},{(void*)0,(void*)0,&g_63,(void*)0},{(void*)0,&g_339,&g_339,(void*)0}}};
    int32_t l_513 = 0xAEE870CCL;
    int16_t ****l_572 = (void*)0;
    int8_t * const *l_586 = (void*)0;
    int8_t * const **l_585[1];
    struct S0 l_588 = {0xB458L,1L};
    const uint64_t *l_693 = &g_71;
    int64_t l_763 = 0xA5333A9C66883669LL;
    int32_t **l_764 = &g_238;
    uint32_t l_789 = 0x982FC733L;
    int8_t *****l_800 = (void*)0;
    uint32_t l_810 = 0x726DCE1FL;
    uint8_t l_812 = 255UL;
    uint8_t l_813 = 1UL;
    union U1 ***l_814 = (void*)0;
    uint32_t l_853 = 0xC09960ECL;
    const int32_t *l_891 = &g_892;
    const int16_t l_936 = (-4L);
    int8_t l_941 = 0x4FL;
    union U1 **l_971 = &g_969;
    int64_t l_1057 = 0L;
    const uint64_t l_1058 = 18446744073709551615UL;
    int16_t ****l_1147 = &g_574[3];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_585[i] = &l_586;
lbl_749:
    for (p_44.f2 = (-2); (p_44.f2 != 12); ++p_44.f2)
    { 
        int32_t *l_501[4][4][5] = {{{&g_63,(void*)0,&g_63,&g_339,&g_2[0]},{&g_2[0],&g_63,&g_63,&g_339,&g_339},{&g_2[2],(void*)0,&g_2[2],&g_339,&g_63},{&g_2[0],&g_63,&g_63,&g_339,&g_339}},{{&g_63,(void*)0,&g_63,&g_339,&g_2[0]},{&g_2[0],&g_63,&g_63,&g_339,&g_339},{&g_2[2],(void*)0,&g_2[2],&g_339,&g_63},{&g_2[0],&g_63,&g_63,&g_339,&g_339}},{{&g_63,(void*)0,&g_63,&g_339,&g_2[0]},{&g_2[0],&g_63,&g_63,&g_339,&g_339},{&g_2[2],(void*)0,&g_2[2],&g_339,&g_63},{&g_2[0],&g_63,&g_63,&g_339,&g_339}},{{&g_63,(void*)0,&g_63,&g_339,&g_2[0]},{&g_2[0],&g_63,&g_63,&g_339,&g_2[0]},{&g_2[0],&g_2[1],&g_2[0],&g_2[1],&g_2[2]},{&g_2[2],(void*)0,(void*)0,&g_63,&g_2[0]}}};
        int i, j, k;
        g_339 ^= ((**g_230) , ((p_48 > l_500[3][3][4]) ^ g_327));
    }
    for (g_344.f1 = 11; (g_344.f1 <= 6); --g_344.f1)
    { 
        uint64_t l_510 = 9UL;
        int16_t ** const *l_534 = &g_230;
        int16_t ** const **l_533 = &l_534;
        int32_t l_537 = 0L;
        int64_t l_582[6][1][6] = {{{0x2B030C267562943DLL,1L,0x2B030C267562943DLL,0xD9527E8FD32BEF51LL,0xD9527E8FD32BEF51LL,0x2B030C267562943DLL}},{{0L,0L,0xD9527E8FD32BEF51LL,1L,0xD9527E8FD32BEF51LL,0L}},{{0xD9527E8FD32BEF51LL,1L,1L,1L,1L,0xD9527E8FD32BEF51LL}},{{0L,0xD9527E8FD32BEF51LL,1L,0xD9527E8FD32BEF51LL,0L,0L}},{{0x2B030C267562943DLL,0xD9527E8FD32BEF51LL,0xD9527E8FD32BEF51LL,0x2B030C267562943DLL,1L,0x2B030C267562943DLL}},{{0x2B030C267562943DLL,1L,0x2B030C267562943DLL,0xD9527E8FD32BEF51LL,0xD9527E8FD32BEF51LL,0x2B030C267562943DLL}}};
        int32_t l_623[1];
        uint8_t l_647 = 0xEFL;
        const uint64_t *l_694 = &g_695;
        uint32_t *l_712[4][4] = {{&g_207,&g_207,&g_628,&g_684},{&g_684,&g_684,&g_684,&g_628},{&g_684,&g_628,&g_628,&g_684},{&g_207,&g_628,&g_684,&g_628}};
        int16_t l_758[3][2][1] = {{{0x7362L},{0L}},{{0L},{0x7362L}},{{0L},{0L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_623[i] = 1L;
        for (g_63 = 0; (g_63 <= (-12)); g_63 = safe_sub_func_int8_t_s_s(g_63, 1))
        { 
            int32_t **l_507 = &g_238;
            uint8_t *l_520 = &g_59.f1;
            int32_t l_523[1][7][1] = {{{3L},{0xB6CAF086L},{0xB6CAF086L},{3L},{0xB6CAF086L},{0xB6CAF086L},{3L}}};
            int i, j, k;
            (*l_507) = l_506[0][0][2];
            l_523[0][0][0] |= ((((*p_45) ^ ((safe_mul_func_int8_t_s_s(l_510, ((safe_rshift_func_uint16_t_u_u(5UL, 15)) > l_513))) != ((g_71 = (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_44.f3, l_510)), (++(*l_520)))), p_44.f3))) >= 0x0DBA7F1445092B72LL))) && 0xD73707B3AF85561BLL) != 0x1E9EL);
        }
        if ((safe_lshift_func_int16_t_s_u(9L, ((((safe_add_func_int32_t_s_s(0L, (((safe_mod_func_int32_t_s_s((l_537 = (0xE3L != ((safe_sub_func_int64_t_s_s((!(((void*)0 == l_533) >= ((safe_mul_func_int8_t_s_s(((p_48 <= 7UL) == l_510), g_235)) && (*p_46)))), g_116[0][4][1].f1)) > p_44.f1))), l_510)) != p_44.f2) == 1L))) , p_44.f3) == l_510) >= l_510))))
        { 
            int8_t *l_550 = &g_103;
            int32_t l_551 = 0xD2FA0D4CL;
            uint32_t *l_558 = (void*)0;
            int32_t l_576[6] = {0L,0L,0L,0L,0L,0L};
            int16_t ****l_590 = &g_574[1];
            int8_t l_666 = (-1L);
            struct S0 *l_669[5][1][7] = {{{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588}},{{&g_344,&g_344,&g_344,&g_344,&g_344,&g_344,&g_344}},{{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588}},{{&g_344,&g_344,&g_344,&g_344,&g_344,&g_344,&g_344}},{{&l_588,&l_588,&l_588,&l_588,&l_588,&l_588,&l_588}}};
            uint32_t *l_682 = &g_207;
            int i, j, k;
            if (((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(0xBEL, (safe_mul_func_uint8_t_u_u(((0xD315E6F914F2E69DLL != (p_48 >= ((((((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((p_47 > (safe_mul_func_int8_t_s_s(((*l_550) = (g_103 && 1L)), (((void*)0 != &l_534) , l_551)))), l_551)), (*g_496))) ^ l_537) || 1UL) , l_510) || 1L) || l_551))) , l_551), (-1L))))) , l_551), p_47)) > 4294967293UL))
            { 
                uint32_t *l_557 = &g_388;
                uint32_t **l_556 = &l_557;
                int32_t l_563 = 1L;
                int16_t l_566 = 0xB5EBL;
                if (((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((*l_556) = &g_235) != l_558), ((p_47 , (safe_add_func_int8_t_s_s((l_551 || p_48), ((safe_sub_func_int16_t_s_s((-1L), l_563)) > 0x492BCE12FA61D416LL)))) & p_44.f3))), 0x2CDEF5D37A51F4B9LL)) , p_44.f3))
                { 
                    return &g_379;
                }
                else
                { 
                    l_576[0] ^= (safe_rshift_func_uint8_t_u_s((255UL >= (l_566 || (+((p_44.f3 && (safe_rshift_func_int8_t_s_u(((*l_550) |= ((safe_mul_func_int16_t_s_s((((g_573 = l_572) != &l_534) , (+(l_551 & p_44.f2))), 2L)) || 0x51L)), 0))) || g_344.f1)))), 4));
                }
                if (g_2[0])
                    continue;
            }
            else
            { 
                const int32_t l_579 = 0xED6AFCB4L;
                struct S0 *l_587 = (void*)0;
                int16_t ***** const l_595 = &l_572;
                int8_t l_604 = 0L;
                uint32_t l_622 = 0UL;
                l_588 = ((((safe_rshift_func_uint8_t_u_u(0x7CL, (l_579 <= ((((safe_div_func_uint32_t_u_u(g_103, ((l_576[0] = ((*g_343) , l_582[5][0][1])) , ((safe_sub_func_uint8_t_u_u(p_44.f3, ((void*)0 != l_585[0]))) || p_48)))) ^ 2L) || 0x996F7B983871EECDLL) != 0x8147C04E82BE98D3LL)))) , g_106) || 18446744073709551613UL) , (*g_343));
                if (p_44.f2)
                { 
                    l_551 &= p_44.f3;
                    return &g_379;
                }
                else
                { 
                    uint8_t l_589 = 0x03L;
                    l_589 ^= p_48;
                    l_590 = l_572;
                }
                for (g_207 = 24; (g_207 > 58); g_207 = safe_add_func_int32_t_s_s(g_207, 1))
                { 
                    int32_t l_605 = 1L;
                    uint8_t l_606 = 0x50L;
                    l_606 = (safe_mul_func_uint8_t_u_u((((((l_595 != &g_573) >= g_2[1]) && ((safe_add_func_uint64_t_u_u(1UL, 0x175BAF2E606FC67DLL)) == ((-9L) && (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(l_604, 0x083671564957EB5ALL)), 5)) , 65532UL), 65533UL)) | p_44.f1) , 0xF6E468ACL)))) <= l_582[5][0][2]) <= l_605), p_44.f1));
                    l_623[0] = (safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s((*p_46), (l_537 = ((**g_190) = ((l_605 || (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((l_579 < (!g_106)) == 0x6ABD2DCD69C878D0LL), l_582[5][0][1])), 0)), ((~p_48) , l_605))) & 0x2523L), l_622)), p_44.f3))) , l_604)))))));
                }
            }
            for (p_44.f4 = 0; (p_44.f4 > 36); ++p_44.f4)
            { 
                uint32_t l_626 = 0UL;
                uint16_t *l_636 = &l_500[6][3][0];
                int8_t *** const *l_643 = &g_171;
                uint32_t **l_667 = (void*)0;
                int32_t l_668 = 4L;
                if (p_44.f1)
                    break;
                l_626 |= g_205;
                if (p_47)
                { 
                    return g_627;
                }
                else
                { 
                    union U1 **l_631 = (void*)0;
                    union U1 *l_633 = &g_116[0][5][1];
                    union U1 **l_632 = &l_633;
                    --g_628;
                    (*l_632) = (void*)0;
                }
                if (l_626)
                    break;
                if (((((l_510 >= p_44.f0) || 0L) == (((*l_636) &= (++(*g_627))) > (((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_59.f1, p_44.f2)), 0xDAL)) > (l_643 != &g_171)) , 1UL))) > 0x9C07L))
                { 
                    int32_t **l_644 = &g_238;
                    int32_t l_645 = 0xAF8CF039L;
                    int32_t l_646[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_646[i][j] = 0L;
                    }
                    (*l_644) = &l_537;
                    --l_647;
                    (*l_644) = &g_2[1];
                }
                else
                { 
                    int64_t *l_653 = &g_24[0][1];
                    int64_t **l_652 = &l_653;
                    int32_t l_654[5] = {0x873BCF1FL,0x873BCF1FL,0x873BCF1FL,0x873BCF1FL,0x873BCF1FL};
                    int i;
                    l_668 |= (((safe_sub_func_int8_t_s_s((((*l_652) = &g_24[0][0]) == &l_582[5][0][1]), (&l_558 == (l_667 = (((l_576[4] = l_654[3]) & ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((l_647 || (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(l_626, (~0UL))) , l_666), p_44.f4))), p_44.f2)) ^ (*g_627)), 13)), p_47)) ^ 0xDEE90E6D67F4CCA0LL)) , &l_558))))) & g_59.f1) , 1L);
                    if (l_513)
                        goto lbl_765;
                }
            }
            if (((l_582[3][0][1] ^ (l_588 , ((l_588 = (*g_343)) , (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x44E4L, (((safe_mod_func_uint8_t_u_u(g_71, ((*l_550) &= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((&p_47 == (((*l_682) = (0x52DF5A9B6240CD93LL && l_551)) , &p_47)), l_537)), 7L)), p_44.f4))))) && g_327) ^ 0x0DL))), p_44.f1))))) >= p_44.f0))
            { 
                uint32_t *l_713 = &g_684;
                uint32_t l_717 = 4294967295UL;
                uint32_t **l_746[2];
                uint64_t l_748 = 8UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_746[i] = &l_558;
                if (p_48)
                { 
                    int32_t l_683 = 0x646EBBA3L;
                    uint64_t *l_691 = &l_510;
                    uint64_t **l_692 = &l_691;
                    int64_t ***l_703 = &g_701;
                    g_684++;
                    (*l_703) = (((((safe_div_func_uint16_t_u_u((0UL || (safe_rshift_func_int16_t_s_s(((((((*l_692) = l_691) == (l_694 = l_693)) , func_49((*g_230))) , (!((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((*g_231) = l_647), 65535UL)) <= g_2[2]), p_44.f4)) , (*g_627)))) ^ p_44.f2), l_683))), 1L)) && l_576[5]) , p_47) , 4UL) , g_701);
                }
                else
                { 
                    uint16_t l_716[2];
                    int32_t l_718 = 0xB628221DL;
                    const uint32_t **l_745 = (void*)0;
                    uint64_t *l_747[2][4][5] = {{{&l_510,&l_510,&g_71,&g_116[0][4][1].f4,(void*)0},{&g_71,&l_510,&l_510,&l_510,&g_71},{(void*)0,&g_116[0][4][1].f4,&g_71,&l_510,&l_510},{&l_510,&l_510,&l_510,&g_125,&l_510}},{{(void*)0,&l_510,&g_116[0][4][1].f4,&g_116[0][4][1].f4,&l_510},{&g_71,&g_125,&l_510,&g_125,&g_71},{&l_510,&g_116[0][4][1].f4,&g_116[0][4][1].f4,&l_510,(void*)0},{&l_510,&g_125,&l_510,&l_510,&l_510}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_716[i] = 2UL;
                    l_718 ^= (g_339 |= (safe_mul_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((((*g_343) , 0x1343A99E821E24DCLL) , (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(((252UL > (1UL >= ((l_712[0][3] != l_713) | (((safe_mod_func_int32_t_s_s(1L, (-1L))) >= (*g_627)) && (*p_45))))) || 0x91L), (*g_627))) && l_716[1]) , p_44.f1), (*p_45)))), 9UL)) > 0x90D9EEE9L) , 0x36B3L), l_717)));
                    if (p_44.f4)
                        break;
                    g_339 |= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((l_576[0] || (safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_717 >= (safe_unary_minus_func_uint64_t_u((g_125 = (safe_mod_func_int32_t_s_s((((p_44.f0 || (g_734[0][2] >= ((((safe_div_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(g_388, ((safe_add_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_745 == (l_582[5][0][1] , l_746[1])), 6)), l_551)) <= l_717) , (-10L)), 0xFF47331A4846FCA4LL)) || 4294967287UL))) > (*p_46)), l_717)) | p_47) || 1L) ^ g_116[0][4][1].f0))) != p_48) < p_44.f1), (-4L))))))), 2UL)) && g_123), l_748)), (*g_627)))), 0xEBL)) <= l_718), p_47)), g_59.f3));
                    if (g_379)
                        goto lbl_749;
                }
                l_537 = g_734[0][2];
                for (g_379 = 0; (g_379 > 59); g_379++)
                { 
                    struct S0 **l_752 = &l_669[2][0][2];
                    if (l_510)
                        goto lbl_749;
                    (*l_752) = &g_344;
                    if (p_44.f3)
                        continue;
                }
            }
            else
            { 
                g_753[1]--;
            }
        }
        else
        { 
            return &g_734[2][1];
        }
        l_623[0] |= ((p_44.f2 != (safe_sub_func_uint16_t_u_u(((l_758[1][0][0] <= ((*g_627) = ((((****l_533) = (safe_div_func_int64_t_s_s((l_537 = p_44.f0), g_753[0]))) >= l_647) < (safe_mul_func_uint8_t_u_u(((l_582[5][0][1] , l_582[0][0][0]) <= 0xEEDAL), 0x47L))))) <= l_763), (*p_45)))) ^ g_734[0][2]);
        if (g_379)
            goto lbl_765;
    }
lbl_765:
    (*l_764) = &g_339;
    for (g_71 = 22; (g_71 > 14); g_71--)
    { 
        int32_t *l_770 = &l_513;
        uint64_t *l_811[7][3] = {{&g_71,&g_71,&g_125},{&g_116[0][4][1].f4,&g_125,&g_125},{&g_125,&g_71,&g_125},{&g_116[0][4][1].f4,&g_71,&g_116[0][4][1].f4},{&g_71,&g_125,&g_125},{&g_71,&g_71,&g_125},{&g_116[0][4][1].f4,&g_125,&g_125}};
        struct S0 l_821 = {-1L,1L};
        int32_t l_832 = 0x4C0FC31BL;
        int32_t l_833 = (-3L);
        int8_t ***l_883[7];
        int32_t l_895[4][5] = {{0x1631AEA2L,0xA1B5ECE1L,0x1631AEA2L,0x1631AEA2L,0xA1B5ECE1L},{0xA1B5ECE1L,0x1631AEA2L,0L,0x1631AEA2L,0L},{0x1631AEA2L,0x1631AEA2L,0xA1B5ECE1L,0x1631AEA2L,0x1631AEA2L},{0L,0x1631AEA2L,0L,0L,0x1631AEA2L}};
        uint8_t l_978 = 0x80L;
        int32_t l_1000 = 0x46E9BF9DL;
        int64_t **l_1023 = &g_702[3];
        union U1 ** const *l_1036 = &g_973;
        int8_t *****l_1052[6][4][3] = {{{(void*)0,&g_799,(void*)0},{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,(void*)0}},{{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799}},{{(void*)0,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{(void*)0,&g_799,(void*)0}},{{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,(void*)0},{&g_799,&g_799,&g_799}},{{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{(void*)0,&g_799,&g_799}},{{&g_799,&g_799,&g_799},{&g_799,&g_799,&g_799},{(void*)0,&g_799,(void*)0},{&g_799,&g_799,&g_799}}};
        uint8_t l_1093 = 0xB5L;
        int8_t l_1101 = 0xDEL;
        uint8_t *l_1163 = &l_812;
        int32_t *l_1164 = &g_1008;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_883[i] = &g_165;
    }
    (*g_238) ^= (safe_sub_func_int64_t_s_s((0x7DAEL != 0x5F6FL), 0L));
    return &g_1041;
}



static union U1  func_49(int16_t * p_50)
{ 
    union U1 l_57 = {1L};
    union U1 *l_58[5] = {&l_57,&l_57,&l_57,&l_57,&l_57};
    int16_t *l_61 = &g_59.f0;
    int16_t **l_60 = &l_61;
    int32_t l_336 = 0xBEFF2D9EL;
    int32_t l_337[1][1];
    int32_t *l_338 = &g_339;
    int16_t l_384 = 0x4088L;
    int8_t **l_402 = (void*)0;
    int8_t ****l_418 = &g_171;
    const int8_t **l_421 = (void*)0;
    const int8_t ***l_420 = &l_421;
    const int8_t ****l_419 = &l_420;
    const int32_t l_432 = 9L;
    uint64_t l_435 = 0xF01A00784C33A222LL;
    int32_t *l_451 = (void*)0;
    int16_t ****l_489 = (void*)0;
    uint32_t *l_492 = (void*)0;
    union U1 l_495 = {0x85C7L};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_337[i][j] = 0x86E7D858L;
    }
    (*l_338) ^= ((l_336 = ((safe_add_func_uint32_t_u_u(g_24[0][0], 1L)) , func_53(((g_55[3][3][1] != ((g_59 = l_57) , &g_56)) , ((*l_60) = &g_36[1]))))) && l_337[0][0]);
    for (g_98 = (-18); (g_98 >= 30); ++g_98)
    { 
        int32_t **l_342[2];
        struct S0 *l_348 = &g_344;
        int16_t ***l_382 = &g_230;
        int16_t ****l_381 = &l_382;
        int16_t *****l_380 = &l_381;
        const int8_t *l_400[1][1];
        const int8_t **l_399 = &l_400[0][0];
        int8_t ****l_415 = (void*)0;
        union U1 l_425 = {1L};
        int32_t l_458[4] = {3L,3L,3L,3L};
        uint64_t l_494 = 0x5C83AC0BDFBD691CLL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_342[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_400[i][j] = &l_57.f2;
        }
        g_238 = (l_338 = &g_2[2]);
        for (g_59.f4 = 0; (g_59.f4 <= 0); g_59.f4 += 1)
        { 
            uint32_t *l_369[3][4];
            int32_t l_383 = 0xEEDB1D59L;
            int8_t **l_396[2];
            const int8_t ***l_401 = &l_399;
            int8_t *****l_416 = (void*)0;
            int8_t *****l_417[5] = {&l_415,&l_415,&l_415,&l_415,&l_415};
            union U1 l_424 = {0x13C2L};
            uint8_t l_446 = 4UL;
            int16_t **l_488 = &g_231;
            uint64_t *l_491 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_369[i][j] = &g_207;
            }
            for (i = 0; i < 2; i++)
                l_396[i] = &g_166[0][5];
            for (g_63 = 0; (g_63 <= 0); g_63 += 1)
            { 
                struct S0 **l_345 = (void*)0;
                struct S0 *l_347 = &g_344;
                struct S0 **l_346[2][2] = {{&l_347,&l_347},{&l_347,&l_347}};
                int32_t l_360 = 0x73A63B41L;
                union U1 *l_374 = &g_116[0][1][0];
                int32_t l_376 = (-5L);
                int32_t l_377[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_377[i][j] = (-1L);
                }
                l_348 = g_343;
                for (g_106 = 1; (g_106 <= 5); g_106 += 1)
                { 
                    uint64_t *l_351 = &l_57.f4;
                    uint64_t *l_352 = (void*)0;
                    uint64_t *l_353[4][6][3] = {{{&g_71,(void*)0,&g_71},{&l_57.f4,(void*)0,(void*)0},{&g_71,(void*)0,(void*)0},{(void*)0,&l_57.f4,&g_59.f4},{&g_59.f4,(void*)0,&g_59.f4},{&g_71,(void*)0,(void*)0}},{{&g_71,(void*)0,&g_59.f4},{(void*)0,&g_71,&g_59.f4},{&g_59.f4,&g_59.f4,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_71,&g_125,&g_71},{&g_71,(void*)0,&g_71}},{{&g_59.f4,&g_59.f4,&g_71},{(void*)0,&g_71,&g_71},{&g_71,(void*)0,&g_71},{&l_57.f4,(void*)0,(void*)0},{&g_71,(void*)0,(void*)0},{(void*)0,&l_57.f4,&g_59.f4}},{{&g_59.f4,(void*)0,&g_59.f4},{&g_71,(void*)0,(void*)0},{&g_71,(void*)0,&g_59.f4},{(void*)0,&g_71,&g_59.f4},{&g_59.f4,&g_59.f4,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                    int16_t *l_375[4][2][3] = {{{&g_344.f1,&g_344.f0,&g_344.f0},{&g_344.f1,&l_57.f0,&g_344.f1}},{{&g_344.f0,&g_344.f0,&g_344.f1},{&g_205,&g_344.f0,&g_344.f1}},{{(void*)0,&g_205,&g_344.f1},{&g_116[0][4][1].f0,&l_57.f0,&g_116[0][4][1].f0}},{{&g_344.f1,&g_116[0][4][1].f0,&l_57.f0},{&l_57.f0,&g_116[0][4][1].f0,&g_344.f1}}};
                    uint16_t *l_378 = &g_379;
                    int8_t *l_385 = &g_105[2];
                    int i, j, k;
                    l_337[0][0] |= (safe_add_func_uint64_t_u_u((g_71++), ((0x83L > (safe_mul_func_int16_t_s_s((g_24[g_63][g_59.f4] < (safe_div_func_uint16_t_u_u(((l_360 > ((*l_385) &= ((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_369[1][1] != ((((safe_mul_func_int8_t_s_s((((((((*l_378) = ((((!2L) <= (~(l_377[0][0] = (l_376 = ((**l_60) &= (((void*)0 != l_374) , g_24[g_63][g_59.f4])))))) != (*l_338)) <= g_70[3])) <= l_360) , (void*)0) != l_380) , l_377[0][0]) && (*l_338)), 6UL)) >= g_59.f0) > 1L) , &g_207)), 8UL)) | 0xB8333B37L), (**g_190))) , l_383), g_106)) == g_327) || 1UL), 4)) | l_384))) , (*l_338)), (**g_190)))), l_383))) != (*l_338))));
                }
                l_337[0][0] ^= (l_383 <= ((((safe_div_func_uint16_t_u_u(65528UL, g_388)) > 0x273B3ADBL) && (l_376 = (((g_339 = (((safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((!((((((((*g_171) = (*g_171)) != l_396[1]) != (l_376 <= 0xE9D6L)) > 4294967289UL) & 4294967286UL) >= (*g_231)) <= l_383)), l_360)) < l_377[0][0]) && l_383) == (*l_338)) > l_383), (*l_338))) & g_105[3]), (*l_338))) & g_2[2]) != 0xD5A0L)) , (**g_230)) ^ l_383))) < (*l_338)));
            }
            g_63 ^= (safe_lshift_func_int8_t_s_s((l_383 &= (((*l_401) = l_399) == l_402)), (((g_24[g_59.f4][(g_59.f4 + 1)] <= (((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((*l_338), ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_206, (((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(((l_418 = l_415) != l_419), 6)) <= (*l_338)) <= g_24[g_59.f4][(g_59.f4 + 1)]) || 0L), 1UL)) ^ g_70[4]) , (*l_338)))), 1UL)) ^ g_205))) , g_24[g_59.f4][(g_59.f4 + 1)]), (*l_338))) < g_70[3]) | 65527UL)) || (-9L)) >= g_344.f0)));
            g_339 = ((((safe_lshift_func_int16_t_s_s((*p_50), 9)) , (((((l_424 , (l_425 = g_116[0][4][1])) , (*l_338)) > (((safe_add_func_int64_t_s_s((((((18446744073709551615UL >= ((g_24[g_59.f4][(g_59.f4 + 1)] = ((safe_rshift_func_uint8_t_u_u((&g_388 != l_369[1][1]), g_205)) <= g_205)) > 0UL)) , (*l_338)) >= 0L) | l_432) <= (-1L)), (-10L))) , 0xCF76A16CL) <= l_424.f0)) <= g_339) > g_59.f0)) | g_205) >= 0xD6A5L);
            if (((safe_sub_func_int64_t_s_s(l_424.f2, (((l_435 &= l_424.f1) < (l_424.f0 || (safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s(((*g_238) == (!((safe_add_func_uint64_t_u_u((~(p_50 != l_61)), (((((void*)0 == l_369[2][2]) >= (*l_338)) , 0x32L) , l_383))) == (*g_238)))), (*l_338))), g_2[0])) | 4UL), (*l_338))))) || l_424.f1))) < 0x08113AEDL))
            { 
                ++l_446;
            }
            else
            { 
                int64_t l_463[4] = {1L,1L,1L,1L};
                int32_t l_464 = 0x3CC63003L;
                int8_t ** const *l_471 = (void*)0;
                uint64_t *l_490 = &g_125;
                const uint32_t l_493 = 4294967295UL;
                int i;
                for (g_339 = 0; (g_339 == (-28)); g_339--)
                { 
                    l_451 = &l_337[0][0];
                }
                if ((*g_238))
                    break;
                for (l_425.f0 = 0; (l_425.f0 == (-29)); --l_425.f0)
                { 
                    uint16_t l_454 = 0x363EL;
                    struct S0 l_457[3] = {{0x04E5L,0x9F7DL},{0x04E5L,0x9F7DL},{0x04E5L,0x9F7DL}};
                    union U1 l_470 = {0x1BBEL};
                    int i;
                    ++l_454;
                }
            }
            g_339 = (l_494 ^= (l_337[0][0] = 1L));
        }
    }
    g_238 = (void*)0;
    return l_495;
}



static int16_t  func_53(int16_t * p_54)
{ 
    int32_t *l_62 = &g_63;
    int32_t *l_64 = &g_63;
    int32_t l_65 = 0L;
    int32_t *l_66 = &l_65;
    int32_t *l_67 = &l_65;
    int32_t *l_68[4][4] = {{&g_63,&g_2[2],&g_63,&g_63},{&g_2[2],&g_2[2],&g_63,&g_2[2]},{&g_2[2],&g_63,&g_63,&g_2[2]},{&g_63,&g_2[2],&g_63,&g_63}};
    int16_t * const l_78 = &g_36[0];
    uint16_t *l_97[5][7];
    union U1 *l_99 = &g_59;
    int16_t *l_136 = &g_36[1];
    int16_t **l_135 = &l_136;
    int16_t ***l_134 = &l_135;
    int16_t ****l_133[5][1][6] = {{{&l_134,&l_134,&l_134,&l_134,&l_134,&l_134}},{{&l_134,&l_134,&l_134,&l_134,&l_134,&l_134}},{{&l_134,&l_134,&l_134,&l_134,&l_134,&l_134}},{{&l_134,&l_134,&l_134,&l_134,&l_134,&l_134}},{{&l_134,&l_134,&l_134,&l_134,&l_134,&l_134}}};
    struct S0 l_198[4][3] = {{{0L,0xA4FFL},{0L,0xA4FFL},{0L,0xA4FFL}},{{0L,0xA4FFL},{0L,0xA4FFL},{0L,0xA4FFL}},{{0L,0xA4FFL},{0L,0xA4FFL},{0L,0xA4FFL}},{{0L,0xA4FFL},{0L,0xA4FFL},{0L,0xA4FFL}}};
    int8_t ***l_262 = &g_165;
    const union U1 l_266 = {0x0FF0L};
    uint8_t l_294 = 0x31L;
    int32_t **l_298 = (void*)0;
    int32_t **l_299 = &l_67;
    int32_t **l_300 = (void*)0;
    uint64_t l_301 = 0UL;
    int32_t l_325 = 0x2E55EC79L;
    uint32_t l_326 = 1UL;
    int64_t l_334 = 0xFC0601BAD9EB1176LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_97[i][j] = &g_98;
    }
    g_71--;
    for (g_59.f4 = 0; (g_59.f4 <= 12); ++g_59.f4)
    { 
        int16_t l_79[7];
        int32_t *l_121 = &l_65;
        int32_t l_124 = 6L;
        int8_t * const l_182 = (void*)0;
        int32_t l_183 = 0xD16A1DD2L;
        struct S0 *l_199 = &l_198[3][2];
        uint32_t *l_201 = &g_106;
        uint32_t l_268 = 18446744073709551615UL;
        int32_t **l_297[3][4] = {{&l_68[3][1],&l_66,(void*)0,&l_66},{&l_66,&l_121,(void*)0,(void*)0},{&l_68[3][1],&l_68[3][1],&l_66,(void*)0}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_79[i] = 0xBEC1L;
    }
    g_238 = ((*l_299) = &l_65);
    if ((l_301 , (g_327 ^= ((safe_rshift_func_int8_t_s_s(((((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((0x02E813D55CEC3518LL == ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((~0L), (*g_238))), (*l_67))) < ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((*l_66), ((*l_62) < l_325))), 0x823A494EL)) > 0UL), (*l_64))) < (*l_62)), (*l_66))), (*l_64))) , (*l_67)))), (*l_64))), g_116[0][4][1].f1)) | 9UL) <= l_326) , (*l_62)), 3)) >= (*l_64)))))
    { 
        int16_t l_328 = 1L;
        int16_t ****l_331 = &l_134;
        int16_t *****l_332 = &l_133[1][0][1];
        uint16_t l_333 = 0xA815L;
        (*g_238) &= (((l_328 > (g_2[2] == (safe_rshift_func_uint8_t_u_u((((void*)0 == (*l_262)) ^ (((*l_332) = l_331) != (((((2L <= (((((0L && 1L) && 0xE4L) >= (*p_54)) | (-1L)) < l_328)) != l_328) || 0x65524AE8L) , l_328) , &l_134))), l_333)))) >= (*l_62)) | l_334);
    }
    else
    { 
        uint16_t l_335 = 0x40E0L;
        return l_335;
    }
    (*l_299) = &g_2[2];
    return (*g_191);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_116[i][j][k].f1, "g_116[i][j][k].f1", print_hash_value);
                transparent_crc(g_116[i][j][k].f2, "g_116[i][j][k].f2", print_hash_value);
                transparent_crc(g_116[i][j][k].f3, "g_116[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_344.f0, "g_344.f0", print_hash_value);
    transparent_crc(g_344.f1, "g_344.f1", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_734[i][j], "g_734[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_753[i], "g_753[i]", print_hash_value);

    }
    transparent_crc(g_868.f0, "g_868.f0", print_hash_value);
    transparent_crc(g_868.f1, "g_868.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_890[i], "g_890[i]", print_hash_value);

    }
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_899, "g_899", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1006[i], "g_1006[i]", print_hash_value);

    }
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1379, "g_1379", print_hash_value);
    transparent_crc(g_1563, "g_1563", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1697[i][j][k], "g_1697[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1752[i][j], "g_1752[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2023, "g_2023", print_hash_value);
    transparent_crc(g_2123, "g_2123", print_hash_value);
    transparent_crc(g_2299, "g_2299", print_hash_value);
    transparent_crc(g_2357, "g_2357", print_hash_value);
    transparent_crc(g_2413, "g_2413", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2510[i], "g_2510[i]", print_hash_value);

    }
    transparent_crc(g_2578, "g_2578", print_hash_value);
    transparent_crc(g_2632, "g_2632", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2682[i][j], "g_2682[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2859.f0, "g_2859.f0", print_hash_value);
    transparent_crc(g_2859.f1, "g_2859.f1", print_hash_value);
    transparent_crc(g_2910, "g_2910", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
