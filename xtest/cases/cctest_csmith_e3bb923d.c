// SPDX-License-Identifier: MIT
// cctest_csmith_e3bb923d.c --- cctest case csmith_e3bb923d (csmith seed 3820720701)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9060934a */

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

// Options:   -s 3820720701 -o /tmp/csmith_gen_cgn1aok8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint8_t  f1;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
   const int64_t  f1;
   int64_t  f2;
};

union U2 {
   uint64_t  f0;
};

union U3 {
   uint16_t  f0;
   int32_t  f1;
};


static uint32_t g_15 = 0UL;
static uint32_t g_24 = 0x9478C9DFL;
static uint64_t g_37 = 0x7AA2967684ABF0A6LL;
static uint32_t g_40 = 1UL;
static struct S0 g_41 = {3UL,1UL};
static int8_t g_59 = 0xF9L;
static uint8_t g_68[3][5][3] = {{{0x35L,0UL,246UL},{0xD5L,0UL,0xD5L},{0xDDL,0x35L,246UL},{0xDDL,0xDDL,0x35L},{0xD5L,0x35L,0x35L}},{{0x35L,0UL,246UL},{0xD5L,0UL,0xD5L},{0xDDL,0x35L,246UL},{0xDDL,0xDDL,0x35L},{0xD5L,0x35L,0x35L}},{{0x35L,0UL,246UL},{0xD5L,0UL,0xD5L},{0xDDL,0x35L,246UL},{0xDDL,0xDDL,0x35L},{0xD5L,0x35L,0x35L}}};
static uint8_t g_69[1][3] = {{7UL,7UL,7UL}};
static int16_t g_118 = 0x2FF3L;
static uint8_t g_141[3] = {1UL,1UL,1UL};
static int32_t g_143[3] = {0x9EE848C4L,0x9EE848C4L,0x9EE848C4L};
static int32_t g_145 = 1L;
static uint64_t g_146 = 0xA3F67225D3E5EC2FLL;
static uint8_t g_149 = 0x47L;
static int32_t g_150 = 0x956F5242L;
static int32_t g_151 = 5L;
static uint32_t g_156 = 0x32A4309CL;
static uint16_t g_159 = 65530UL;
static union U1 g_169 = {0x2D939DEFL};
static uint32_t g_179[2][3] = {{1UL,1UL,1UL},{4294967289UL,4294967289UL,4294967289UL}};



static const int16_t  func_1(void);
static union U2  func_2(union U2  p_3, union U3  p_4, union U1  p_5, int16_t  p_6);
static union U2  func_7(uint64_t  p_8, int16_t  p_9, int16_t  p_10, uint64_t  p_11);
static int8_t  func_16(const uint32_t  p_17);




static const int16_t  func_1(void)
{ 
    int8_t l_12 = (-2L);
    union U3 l_168 = {0x2624L};
    struct S0 l_182[1] = {{2UL,0xCAL}};
    struct S0 l_183 = {4294967295UL,0x07L};
    int i;
    l_183 = (func_2(func_7(l_12, (safe_lshift_func_uint8_t_u_s(g_15, func_16((g_15 & ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0xE6D39C7C6F1FDBD0LL && g_15), 7)), 4)), l_12)) <= l_12))))), g_15, g_15), l_168, g_169, l_168.f0) , l_182[0]);
    return g_169.f0;
}



static union U2  func_2(union U2  p_3, union U3  p_4, union U1  p_5, int16_t  p_6)
{ 
    uint64_t l_170 = 18446744073709551615UL;
    int32_t l_175 = 1L;
    int32_t l_178 = 0xD0F75635L;
    p_4.f1 = ((g_40 ^= l_170) , (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((l_175 = p_5.f0), ((~0x54584B11L) & ((func_7((g_146 ^= (safe_unary_minus_func_uint16_t_u(g_151))), p_3.f0, l_170, p_5.f0) , p_6) || 255UL)))) || p_3.f0) || g_145), 7)));
    --g_179[0][1];
    return p_3;
}



static union U2  func_7(uint64_t  p_8, int16_t  p_9, int16_t  p_10, uint64_t  p_11)
{ 
    uint8_t l_83[1];
    int32_t l_86 = 0x316F5451L;
    uint16_t l_101 = 0UL;
    int32_t l_121 = 0x68035757L;
    int32_t l_127 = (-1L);
    int32_t l_131[5][4] = {{(-10L),(-7L),(-2L),(-7L)},{(-7L),0x8541D729L,(-2L),(-2L)},{(-10L),(-10L),(-7L),(-2L)},{0x21A5A11BL,0x8541D729L,0x21A5A11BL,(-7L)},{0x21A5A11BL,(-7L),(-7L),0x21A5A11BL}};
    int32_t l_155 = 0x871B159BL;
    union U1 l_164 = {0L};
    union U2 l_167 = {0x9050E94D9BCEA6A7LL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_83[i] = 0xF3L;
    if (p_9)
    { 
        union U2 l_75 = {1UL};
        return l_75;
    }
    else
    { 
        int64_t l_76[4][3] = {{3L,(-9L),3L},{0xFA5B36276A268257LL,0xFA5B36276A268257LL,0xFA5B36276A268257LL},{3L,(-9L),3L},{0xFA5B36276A268257LL,0xFA5B36276A268257LL,0xFA5B36276A268257LL}};
        int32_t l_120[3][5][5] = {{{(-1L),(-1L),(-1L),(-5L),0x953B525EL},{0L,0x5250F4D7L,2L,2L,0x5250F4D7L},{4L,(-5L),(-8L),0x51E483D7L,4L},{0x5250F4D7L,(-8L),2L,0xFF68F1F7L,0L},{0x953B525EL,0x51E483D7L,(-1L),1L,(-1L)}},{{0x5250F4D7L,0x5250F4D7L,0x61DE5BB5L,(-8L),9L},{4L,1L,0x7DACB8C3L,1L,4L},{0L,2L,(-1L),0xFF68F1F7L,0xFF68F1F7L},{(-1L),1L,(-1L),0x51E483D7L,0x953B525EL},{9L,0x5250F4D7L,(-8L),2L,0xFF68F1F7L}},{{4L,0x51E483D7L,(-8L),(-5L),4L},{0xFF68F1F7L,(-8L),(-8L),0xFF68F1F7L,9L},{0x953B525EL,(-5L),(-1L),(-1L),(-1L)},{0xFF68F1F7L,0x5250F4D7L,(-1L),(-8L),0L},{4L,(-1L),0x7DACB8C3L,(-1L),4L}}};
        uint32_t l_152 = 0xF0FAE34BL;
        int i, j, k;
        l_86 = ((l_76[0][2] = 9L) >= (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((g_59 &= p_11) && ((safe_rshift_func_uint16_t_u_u(l_83[0], (safe_lshift_func_int8_t_s_u((g_41 , g_68[0][4][1]), p_8)))) ^ g_40)) ^ g_15), 1UL)), g_40)));
        if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u(g_41.f1, ((p_10 & (safe_lshift_func_uint8_t_u_s(p_11, 4))) >= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x7EL, 1)), l_101))))) ^ 1UL) == 0xE8DA2FB924F1449ELL), l_101)), l_76[0][2])), 5)))
        { 
            int32_t l_119 = 0x08E2A1EEL;
            l_121 |= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((g_37 = l_76[0][2]) , (p_11 < (l_120[0][2][3] |= (((safe_rshift_func_int8_t_s_s((g_41 , (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((g_118 &= (safe_mul_func_uint8_t_u_u((p_10 | p_10), g_59))), 0x908823B973E414CELL)), l_119)) < p_8), g_41.f0)), l_119))), l_86)) >= g_69[0][1]) ^ l_119)))), 12)) ^ p_8), 13));
        }
        else
        { 
            int32_t l_132 = (-1L);
            int32_t l_142 = 0xB834B12EL;
            int32_t l_144[2];
            int i;
            for (i = 0; i < 2; i++)
                l_144[i] = 0xD1301089L;
            for (g_40 = 0; (g_40 < 28); g_40 = safe_add_func_int64_t_s_s(g_40, 4))
            { 
                struct S0 l_126 = {0x66BBB0B7L,7UL};
                int32_t l_128 = 0xEB138F2FL;
                int32_t l_129 = 0L;
                int32_t l_130 = 1L;
                l_120[0][0][1] ^= (safe_lshift_func_int8_t_s_u(g_69[0][1], (l_126 , l_126.f0)));
                g_141[1] = ((++g_68[0][4][1]) <= (safe_sub_func_uint32_t_u_u((1L == p_8), (0UL != (safe_rshift_func_uint8_t_u_s((((((safe_mod_func_uint32_t_u_u(4294967295UL, g_69[0][2])) <= 1L) > g_69[0][2]) , 1UL) != g_59), g_59))))));
                g_146--;
            }
            l_121 = (g_149 = 0xF86E789AL);
            --l_152;
        }
        g_156++;
    }
    ++g_159;
    l_121 = (safe_div_func_uint8_t_u_u(((l_164 , (((255UL <= (l_86 ^= 0x1EL)) , (safe_lshift_func_uint8_t_u_s(p_10, l_131[1][3]))) <= p_8)) , 252UL), p_10));
    return l_167;
}



static int8_t  func_16(const uint32_t  p_17)
{ 
    int64_t l_36 = (-1L);
    struct S0 l_42 = {0x1CE094BFL,4UL};
    int32_t l_71 = 0x4487F17EL;
    if ((0x8064L <= (((g_37 &= ((--g_24) , (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((0UL <= g_24) & (((safe_sub_func_uint16_t_u_u((!(safe_mod_func_uint8_t_u_u((18446744073709551613UL == 0L), l_36))), 0xC90EL)) & 255UL) != p_17)), g_24)), p_17)))) > 0x184EB300A9E1A0E1LL) , p_17)))
    { 
        union U3 l_38[2] = {{2UL},{2UL}};
        struct S0 l_45 = {0xE1684592L,250UL};
        const int32_t l_58 = (-1L);
        int i;
        for (g_24 = 0; (g_24 <= 1); g_24 += 1)
        { 
            uint8_t l_39 = 6UL;
            int32_t l_70[2][5] = {{0L,0L,0L,0L,0L},{0x2F891D98L,0x4B380B77L,0x2F891D98L,0x4B380B77L,0x2F891D98L}};
            int i, j;
            for (g_37 = 0; (g_37 <= 1); g_37 += 1)
            { 
                g_40 |= (l_39 = (p_17 , 0x7AB83DE3L));
            }
            l_42 = g_41;
            if ((safe_sub_func_uint16_t_u_u(g_41.f1, (((l_45 , (~((safe_mod_func_uint16_t_u_u(g_24, ((l_42.f0 || p_17) & p_17))) , l_39))) == g_41.f0) >= p_17))))
            { 
                g_59 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((0x06L ^ p_17), ((((g_24 | (safe_mul_func_int16_t_s_s(((!g_40) && l_36), p_17))) < l_58) , g_41.f0) != g_41.f1))), 12)), g_24));
            }
            else
            { 
                l_70[1][1] = (p_17 == (safe_mod_func_int8_t_s_s(p_17, (((safe_lshift_func_uint16_t_u_u(((g_69[0][1] ^= (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((g_68[0][4][1] = (g_40 ^ l_39)) | p_17), 0x56L)), 7))) | p_17), 1)) == 1UL) , g_69[0][2]))));
                l_71 |= (0xE3CFE890704A96E5LL & 0xD17753CA6AFE108DLL);
            }
        }
    }
    else
    { 
        for (g_40 = 0; (g_40 != 59); ++g_40)
        { 
            struct S0 l_74 = {0x4C0F6006L,0xABL};
            g_41 = l_74;
            for (l_36 = 0; (l_36 <= 2); l_36 += 1)
            { 
                if (g_41.f0)
                    break;
                if (l_74.f1)
                    continue;
            }
        }
    }
    return p_17;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_179[i][j], "g_179[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
